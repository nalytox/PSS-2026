/*
    Hola, y bienvenido a este codigo de repaso sobre la materia de punteros y listas enlazadas.

                                ⠀⠀⠀⠀⠀⠀⠀⣠⣠⣶⣿⣷⣿⣿⣿⣷⣷⣶⣤⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
                                ⠀⠀⠀⠀⠀⣤⣾⣿⢿⣻⡽⣞⣳⡽⠚⠉⠉⠙⠛⢿⣶⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀
                                ⠀⠀⠀⠀⣼⣿⣿⢻⣟⣧⢿⣻⢿⠀⠀⠀⠀⠀⠀⠀⠻⣿⣧⠀⠀⠀⠀⠀⠀⠀⠀
                                ⠀⠀⢀⣾⣿⡿⠞⠛⠚⠫⣟⡿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠘⢿⣧⠀⠀⠀⠀⠀⠀⠀
                                ⠀⠀⣼⣿⡟⠀⠀⠀⠀⠀⠈⢻⡽⣆⠀⠀⣴⣷⡄⠀⠀⠀⠘⣿⡆⠀⠀⣀⣠⣤⡄
                                ⠀⠀⣿⣿⠁⠀⠀⠀⠀⠀⠀⠈⣿⠿⢷⡀⠘⠛⠃⠀⠀⠀⠀⣿⣅⣴⡶⠟⠋⢹⣿
                                ⠀⠀⢻⣿⡀⠀⠀⠀⣾⣿⡆⠀⢿⣴⣴⡇⠀⠀⠀⠀⠀⠀⢠⡟⠋⠁⠀⠀⠀⢸⣿
                                ⠀⠀⠈⢿⣇⠀⠀⠀⠀⠉⠁⠀⠀⠉⠉⠀⠀⠀⠀⠀⠀⢀⡾⠁⠀⠀⠀⠀⠀⣾⡏
                                ⠀⠀⠀⠈⢿⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⢸⠁⠀⠀⠀⠀⠀⣼⡟⠀
                                ⠀⠀⠀⠀⠀⣹⣿⣶⣤⣀⡀⠀⠀⠀⠀⠀⣀⠀⠀⠂⠁⠀⠐⢧⡀⠀⢀⣾⠟⠀⠀
                                ⠀⠀⢀⣰⣾⠟⠉⠀⠀⠉⠉⠀⠐⠂⠀⠁⠁⠀⠀⠀⠀⠀⠀⠈⢿⣶⡟⠋⠀⠀⠀
                                ⣠⣶⡿⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⣿⡆⠀⠀⠀⠀
                                ⢻⣧⣄⠀⠀⠀⢰⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⠀⠀⠀⠀
                                ⠀⠉⠛⠿⣷⣶⣾⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⠀⠀⠀⠀
                                ⠀⠀⠀⠀⠀⠀⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣤⣤⣾⣿⠀⠀⠀⠀
                                ⠀⠀⠀⠀⠀⠀⢹⣿⣿⣿⣿⣷⣦⡀⠀⢀⣀⠀⠀⠀⣠⣴⣿⣿⣿⣿⣷⠀⠀⠀⠀
                                ⠀⠀⠀⠀⠀⠀⠀⠻⢿⣿⣿⣿⣿⠿⠿⠿⠿⠿⠿⠿⠿⣿⣿⣿⠿⠟⠁⠀⠀⠀⠀


    A continuación, te presentaré un código que implementa un MergeSort mediante listas enlazadas.
    Esta actividad tiene un objetivo en especial, y es que se tratan dos listas enlazadas A y B,
    las cuales se busca ordenar teniendo en cuenta que estas ya se encuentran ordenadas.
    La explicación se muestra en el siguiente enunciado:

    Escriba una función que tome punteros a dos listas enlazadas ordenadas, cree una nueva lista
    ordenada enlazada, fusionando efectivamente las dos listas ordenadas en una, y devuelva un
    puntero a la cabeza de la nueva lista. Las dos listas originales no deben ser modificadas.
    La memoria para la nueva lista debe ser solicitada usando malloc. 
    La soluciondebe ser eficiente, es decir, las listas originales deben ser visitadas una sola vez.
*/


#include <stdio.h>
#include <stdlib.h>

//  Primero que todo definimos nuestra estructura a utilizar
typedef struct nodo {   //  definiré una estructura nodo 
  int dato;     //  Esta tendrá un atributo dato de tipo entero
  struct nodo* sig;     //  Y un puntero a su siguiente nodo
}nodo;  //  Y definimos el tipo como nodo

//----------------Explicación----------------//
/*  En el siguiente bloque de código lo que busco es crear una función que genere nodos, es decir tengo que tener en cuenta
que debo pedir un espacio de memoria de su mismo tipo y tamaño de estructura (nodo). Luego de ello tenemos que definirle
valores iniciales a sus atributos, siempre asegurandonos de rellenarlos todos.
Finalmente, debemos retornar el nodo, para de esta manera poder guardar el espacio de memoria solicitado

NOTA: La creación de la función generar es siempre bastante similar, variando unicamente cuando nuestra estructura varía
Con esto me refiero a que los cambios se ven principalmente en los atributos a rellenar.
*/
//-------------------------------------------//
nodo* generar(int valor){   //  Creamos nuestra función generar que toma un entero llamado valor
  nodo* nuevo = (nodo*)malloc(sizeof(nodo));        //  Defino un nuevo nodo de tipo nodo que será un espacio de memoria de tipo nodo puntero y tamaño nodo
  nuevo ->dato = valor;     //  Defino su atributo dato como el valor ingresado
  nuevo->sig = NULL;        //  Defino su nodo siguiente como un nodo Nulo
  return nuevo;     //  Finalmente retorno mi nuevo nodo para poder guardarlo y que pueda salir del scope
  //Nota: El término scope se refiere a las secciones de código en que una variable pueda observar, interactuar o continuar su ciclo de vida
}

//----------------Explicación----------------//
/*  Luego, crearemos nuestra función agregar, en este caso cabe aclarar que existen principalmente dos tipos de lógica para poder
realizar nuestra función agregar.
La primera, y la que veremos en esta implementación es *SIN* la comprobación de si nuestro nodo inicial es NULL,
lo que es decir, si no comenzamos con una lista, no la creamos.
La segunda, es con la comprobación de si tenemos o no una lista existente, la cual usa doble punteros y se verá con mayor detenimiento
en la implementación de la P3.

Con respecto a la que ocuparemos en esta implementación, tenemos que unicamente debemos de crear un nuevo nodo con el valor ingresado.
Luego de ello, creamos un auxiliar que nos ayude a iterar por los nodos de la lista hasta toparnos con que el siguiente donde debería 
estar posicionado nuestro nodo es NULL
Nota: una forma mas abreviada de realizar esta condición es la siguiente:

if (nodo) nos retorna true si es que el nodo existe. Asimismo podemos extrapolar esto a nodo->siguiente, nodo->izquierda, etc. Siempre y cuando nos refiramos a un nodo
if (!nodo) nos retorna true si el nodo es un NULL. Al igual que el enunciado anterior, se puede usar con todo tipo de puntero a nodos.

Esto nos resulta particularmente útil para realizar condiciones ya que podemos acortar los condicionales y tener un codigo mucho mas prolijo
Resumen: if (nodo) == if (nodo != NULL) ; if (!nodo) == if (nodo == NULL)
*/
//-------------------------------------------//

void agregar(nodo* cabeza, int valor){  //  Definimos nuestra función agregar que no retorne nada y me reciba una tanto una LE como un valor
//  Nota de nomenclatura, usaré LE para referirme a una Lista Enlazada o su raiz/cabeza
  nodo* nuevo = generar(valor);     //  Generamos un nuevo nodo con el valor ingresado
  nodo * aux = cabeza;      //  Creamos el auxiliar para poder recorrer la lista
  //    Esto es de altisima importancia debido a que si comenzamos a iterar utilizando la cabeza como variable, vamos a desestructurar o destruir la LE ya que se estaría modificando
  while (aux->sig){ //  Ahora, compruebo que la LE no se acabe, es decir, que haya un nodo ->sig
    aux = aux->sig; //  En caso de haber, avanzo en la lista, redefiniendo mi auxiliar como el nodo que le sigue
  } //  Una vez se termina el while significa que no hay un valor siguiente, es decir, llegamos al final de la LE
  aux->sig = nuevo; //  Una vez ahí, definimos el siguiente valor como el nodo que creamos, uniendolo así a la lista.
}   

  
//----------------Explicación----------------//
/*  Ahora vamos con la función solicitada. La lógica que utilizaremos se basa en lo siguiente.
Primero, no sabemos cual va a ser el largo de los elementos con los que vamos a trabajar, por ende, lo mejor será trabajar con LE's

Luego, sabemos que tenemos que seguir ciertas reglas, puesto que ambas listas están ordenadas y la que crearemos tambien estará ordenada
por ende, tenemos que comprobar en cada iteración cual de las dos listas tiene el número menor para ingresarlo y avanzar en la misma LE.
De lo anterior podemos inferir que a medida que vayamos avanzando eventualmente nos terminaremos una lista antes que la otra, por esto, deberemos
ver otra condición, que es cuando cada una de las listas se acabe.

Nota consejo: Una forma util y mucho más ordenada de realizar código y de organizar las ideas es la de chequear las condiciones borde o
condiciones de término al principio y luego las demás.

*/
//-------------------------------------------//
nodo* mergeList(nodo* listaA, nodo* listaB){    //  Comenzamos creando nuestra función de tipo nodo que recibe dos listas A y B
    nodo* nuevaLista = NULL;  //  Definimos nuestro primer nodo fuera de los condicionales como un nodo nulo para comenzar
    nodo* cola = NULL;  //  Guardamos también el ÚLTIMO nodo de la nueva lista, y no solo la cabeza
    //  Esto es lo que nos permite cumplir con la exigencia de eficiencia del enunciado. Si usáramos la función
    //  agregar() para cada valor, esta recorrería la lista nueva completa desde la cabeza en cada llamada,
    //  dejando el algoritmo en O(n^2). Manteniendo un puntero directo a la cola, enganchamos cada nodo en O(1)
    //  y el algoritmo total queda en O(n), es decir, cada lista se visita una sola vez tal como se pide.

    if (!listaA && !listaB){    //  Caso borde: si ambas listas vienen vacías, no hay nada que fusionar
        return NULL;            //  y retornamos una lista vacía, es decir, NULL
    }   //  Este chequeo es obligatorio: más abajo haremos listaA->dato, y desreferenciar un puntero NULL
        //  no lanza una excepción como en Python, sino que revienta el programa con un segmentation fault.
    if (!listaA){   //  Si solo A está vacía, no hay nada que comparar: el primero sale de B
        nuevaLista = generar(listaB->dato);
        listaB = listaB->sig;
    }else if (!listaB){ //  Si solo B está vacía, el primero sale de A
        nuevaLista = generar(listaA->dato);
        listaA = listaA->sig;
    }else if (listaA->dato < listaB->dato){ //  Comprobamos si el dato menor está en la listaA
        nuevaLista = generar(listaA->dato); //  En caso de cumplirse, guardamos un nodo con el primer dato de A en nuestra nuevaLista
        listaA = listaA->sig;   //  Al haber visto ya el primer caracter, avanzamos en la lista correspondiente
    }else{      //    Si no se cumple, significa que el número menor está en la lista B
        //  En cuyo caso, hacemos lo mismo pero con los valores de listaB
        nuevaLista = generar(listaB->dato);
        listaB = listaB->sig;   //  Y avanzamos en la lista B, que es de donde sacamos el dato
    }   //  Es MUY importante avanzar el puntero de la misma lista de la que tomamos el valor. Avanzar el otro
        //  puntero significaría perder una lista entera y recorrer la otra dos veces, sin que el compilador
        //  reclame nada, porque ambas variables son del mismo tipo. Este tipo de error solo se detecta probando.
    cola = nuevaLista;  //  Como la lista recién nace con un solo nodo, la cabeza y la cola son el mismo nodo

    //  Ahora,  creamos un while true, que para no necesitar el uso de la librería de booleanos, podemos usar un 1 como condición
    while (1){  //  Haremos esto ya que no sabemos cuanto tenemos que iterar, asi que iteraremos hasta que las listas estén vacías, usando eso como condición de break
        if (!listaA && !listaB){    //  Comprobamos que ambas listas sean Nulas, es decir, estén vacías luego de avanzar
            break;  //  En cuyo caso, terminamos y rompemos el while
        }else if (!listaA){ //  Comprobamos la primera condición , donde vemos si la lista A está vacía y la B no
            cola->sig = generar(listaB->dato);  //  En cuyo caso, unicamente agregamos el siguiente valor de B
            cola = cola->sig;   //  Y movemos la cola al nodo recién enganchado
            listaB = listaB->sig;   //  Y avanzamos en la lista
        }else if (!listaB){ //  Homologamente, hacemos lo mismo comprobando que la lista B este vacía y la A no
            cola->sig = generar(listaA->dato);  //  En cuyo caso, unicamente agregamos el siguiente valor de A
            cola = cola->sig;
            listaA = listaA->sig;   //  Y avanzamos en la lista
        }   //  Ahora, habiendo visto los casos en que almenos una de las listas estén vacías, vemos las comparaciones naturales
        else if (listaA->dato < listaB->dato){     //   Cuando el dato de la lista A es menor, 
            cola->sig = generar(listaA->dato);  //  Lo agrego a la lista
            cola = cola->sig;
            listaA = listaA->sig;   //  Y   avanzo en dicha lista
        }else{  //  Si no se cumple ninguna de las otras condiciones, entonces tenemos que las listas no estan vacías y el valor a ingresar esta en B
            cola->sig = generar(listaB->dato);  //  En cuyo caso, agregamos el valor de la listaB
            cola = cola->sig;
            listaB = listaB->sig;      //   Y avanzamos
        }    
    }
    return nuevaLista;  //  Una vez terminado el ordenamiento y concatenación, retornamos la lista generada
}   //  Nota: las listas originales nunca se modifican, solo se leen, tal como exige el enunciado. Los punteros
    //  listaA y listaB se pasaron por copia, así que avanzarlos acá adentro no afecta a las listas del llamador.
    //  Lo que se comparte con el llamador es la MEMORIA a la que apuntan, no las variables puntero en sí.

int main(){
    //  Como se mencionó anteriormente, nuestra implementación no comprueba si las raices están vacías o no, es por esto que debemos generarlas manualmente
  nodo* cabeza1 = generar(0);   //  Creamos la primera con un valor int 0
  nodo* cabeza2 = generar(5);   //  Creamos la segunda con un valor int 5
  for (int i = 1; i<3; i++){    //  Luego, iteramos por i = 1,2
    agregar(cabeza1,i);//  Y añadimos esos valores de i a nuestra primera cabeza
    }    
  for (int i = 6; i<8;i++){ //  Luego iteramos por i = 6,7
    agregar(cabeza2,i); //  Y añadimos esos valores de i a nuestra segunda cabeza
    }   
    //Con esto, ya tenemos algunos valores en nuestras LE's para poder comprobar el funcionamiento
  nodo* nueva = mergeList(cabeza1, cabeza2);    //  Finalmente, definimos una variable como el llamado a la función 
  //    Comprobar funcionamiento en pythontutor para ver el paso a paso

  printf("Lista fusionada: ");  //  Imprimimos el resultado para poder verificar que el orden quedó correcto
  for (nodo* aux = nueva; aux != NULL; aux = aux->sig){  //  Recorremos con un auxiliar para no perder la cabeza
    printf("%d ", aux->dato);   //  Si iteráramos usando "nueva" directamente, al terminar el ciclo esa variable
  }                             //  valdría NULL y ya no tendríamos forma de volver al inicio ni de liberar la lista
  printf("\n");

  //  Ahora liberamos las tres listas, porque en C todo espacio pedido con malloc debe devolverse con free.
  //  A diferencia de Python, acá no hay recolector de basura: la memoria que no liberas queda ocupada hasta
  //  que el programa termina, y en un programa largo eso es una fuga de memoria (memory leak).
  while (cabeza1){ nodo* aux = cabeza1; cabeza1 = cabeza1->sig; free(aux); }
  while (cabeza2){ nodo* aux = cabeza2; cabeza2 = cabeza2->sig; free(aux); }
  while (nueva){   nodo* aux = nueva;   nueva   = nueva->sig;   free(aux); }

  return 0; //  Finalmente retornamos y terminamos el código.
}   //  Posible solución alternativa: Calcular el tamaño de las listas sumadas y luego añadirlas a un arreglo (de forma ordenada) con el tamaño calculado
