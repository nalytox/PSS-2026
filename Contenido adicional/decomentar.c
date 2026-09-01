/*
    Hola, y bienvenido a este codigo de una implementación para una tarea de una máquina de estados DFA utilizando listas enlazadas.

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


    A continuación, te presentaré un código que posee una lógica de los contenidos que se verán en la asignatura
    Teoría de la computación, donde se utilizan estados para definir el comportamiento a tomar en cada decisión
    por parte del computador. Si bien no es un código didáctico, este puede ayudar a entender como implementar
    funcionalidades o lógica en una lista enlazada.
*/
#include <stdio.h>  
#include <stdlib.h>

// ------------------------------------------------ //
// Estructura de datos de tipo lista doble enlazada //
// ------------------------------------------------ //

typedef struct nodo {   //  Defino mi tipo de estructura nodo para hacer mas legible el codigo
    char Letra;     //  Le asigno el atributo letra, de tipo char que será el valor de la letra ingresada
    struct nodo* sig;   //  Le asigno el atributo siguiente para que sea una lista enlazada
    struct nodo* ant;   //  Le asigno el atributo anterior para que sea una lista doble enlazada
} Nodo;     //  La defino bajo el nombre de Nodo

Nodo* generar(char letra) {     //  Defino mi función generar de tipo nodo que toma una letra como argumento
    Nodo* nuevoNodo = (Nodo*)malloc(sizeof(Nodo));      //  Luego crea un nuevoNodo asignandole una dirección de memoria de tamaño Nodo
    nuevoNodo->Letra = letra;   //  Su atributo Letra se convierte en la letra entregada
    nuevoNodo->sig = NULL;      //  Su puntero siguiente es NULL puesto que aun no es añadido a la lista
    nuevoNodo->ant = NULL;      //  Su puntero anterior es NULL por la misma razón anterior
    return nuevoNodo;       //  Retorno el nodo creado
}

void agregarNodo(Nodo** cabeza, char letra) {   //  Defino mi función para agregar nodos, que toma el nodo cabeza y el valor a agregar
    if (*cabeza == NULL) {      //  Si la cabeza es NULL
        *cabeza = generar(letra);   //  Mi el nodo ingresado se convierte en la cabeza
    } else {    //  Si no se cumple:
        Nodo* nuevo = generar(letra);   //  Genero un nuevo nodo con la letra ingresada
        Nodo* aux = *cabeza;        //  Defino un nodo auxiliar que comienza siendo la cabeza
        while (aux->sig != NULL) {      //  Si existe un nodo siguiente al auxiliar 
            aux = aux->sig;     //  Avanzo en la lista
        }       //  De esta manera, llego hasta el final de la lista
        aux->sig = nuevo;       //  Y defino el puntero siguiente del ultimo nodo como el nodo que queria añadir
        nuevo->ant = aux;       //  Doble enlazo la lista dandole como atributo al nodo que acabo de añadir, el antiguo ultimo nodo
    }
}

void printearLE(Nodo* cabeza) {      //   Defino mi función para que imprima mi lista enlazada
    Nodo* NodoActual = cabeza;      //  Creo una variable de tipo nodo* que toma el valor de la cabeza
    int contador = 0;       //  Defino un contador para saltarme una linea al comenzar a imprimir
    while (NodoActual != NULL) {        //  Mientras que el nodo actual no sea NULL
        if (contador == 0){     //  Compruebo si es la primera vez que imprimo
            printf("\n%c", NodoActual->Letra);      //  Si es así, imprimo un salto de linea, seguido por el valor Letra del nodo actual
            contador = 1;   //  Hago que contador sea igual a 1 para no volver a imprimir saltos de linea
            NodoActual = NodoActual->sig;   //  Avanzo en la lista haciendo que nodo actual sea el siguiente nodo
        }
        else{       //  Si no es la primera vez que se imprime
            printf("%c", NodoActual->Letra);        //  Se imprime lo mismo, pero sin salto de linea
            NodoActual = NodoActual->sig;       //  Avanzo en la lista
        }
    }
    printf("\n");   //  Imprimo un salto de linea para terminar
}

void liberarMemoria(Nodo* cabeza) {     //  Defino la función liberar memoria para deshacerme de la memoria usada para crear los nodos
    while (cabeza != NULL) {    //  Mientras la cabeza no sea NULL
        Nodo* aux = cabeza;     //  Defino un nodo auxiliar que sera igual a la cabeza
        cabeza = cabeza->sig;   //  El nodo cabeza avanza
        free(aux);      //  Libero el antiguo espacio de memoria de cabeza
    }       //  De esta manera, avanzaré en la lista hasta que se acabe y así liberando la memoria de cada nodo
}
//----------------------------------------------//
//  Funciones para determinar la acción a tomar //
//----------------------------------------------//
int estado1(Nodo **cabeza){  //  Defino la función estado1 que será utilizada al toparse con el incio de un comentario
//  Nota sobre el doble puntero: recibo "Nodo **cabeza" y no "Nodo *cabeza" porque agregarNodo() necesita poder
//  REEMPLAZAR la cabeza cuando la lista todavía está vacía. Si recibiera un puntero simple, estaría recibiendo
//  una copia de la dirección, y al reasignarla solo cambiaría mi copia local: el cambio se perdería al volver
//  a main. Con un puntero al puntero recibo la dirección DE LA VARIABLE cabeza, y así puedo modificarla de verdad.
//  Esta es la forma que tiene C de hacer lo que en Python sería simplemente reasignar una variable global.
    int c,c2;   //  Defino mis variables c y c2 de tipo entero para ser usadas luego
    agregarNodo(cabeza, ' ');  //  A la lista enlazada le agrego un espacio 
    while ((c = getchar()) != EOF){     //  Hago que el programa siga recibiendo caracteres 
        if (c == '*'){   //  Si se topa con un '*', hago que pida otro carácter
            c2 = getchar();     //  Leo el siguiente para ver si juntos forman el cierre del comentario
            if (c2 == '/'){     //  y si este es un '/', el comentario se cerró
                return 0;   //  Retorna 0 pues el programa se ejecutó sin ningún problema
            }
            if (c2 != EOF){     //  Si no era un '/', ese carácter todavía no lo hemos procesado
                ungetc(c2, stdin);  //  Así que lo devolvemos al buffer de entrada para que el ciclo lo lea de nuevo
            }   //  Esto es indispensable en casos como "**/": el segundo '*' es el que debe emparejarse con el '/'.
        }       //  Si nos quedáramos con el carácter leído sin devolverlo, el comentario nunca se cerraría.
                //  ungetc() devuelve un carácter al flujo de entrada y garantiza al menos un carácter de retroceso.
        if (c == '\n'){     //  Si el caracter ingresado es un salto de línea:
            agregarNodo(cabeza, '\n');     //  Lo añado a mi lista de carácteres
        }
    }
    return EXIT_FAILURE;    //  Si el anterior bucle while no terminó, es por que no se cerró el comentario, en cuyo caso, retorno EXIT_FAILURE
}

int estado2(Nodo **cabeza, char valor){      //  Defino la función estado2 que será utilizada al toparse con una cadena de caracteres
//  Recibo la cabeza como doble puntero por la misma razón explicada en estado1: para poder modificarla si la
//  lista todavía no existe y que ese cambio sea visible desde main.
    int c;  //  Defino mi variable entera c para ser usada luego
    agregarNodo(cabeza, valor);    //  Le agrego a la lista el valor ingresado para iniciar la cadena (" o ')
    while ((c=getchar()) != EOF){   //  Hago que el programa siga recibiendo caracteres
        if (c != valor){    //  Si el caracter que recibe es distinto del que inicio la cadena de texto:
            agregarNodo(cabeza, c);    //  Lo agrego a la lista enlazada
        }else{  //  Si lo anterior no ocurre, significa que se terminó de escribir el string
            agregarNodo(cabeza, valor);    //  En cuyo caso, añadimos el mismo valor que inició la cadena
            return 0;   //  Y retornamos 0 para indicar que se finalizó sin problemas
        }
    }
    return 1;   //  En caso de que el buble while anterior no termine, retornamos 1 para poder usarlo como valor de verdad luego
}

//------------------//
//  Mi función main //
//------------------//
int main(void) {    //  Defino la función main
    int c,c2,salida;  //  Defino las variables de tipo entero c, c2 y salida
    //  Nota de nomenclatura: la variable se llama "salida" y no "exit" a propósito. Si la llamáramos "exit",
    //  el nombre taparía dentro de main a la función exit() de stdlib.h, y una llamada a exit(1) en ese scope
    //  ni siquiera compilaría. Nombrar variables igual que funciones de la librería estándar es legal en C,
    //  pero es una fuente clásica de errores muy difíciles de leer.
    Nodo* cabeza = NULL;    //  Creo el nodo cabeza como un valor nulo
    while ((c = getchar()) != EOF) {    //  Inicio el bucle while para que el programa reciba caracteres
        if (c == '/'){  //  Si recibe un '/':
            if ((c2 = getchar()) == '*'){   //  Compruebo si el siguiente valor es un '*':
                salida = estado1(&cabeza);     //  De esto cumplirse, defino el valor de salida llamando a la función estado1 para que también modifique de ser necesario la lista
                //  Paso &cabeza, es decir la DIRECCIÓN de mi variable puntero, para que estado1 pueda reasignarla
                if (salida == EXIT_FAILURE){  //  Si el valor que retorna estado1 es EXIT_FAILURE:
                    return EXIT_FAILURE;    //  Significa que el programa no terminó como se deseaba y se retorna EXIT_FAILURE de la función main
                }
            }
            else{   //  Si el valor ingresado no es un '*', significa que estamos ante algo del estilo /letra:
                agregarNodo(&cabeza, c);    //  En cuyo caso, agregamos el '/'
                if (c2 != EOF){     //  Solo si efectivamente había un carácter y no el fin del archivo
                    agregarNodo(&cabeza, c2);   //  Agregamos también el ultimo valor ingresado
                }   //  Este chequeo importa porque getchar() no retorna un char sino un int, justamente para
                    //  poder devolver EOF (que vale -1) sin confundirlo con ningún carácter válido. Si no lo
                    //  revisáramos, guardaríamos ese -1 en la lista como si fuera una letra más.
            }
        }
        else if (c == '"' || c == 39){  //  También, comprobamos si el caracter ingresado es el inicio de una cadena de caracteres
            if (estado2(&cabeza, c)){    //  De esto cumplirse, llamamos a la función estado2 y usamos su valor de return como una condicion:
                printearLE(cabeza); //  Si se retornó un 1 significa que el texto terminó sin cerrar la cadena e imprimimos la lista entera
                liberarMemoria(cabeza); //  También liberamos la memoria utilizada por la lista enlazada
                return 0;   //  Y retornamos 0 para terminar la ejecución
            }
        }
        else{
            agregarNodo(&cabeza, c);    //  Si no nos topamos con ninguno de los casos anteriores, simplemente añadimos el valor ingresado a la lista
        }
    }
    printearLE(cabeza); //  Si se ingresa un fin de archivo, termina el while e imprimimos la lista entera
    liberarMemoria(cabeza); //  Liberamos la memoria utilizada por esta misma
    return 0;   //  Y retornamos 0 para indicar que no ocurrio ningun error y terminar la ejecución del programa
}
