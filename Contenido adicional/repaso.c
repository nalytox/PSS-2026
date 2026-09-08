/*
    Hola, y bienvenido a este codigo de repaso de códigos y lógica en un formato para Programación de software de sistemas.

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


    A continuación, te presentaré distintos problemas que buscan tener una solucion orientada a distintos
    de los temas ya vistos en el curso para así poder repasar teniendo una amplia explicación del por qué de las cosas.

    IMPORTANTE: este archivo está pensado para reforzar el salto de Python a C. Por lo mismo, todos los
    problemas se resuelven SIN procesos livianos (hilos), SIN procesos pesados (fork), SIN señales y SIN
    listas enlazadas. Lo único que usaremos son: tipos primitivos, arreglos, matrices, punteros, funciones,
    recursión y la librería stdio. Nada más.

    Índice de problemas:
        P1 - Fibonacci recursivo (el clásico, O(2^n))
        P2 - Fibonacci con memoización (arreglo global, O(n))
        P3 - Fibonacci iterativo (sin recursión, O(n) y O(1) en memoria)
        P4 - Conjetura de Collatz
        P5 - El rey, el sabio y los granos de arroz (matriz + desbordamiento)
        P6 - Criba de Eratóstenes (arreglo como "diccionario" de booleanos)
        P7 - Cadenas de caracteres: largo, inversión y palíndromo (punteros vs índices)
        P8 - Matrices: transpuesta y suma de diagonales
        P9 - Triángulo de Pascal (matriz triangular)
        P10 - Ordenamiento burbuja + búsqueda binaria (paso de arreglos a funciones)
        P11 - Algoritmo de Euclides: MCD y MCM
*/

#include <stdio.h>  //  Lo primero que debemos hacer es declarar nuestras librerias a usar, en este caso siendo unicamente
                    //  la libreria stdio. Basta con que se importe una vez dentro de todo el código, y así se podra utilizar
                    //    en cualquier sección del código (siempre y cuando este esté después de la importación)

/*  Nota sobre #define:
    Un #define es una directiva del preprocesador: ANTES de compilar, el compilador reemplaza textualmente
    cada aparición del nombre por su valor. No es una variable, no ocupa memoria y no se puede modificar.
    Lo usamos para los tamaños de los arreglos porque en C el tamaño de un arreglo estático debe ser una
    constante conocida en tiempo de compilación (a diferencia de Python, donde una lista crece sola).
*/
#define MAX_FIB   93    //  fib(93) ya no cabe en un long long, por eso es nuestro tope
#define TAM        8    //  Tamaño del tablero de ajedrez (8x8)
#define MAX_CRIBA 100   //  Hasta qué número buscaremos primos
#define MAX_CAD   100   //  Largo máximo de las cadenas que leeremos
#define FILAS_PASCAL 10 //  Cuántas filas del triángulo de Pascal imprimiremos


/*==========================================================================================*/
/*  P1) FIBONACCI RECURSIVO                                                                 */
/*==========================================================================================*/
/*  Para el primer ejercicio, le pediremos hacer distintas versiones del ya conocido algoritmo de fibonacci.
    La primera de estas, será la forma que ya todos conocemos, que es usando una recursión simple.
*/

int fib(int n){   //  Definimos nuestra función fib, que retorna un entero y recibe un entero n como argumento.
    if (n < 0){     //  Primero comenzamos por ver los casos borde de nuestro programa, siendo estos cuando n vale 2, 1 o un número negativo
        printf("Ingrese un número valido\n");     //  En el caso de ser negativo, le informamos al usuario que ingrese un numero valido
        return -1;      //  Y retornamos -1 como marca de error para que el llamador pueda distinguirlo
    }                   //  Nota: en C, si una función declarada "int" termina sin ejecutar un return, el valor
                        //  devuelto es basura (comportamiento indefinido). Python nos regalaba un None implícito;
                        //  C no nos regala nada. Siempre hay que retornar en TODOS los caminos posibles.
    if (n == 0){        //  Siguiente caso base: por definición fib(0) = 0
        return 0;       //  Ojo que este caso hay que revisarlo ANTES del siguiente, porque 0 también es menor que 3
    }
    if (n < 3){   //  En caso de éste ser uno de los casos base (n = 1 || n = 2), retornamos los valores conocidos
        return 1;       //  Siendo en este caso 1
    }
    return fib(n-1) + fib(n-2);     //  Si ninguna de las condiciones anteriores se cumple, entonces llamaremos a la función con sus 2 anteriores valores de n.
    //  De esta forma, estamos haciendo recursiones para calcular muchisimos 1's en la forma de un arbol binario hasta obtener el valor total.
}

//  Luego tenemos nuestra función de prueba, la cual se rebaja a simplemente pedir un entero por la entrada estandar,
//  guardarlo en la variable c y llamar a la función.
void probar_fib(void){
    int c;      //  Declaramos la variable ANTES de usarla. En C toda variable debe declararse con su tipo, no se infiere como en Python.
    printf("Ingrese un número de recursiones para su fibonacci: ");
    if (scanf("%d", &c) != 1){      //  scanf retorna cuántos valores logró leer. Si no logró leer 1, el usuario escribió cualquier cosa.
        printf("Entrada inválida.\n");      //  Verificar el retorno de scanf es una costumbre que evita muchísimos errores silenciosos.
        return;
    }
    if (c > 40){    //  Aviso práctico: esta versión duplica el trabajo en cada llamada
        printf("Ojo: con n = %d esta versión puede tardar bastante (es O(2^n)).\n", c);
    }
    int numero = fib(c);    //  Guardamos el resultado de la llamada
    printf("El valor de su recursión es: %d\n", numero);
}


/*==========================================================================================*/
/*  P2) FIBONACCI CON MEMOIZACIÓN                                                           */
/*==========================================================================================*/
/*  Sin embargo, como hemos visto en cursos anteriores, este algoritmo expresado de esta manera es sumamente poco óptimo, perteneciendo a O(2^n).
    Es por esto que realizaremos un pequeño cambio a nuestro programa, para que éste sea un tanto más optimo y guarde valores dentro de un arreglo,
    Ahorrando de esta manera muchisimas ejecuciones de la recursion ya que en caso de ya haber calculado un valor, simplemente accederemos a él desde el arreglo y no haciendo recursiones para volver a recalcularlo

    En Python esto lo haríamos con un diccionario {} o con @lru_cache. En C no tenemos ninguna de las dos cosas,
    así que usamos la herramienta más simple que existe: un arreglo global donde el ÍNDICE es la clave.
    Como los índices ya son 0,1,2,...,n, el arreglo ES el diccionario.

    Detalle importante: usamos "long long" en vez de "int". Un int normalmente tiene 32 bits, es decir soporta
    hasta 2.147.483.647, y fib(47) ya lo supera. Un long long tiene 64 bits y nos alcanza hasta fib(92).
    En Python los enteros crecen infinitamente; en C el tipo que elijas es una promesa de cuánto espacio ocupa.
*/

long long memo[MAX_FIB];    //  Arreglo global. Al ser global, C lo inicializa automáticamente en 0.
                            //  Usaremos el 0 como marca de "todavía no lo he calculado", porque salvo fib(0),
                            //  ningún fibonacci vale 0. Y fib(0) lo resolvemos como caso base antes de mirar el arreglo.

long long fib2(int n){
    if (n < 0){                 //  Mismo caso borde que antes
        printf("Ingrese un número valido\n");
        return -1;
    }
    if (n >= MAX_FIB){          //  Caso borde nuevo: si nos pasamos del arreglo, escribiríamos fuera de él.
        printf("n demasiado grande, el máximo soportado es %d\n", MAX_FIB - 1);
        return -1;              //  Escribir fuera de un arreglo en C no lanza IndexError: corrompe memoria en silencio.
    }
    if (n < 2){                 //  Casos base: fib(0) = 0 y fib(1) = 1, que casualmente coinciden con el propio n
        return n;
    }
    if (memo[n] != 0){          //  Si ya calculé este valor antes, simplemente lo devuelvo
        return memo[n];         //  Esto es lo que convierte el árbol binario de llamadas en una simple línea
    }
    memo[n] = fib2(n-1) + fib2(n-2);    //  Si no lo tenía, lo calculo UNA vez y lo guardo
    return memo[n];                     //  Y luego lo retorno
}


/*==========================================================================================*/
/*  P3) FIBONACCI ITERATIVO                                                                 */
/*==========================================================================================*/
/*  La versión anterior es O(n) en tiempo, pero sigue gastando O(n) en memoria (el arreglo) y O(n) en pila
    de llamadas recursivas. La pila de llamadas es un recurso limitado y real: si recursas demasiado,
    el programa muere con un "stack overflow" (segmentation fault).

    Sin embargo, si te fijas, para calcular fib(n) solo necesito los DOS valores anteriores. No necesito
    todos los demás. Entonces podemos resolverlo con un simple ciclo y tres variables, quedando en
    O(n) tiempo y O(1) memoria. Esta es casi siempre la mejor versión.
*/
long long fib3(int n){
    if (n < 0){                     //  Caso borde
        printf("Ingrese un número valido\n");
        return -1;
    }
    if (n < 2){                     //  Casos base
        return n;
    }
    long long anterior = 0;         //  fib(0)
    long long actual = 1;           //  fib(1)
    for (int i = 2; i <= n; i++){   //  Iteramos desde 2 hasta n
        long long siguiente = anterior + actual;    //  El siguiente es la suma de los dos que tengo
        anterior = actual;          //  Desplazo la ventana: el actual pasa a ser el anterior
        actual = siguiente;         //  Y el siguiente pasa a ser el actual
    }                               //  Este "intercambio" es el equivalente en C del a, b = b, a+b de Python.
    return actual;                  //  Al salir del ciclo, actual contiene fib(n)
}

void probar_fibonaccis(void){       //  Función que compara las tres versiones lado a lado
    int n;
    printf("Ingrese n para comparar las tres versiones de fibonacci: ");
    if (scanf("%d", &n) != 1){
        printf("Entrada inválida.\n");
        return;
    }
    if (n < 0 || n >= MAX_FIB){
        printf("Ingrese un n entre 0 y %d\n", MAX_FIB - 1);
        return;
    }
    if (n <= 35){       //  Solo llamamos a la versión lenta si el valor es razonable, para no colgar el programa
        printf("Recursivo simple : %d\n", fib(n));
    } else {
        printf("Recursivo simple : (omitido, demasiado lento para n = %d)\n", n);
    }
    printf("Con memoización  : %lld\n", fib2(n));   //  Nota: %lld es el formato para long long, %d NO sirve aquí
    printf("Iterativo        : %lld\n", fib3(n));
}


/*==========================================================================================*/
/*  P4) CONJETURA DE COLLATZ                                                                */
/*==========================================================================================*/
/*  Enunciado:
    Tome un número entero positivo n. Si es par, divídalo por 2. Si es impar, multiplíquelo por 3 y sume 1.
    Repita el proceso con el resultado. La conjetura de Collatz (aún no demostrada) afirma que sin importar
    con qué número parta, siempre terminará llegando al 1.

    Escriba un programa que reciba un número por entrada estándar, imprima la secuencia completa y retorne
    la cantidad de pasos que tomó llegar al 1.

    Explicación de la solución:
    Este problema es interesante porque NO sabemos de antemano cuántas iteraciones necesitaremos (de hecho,
    nadie lo sabe). Por lo tanto un ciclo "for" no sirve bien: necesitamos un "while" cuya condición sea
    justamente la condición de término (llegar a 1).

    Ojo con un detalle que en Python no existe: el 3n+1 puede crecer muchísimo antes de bajar. Por eso
    usamos long long y no int, para tener margen antes de desbordar.

    Nota sobre el operador %: en C, n % 2 nos da el resto de la división entera, igual que en Python.
    Y n / 2 con enteros hace división ENTERA automáticamente (equivalente al // de Python). Cuidado:
    si quisieras división real tendrías que usar doubles. Aquí queremos entera, así que está perfecto.
*/
int collatz(long long n){
    int pasos = 0;              //  Contador de pasos, parte en 0
    if (n <= 0){                //  Caso borde: la conjetura está definida solo para enteros positivos
        printf("Collatz está definido solo para enteros positivos.\n");
        return -1;              //  Retornamos -1 como marca de error
    }
    printf("Secuencia: %lld", n);   //  Imprimimos el valor inicial sin salto de linea para ir concatenando
    while (n != 1){             //  Mientras no lleguemos al 1
        if (n % 2 == 0){        //  Si el número es par
            n = n / 2;          //  Lo dividimos por 2
        } else {                //  Si es impar
            n = 3 * n + 1;      //  Aplicamos 3n+1
        }
        pasos++;                //  Contamos el paso. Recordar que pasos++ es lo mismo que pasos = pasos + 1
        printf(" -> %lld", n);  //  Y mostramos el nuevo valor
    }
    printf("\n");               //  Cerramos la línea al terminar
    return pasos;               //  Retornamos la cantidad de pasos
}

void probar_collatz(void){
    long long n;
    printf("Ingrese un entero positivo para Collatz: ");
    if (scanf("%lld", &n) != 1){    //  %lld también se usa para LEER un long long
        printf("Entrada inválida.\n");
        return;
    }
    int pasos = collatz(n);
    if (pasos >= 0){            //  Solo imprimimos el resultado si no hubo error
        printf("Se llegó al 1 en %d pasos.\n", pasos);
    }
}


/*==========================================================================================*/
/*  P5) EL REY, EL SABIO Y LOS GRANOS DE ARROZ                                              */
/*==========================================================================================*/
/*  Enunciado (el cuento clásico):
    Un sabio le pide al rey como recompensa que ponga 1 grano de arroz en la primera casilla de un tablero
    de ajedrez, 2 en la segunda, 4 en la tercera, 8 en la cuarta, y así duplicando hasta llenar las 64
    casillas. El rey acepta pensando que es poco. Se pide llenar una matriz de 8x8 con la cantidad de granos
    de cada casilla y calcular el total.

    Explicación de la solución:
    Esto es una excusa perfecta para practicar dos cosas: matrices y desbordamiento (overflow).

    1) MATRICES EN C: una matriz se declara como tablero[filas][columnas] y se recorre con dos ciclos
       anidados. A diferencia de Python, donde una "matriz" es una lista de listas (con punteros por todos
       lados), en C una matriz es un bloque CONTINUO de memoria. Los 64 valores están uno detrás del otro.

    2) DESBORDAMIENTO: la última casilla tiene 2^63 granos y el total es 2^64 - 1. Un long long con signo
       llega solo hasta 2^63 - 1, así que se desbordaría. Por eso usamos "unsigned long long", que al no
       gastar un bit en el signo llega justo hasta 2^64 - 1. El total cabe EXACTO, por un solo grano.
       Este es el tipo de detalle que en Python jamás tendrías que pensar, y en C te arruina el programa.

    Nota: al final del ciclo, la variable "granos" se duplica una vez más y se desborda a 0. En unsigned
    eso está perfectamente definido por el estándar (es aritmética módulo 2^64), no es un error. En un tipo
    con signo, en cambio, sí sería comportamiento indefinido.
*/
void tablero_arroz(void){
    unsigned long long tablero[TAM][TAM];   //  Nuestra matriz de 8x8
    unsigned long long granos = 1;          //  La primera casilla lleva 1 grano
    unsigned long long total = 0;           //  Acumulador del total

    for (int i = 0; i < TAM; i++){          //  Recorremos las filas
        for (int j = 0; j < TAM; j++){      //  Y dentro de cada fila, las columnas
            tablero[i][j] = granos;         //  Guardamos la cantidad de granos de esta casilla
            total = total + granos;         //  La sumamos al total
            granos = granos * 2;            //  Y duplicamos para la casilla siguiente
        }
    }

    printf("\nGranos de arroz por casilla del tablero:\n\n");
    for (int i = 0; i < TAM; i++){          //  Segundo recorrido, ahora solo para imprimir
        for (int j = 0; j < TAM; j++){
            printf("%22llu", tablero[i][j]);    //  %llu = unsigned long long. El 22 es el ancho mínimo,
        }                                       //  y sirve para que las columnas queden alineadas.
        printf("\n");                       //  Salto de línea al terminar cada fila
    }
    printf("\nTotal de granos en el tablero: %llu\n", total);
    printf("(Para dimensionarlo: son más granos que todo el arroz producido en la historia de la humanidad)\n");
}


/*==========================================================================================*/
/*  P6) CRIBA DE ERATÓSTENES                                                                */
/*==========================================================================================*/
/*  Enunciado:
    Imprima todos los números primos menores o iguales a N.

    Explicación de la solución:
    La forma ingenua sería, para cada número, probar si algún número menor lo divide. Eso es O(n^2).
    La criba es mucho mejor: en vez de preguntar "¿este número es primo?", damos vuelta el problema y
    vamos TACHANDO los múltiplos de cada primo que encontramos.

    Para "tachar" necesitamos algo parecido a una lista de booleanos. C (al menos en su versión clásica)
    no tiene el tipo bool sin incluir <stdbool.h>, así que usamos la costumbre de toda la vida: un arreglo
    de enteros donde 1 significa verdadero y 0 significa falso. Esto es exactamente lo mismo que hace C
    internamente con las condiciones: en C, 0 es falso y CUALQUIER otro valor es verdadero.

    Optimización pequeña: solo necesitamos tachar desde i*i, porque los múltiplos menores (2*i, 3*i...)
    ya fueron tachados por primos anteriores.
*/
void criba(int n){
    int es_primo[MAX_CRIBA + 1];    //  +1 porque queremos usar el índice n, y los índices van de 0 a MAX_CRIBA
    int contador = 0;               //  Para contar cuántos primos encontramos

    if (n < 2 || n > MAX_CRIBA){    //  Caso borde: rango válido
        printf("Ingrese un número entre 2 y %d\n", MAX_CRIBA);
        return;
    }

    for (int i = 0; i <= n; i++){   //  Partimos asumiendo que TODOS son primos
        es_primo[i] = 1;            //  1 = verdadero
    }
    es_primo[0] = 0;                //  El 0 no es primo
    es_primo[1] = 0;                //  El 1 tampoco (es la excepción clásica de la definición)

    for (int i = 2; i * i <= n; i++){   //  Solo necesitamos revisar hasta la raíz de n
        if (es_primo[i]){               //  Si i sobrevivió, es primo, así que tachamos sus múltiplos
            for (int j = i * i; j <= n; j = j + i){ //  Avanzamos de i en i partiendo desde i*i
                es_primo[j] = 0;        //  Tachado: no es primo
            }
        }
    }

    printf("Primos hasta %d:\n", n);
    for (int i = 2; i <= n; i++){
        if (es_primo[i]){           //  Recordar: if(es_primo[i]) es lo mismo que if(es_primo[i] != 0)
            printf("%d ", i);
            contador++;
        }
    }
    printf("\nSe encontraron %d primos.\n", contador);
}

void probar_criba(void){
    int n;
    printf("Buscar primos hasta qué número (2 a %d): ", MAX_CRIBA);
    if (scanf("%d", &n) != 1){
        printf("Entrada inválida.\n");
        return;
    }
    criba(n);
}


/*==========================================================================================*/
/*  P7) CADENAS DE CARACTERES: LARGO, INVERSIÓN Y PALÍNDROMO                                */
/*==========================================================================================*/
/*  Enunciado:
    Reciba una palabra por entrada estándar y determine su largo, imprímala al revés y diga si es palíndromo.

    Explicación de la solución:
    Este es probablemente el punto donde más se nota la diferencia entre Python y C.
    En Python, un string es un objeto que sabe su propio largo, y len(s), s[::-1] y s == s[::-1] resuelven
    todo en una línea.
    En C, un string NO es un tipo. Es simplemente un arreglo de char que, por convención, termina con el
    carácter '\0' (llamado carácter nulo o terminador). Ese '\0' es la ÚNICA forma que tiene el programa
    de saber dónde termina la cadena. Si se pierde, el programa lee memoria ajena hasta que se cae.

    Por eso todas nuestras funciones de cadenas se basan en el mismo patrón: avanzar hasta encontrar '\0'.

    Aprovecharemos de mostrar las DOS notaciones equivalentes para recorrer una cadena:
        - Con puntero:  while (*s != '\0') { ...; s++; }
        - Con índice:   for (int i = 0; s[i] != '\0'; i++) { ... }
    Ambas hacen exactamente lo mismo. De hecho, s[i] es literalmente azúcar sintáctico para *(s + i).
*/

int largo(char* cadena){        //  Nuestra propia versión de len(), o de strlen() de la librería string.h
    int contador = 0;           //  Contador de caracteres
    while (*cadena != '\0'){    //  Mientras el carácter apuntado no sea el terminador
        contador++;             //  Contamos uno más
        cadena++;               //  Y avanzamos el puntero a la siguiente posición de memoria
    }                           //  Nota: modificar "cadena" acá NO afecta al llamador, porque el puntero
    return contador;            //  se pasó POR COPIA. Lo que se comparte es la memoria a la que apunta, no el puntero.
}

void invertir(char* cadena){    //  Invierte la cadena EN EL MISMO LUGAR (in place)
    int i = 0;                  //  Índice que parte por la izquierda
    int j = largo(cadena) - 1;  //  Índice que parte por la derecha (el -1 es porque los índices van de 0 a largo-1)
    while (i < j){              //  Mientras no se crucen en el centro
        char aux = cadena[i];   //  Guardamos el de la izquierda en un auxiliar
        cadena[i] = cadena[j];  //  Ponemos el de la derecha en la izquierda
        cadena[j] = aux;        //  Y el auxiliar en la derecha
        i++;                    //  Avanzamos por la izquierda
        j--;                    //  Y retrocedemos por la derecha
    }                           //  El auxiliar es obligatorio: sin él perderíamos uno de los dos valores.
}                               //  En Python el a, b = b, a nos escondía este mismo auxiliar.

int es_palindromo(char* cadena){    //  Retorna 1 si es palíndromo, 0 si no
    int i = 0;
    int j = largo(cadena) - 1;
    while (i < j){
        if (cadena[i] != cadena[j]){    //  Si en algún punto no coinciden los extremos
            return 0;                   //  No es palíndromo, y podemos cortar de inmediato
        }
        i++;
        j--;
    }
    return 1;   //  Si el ciclo terminó sin diferencias, es palíndromo
}

void probar_cadenas(void){
    char palabra[MAX_CAD];      //  Reservamos el espacio ANTES de leer. En C nadie reserva memoria por ti.

    printf("Ingrese una palabra (sin espacios, máximo %d caracteres): ", MAX_CAD - 1);
    if (scanf("%99s", palabra) != 1){   //  El 99 en "%99s" limita cuánto puede escribir el usuario.
        printf("Entrada inválida.\n");  //  Si usáramos solo "%s", una entrada larga escribiría fuera del
        return;                         //  arreglo y corrompería la memoria: es el clásico buffer overflow.
    }                                   //  El 99 y no 100 porque hay que dejar espacio para el '\0'.

    printf("Largo de la palabra: %d\n", largo(palabra));

    if (es_palindromo(palabra)){        //  Preguntamos ANTES de invertir, para no alterar el resultado
        printf("La palabra SÍ es un palíndromo.\n");
    } else {
        printf("La palabra NO es un palíndromo.\n");
    }

    invertir(palabra);                  //  Invertimos la cadena en su mismo espacio de memoria
    printf("Palabra invertida: %s\n", palabra);
}


/*==========================================================================================*/
/*  P8) MATRICES: TRANSPUESTA Y SUMA DE DIAGONALES                                          */
/*==========================================================================================*/
/*  Enunciado:
    Dada una matriz cuadrada, imprímala, calcule e imprima su transpuesta, y calcule la suma de su
    diagonal principal y de su diagonal secundaria.

    Explicación de la solución:
    La transpuesta de una matriz es simplemente intercambiar filas por columnas: el elemento [i][j] pasa
    a la posición [j][i]. La diagonal principal son los elementos donde i == j. La diagonal secundaria son
    los elementos donde j == n - 1 - i.

    Detalle importante de C: cuando pasas una matriz a una función, debes indicar el tamaño de todas las
    dimensiones excepto la primera. Es decir, la firma debe ser (int m[][3], int n) y no (int** m, int n).
    Esto es porque C necesita saber el ancho de cada fila para calcular dónde está m[i][j] en memoria,
    ya que internamente la matriz es un solo bloque continuo y la cuenta que hace es: m + i*ancho + j.
*/
#define N_MATRIZ 3      //  Tamaño de la matriz cuadrada de ejemplo

void imprimir_matriz(int m[][N_MATRIZ], int n){     //  Recibe la matriz y su cantidad de filas
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("%5d", m[i][j]);     //  El 5 alinea las columnas
        }
        printf("\n");
    }
}

void transponer(int origen[][N_MATRIZ], int destino[][N_MATRIZ], int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            destino[j][i] = origen[i][j];   //  Aquí está toda la magia: se invierten los índices al escribir
        }
    }
}   //  Nota: lo hacemos sobre una matriz destino distinta para no pisar valores mientras los movemos.
    //  Si quisiéramos hacerlo in place, habría que recorrer solo el triángulo superior (j desde i+1) e
    //  intercambiar con un auxiliar, exactamente como hicimos en invertir().

void probar_matrices(void){
    int matriz[N_MATRIZ][N_MATRIZ] = {      //  Se puede inicializar una matriz directamente con llaves anidadas
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int transpuesta[N_MATRIZ][N_MATRIZ];    //  Matriz vacía donde guardaremos el resultado
    int diagonal_principal = 0;
    int diagonal_secundaria = 0;

    printf("\nMatriz original:\n");
    imprimir_matriz(matriz, N_MATRIZ);

    transponer(matriz, transpuesta, N_MATRIZ);
    printf("\nMatriz transpuesta:\n");
    imprimir_matriz(transpuesta, N_MATRIZ);

    for (int i = 0; i < N_MATRIZ; i++){     //  Para las diagonales basta UN solo ciclo, no dos:
        diagonal_principal += matriz[i][i];                     //  i == j
        diagonal_secundaria += matriz[i][N_MATRIZ - 1 - i];      //  j == n-1-i
    }   //  Nota: "a += b" es una abreviación de "a = a + b", igual que en Python

    printf("\nSuma de la diagonal principal : %d\n", diagonal_principal);
    printf("Suma de la diagonal secundaria: %d\n", diagonal_secundaria);
}


/*==========================================================================================*/
/*  P9) TRIÁNGULO DE PASCAL                                                                 */
/*==========================================================================================*/
/*  Enunciado:
    Imprima las primeras N filas del triángulo de Pascal, donde cada elemento es la suma de los dos
    elementos que tiene arriba.

    Explicación de la solución:
    Este problema es un buen ejercicio de matrices triangulares y de casos borde. La regla es:
        pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j]
    Pero eso solo aplica al interior del triángulo. Los bordes (j == 0 y j == i) valen siempre 1.

    Fíjate que es el MISMO patrón mental de fibonacci: casos base primero, y la regla general después.
    Y también es programación dinámica: cada valor se calcula una vez y se reutiliza, en vez de recalcularlo.

    Detalle de C: declaramos la matriz completa de FILAS_PASCAL x FILAS_PASCAL aunque solo usemos la mitad.
    El espacio "sobrante" se desperdicia, pero es muchísimo más simple que reservar memoria fila por fila,
    y para tamaños chicos es lo correcto. En C uno constantemente negocia entre simplicidad y memoria.
*/
void triangulo_pascal(int filas){
    int pascal[FILAS_PASCAL][FILAS_PASCAL];     //  Matriz donde construiremos el triángulo

    if (filas < 1 || filas > FILAS_PASCAL){     //  Caso borde
        printf("Ingrese un número de filas entre 1 y %d\n", FILAS_PASCAL);
        return;
    }

    for (int i = 0; i < filas; i++){        //  Recorremos fila por fila
        for (int j = 0; j <= i; j++){       //  Ojo: j llega hasta i, no hasta filas. Por eso es triangular.
            if (j == 0 || j == i){          //  Casos base: los bordes del triángulo
                pascal[i][j] = 1;
            } else {                        //  Caso general: suma de los dos de arriba
                pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];
            }
        }
    }

    printf("\nTriángulo de Pascal de %d filas:\n\n", filas);
    for (int i = 0; i < filas; i++){
        for (int k = 0; k < (filas - i); k++){  //  Este ciclo solo imprime espacios para centrar el triángulo
            printf("   ");
        }
        for (int j = 0; j <= i; j++){
            printf("%6d", pascal[i][j]);
        }
        printf("\n");
    }
}

void probar_pascal(void){
    int filas;
    printf("¿Cuántas filas del triángulo de Pascal? (1 a %d): ", FILAS_PASCAL);
    if (scanf("%d", &filas) != 1){
        printf("Entrada inválida.\n");
        return;
    }
    triangulo_pascal(filas);
}


/*==========================================================================================*/
/*  P10) ORDENAMIENTO BURBUJA Y BÚSQUEDA BINARIA                                            */
/*==========================================================================================*/
/*  Enunciado:
    Ordene un arreglo de enteros de menor a mayor y luego permita buscar un valor dentro de él de forma
    eficiente.

    Explicación de la solución:
    El ordenamiento burbuja compara elementos vecinos y los intercambia si están desordenados. Al repetir
    esto varias veces, los valores más grandes van "burbujeando" hasta el final. Es O(n^2), es decir, malo,
    pero es el más simple de entender y de escribir sin equivocarse.

    La búsqueda binaria requiere que el arreglo esté ORDENADO (por eso va después). En vez de revisar
    elemento por elemento, mira el del medio y descarta la mitad del arreglo en cada paso. Eso la hace
    O(log n), que es dramáticamente mejor: en un arreglo de un millón de elementos, la búsqueda lineal
    hace hasta un millón de comparaciones y la binaria hace 20.

    DETALLE CRÍTICO DE C (el más importante de esta sección):
    Cuando pasas un arreglo a una función, NO se copia. Lo que se pasa es la dirección del primer elemento,
    es decir, un puntero. Esto tiene dos consecuencias enormes:
        1) La función SÍ puede modificar el arreglo original (por eso ordenar() funciona sin retornar nada).
        2) Dentro de la función se pierde el tamaño del arreglo. Por eso SIEMPRE hay que pasar el largo
           como un segundo parámetro. En Python len(lista) siempre funcionaba; aquí no existe tal cosa.
*/
void ordenar(int arreglo[], int n){     //  "int arreglo[]" y "int* arreglo" son exactamente lo mismo aquí
    for (int i = 0; i < n - 1; i++){            //  n-1 pasadas bastan
        int hubo_cambio = 0;                    //  Bandera para detectar si el arreglo ya quedó ordenado
        for (int j = 0; j < n - 1 - i; j++){    //  El -i es porque los últimos i ya están en su lugar
            if (arreglo[j] > arreglo[j+1]){     //  Si el par de vecinos está desordenado
                int aux = arreglo[j];           //  Intercambio con auxiliar, igual que en invertir()
                arreglo[j] = arreglo[j+1];
                arreglo[j+1] = aux;
                hubo_cambio = 1;                //  Marcamos que sí hubo trabajo en esta pasada
            }
        }
        if (!hubo_cambio){      //  Si una pasada completa no cambió nada, el arreglo ya está ordenado
            break;              //  y podemos cortar antes. Pequeña optimización gratis.
        }
    }
}

int busqueda_binaria(int arreglo[], int n, int objetivo){   //  Retorna el índice, o -1 si no lo encuentra
    int inicio = 0;             //  Límite izquierdo del rango donde puede estar el valor
    int fin = n - 1;            //  Límite derecho
    while (inicio <= fin){      //  Mientras el rango no esté vacío
        int medio = inicio + (fin - inicio) / 2;    //  Calculamos el punto medio.
        //  Nota: se escribe así y no (inicio+fin)/2 porque esa suma podría desbordar con arreglos enormes.
        //  Es un detalle famoso: este bug estuvo presente durante años en la librería estándar de Java.
        if (arreglo[medio] == objetivo){    //  Lo encontramos
            return medio;
        } else if (arreglo[medio] < objetivo){  //  El objetivo está en la mitad derecha
            inicio = medio + 1;                 //  Descartamos toda la mitad izquierda
        } else {                                //  El objetivo está en la mitad izquierda
            fin = medio - 1;                    //  Descartamos toda la mitad derecha
        }
    }
    return -1;      //  Si el rango se vació, el valor no estaba
}

void probar_ordenamiento(void){
    int arreglo[] = {42, 7, 19, 3, 88, 15, 1, 56, 23, 4};   //  Al inicializar así, C cuenta los elementos solo
    int n = sizeof(arreglo) / sizeof(arreglo[0]);           //  Truco estándar para saber el largo:
    //  sizeof(arreglo) da el tamaño TOTAL en bytes y sizeof(arreglo[0]) el de un elemento. Al dividir, sale
    //  la cantidad de elementos. IMPORTANTE: este truco solo funciona donde el arreglo fue DECLARADO,
    //  no dentro de una función que lo recibe como parámetro (ahí ya es solo un puntero y sizeof daría 8).
    int objetivo;

    printf("Arreglo original: ");
    for (int i = 0; i < n; i++){
        printf("%d ", arreglo[i]);
    }
    printf("\n");

    ordenar(arreglo, n);        //  No asignamos el resultado: la función modifica el arreglo directamente

    printf("Arreglo ordenado: ");
    for (int i = 0; i < n; i++){
        printf("%d ", arreglo[i]);
    }
    printf("\n");

    printf("¿Qué valor desea buscar?: ");
    if (scanf("%d", &objetivo) != 1){
        printf("Entrada inválida.\n");
        return;
    }
    int posicion = busqueda_binaria(arreglo, n, objetivo);
    if (posicion == -1){
        printf("El valor %d no se encuentra en el arreglo.\n", objetivo);
    } else {
        printf("El valor %d está en el índice %d del arreglo ordenado.\n", objetivo, posicion);
    }
}


/*==========================================================================================*/
/*  P11) ALGORITMO DE EUCLIDES: MCD Y MCM                                                   */
/*==========================================================================================*/
/*  Enunciado:
    Calcule el máximo común divisor y el mínimo común múltiplo de dos enteros.

    Explicación de la solución:
    El algoritmo de Euclides se basa en una observación muy simple: el MCD de a y b es el mismo que el MCD
    de b y el resto de a entre b. Repitiendo eso, el segundo número se va achicando hasta llegar a 0, y en
    ese momento el primero es el MCD.

    Lo incluyo porque es el ejemplo perfecto de una recursión que NO explota (a diferencia de fibonacci
    recursivo): cada llamada hace exactamente UNA llamada más, no dos. A eso se le llama recursión de cola
    (tail recursion), y es equivalente a un ciclo while. Por eso acá dejo ambas versiones para comparar.

    Para el MCM usamos la identidad: mcm(a,b) = (a * b) / mcd(a,b).
    Ojo con el orden de las operaciones: conviene dividir ANTES de multiplicar, es decir (a / mcd) * b,
    porque así el número intermedio es más chico y hay menos riesgo de desbordar el int.
*/
int mcd_recursivo(int a, int b){
    if (b == 0){        //  Caso base: cuando el segundo llega a 0, el primero es la respuesta
        return a;
    }
    return mcd_recursivo(b, a % b);     //  Caso recursivo: una sola llamada, con el resto
}

int mcd_iterativo(int a, int b){
    while (b != 0){         //  Exactamente la misma lógica, pero sin gastar pila de llamadas
        int resto = a % b;  //  Calculamos el resto
        a = b;              //  Y desplazamos: el segundo pasa a ser el primero
        b = resto;          //  Y el resto pasa a ser el segundo
    }
    return a;
}

void probar_euclides(void){
    int a, b;
    printf("Ingrese dos enteros positivos separados por un espacio: ");
    if (scanf("%d %d", &a, &b) != 2){   //  Acá scanf debe leer 2 valores, por eso comparamos contra 2
        printf("Entrada inválida.\n");
        return;
    }
    if (a <= 0 || b <= 0){              //  Caso borde
        printf("Ambos números deben ser positivos.\n");
        return;
    }
    int mcd = mcd_iterativo(a, b);
    printf("MCD (recursivo): %d\n", mcd_recursivo(a, b));
    printf("MCD (iterativo): %d\n", mcd);
    printf("MCM            : %d\n", (a / mcd) * b);     //  Dividimos primero para evitar desbordar
}


/*==========================================================================================*/
/*  FUNCIÓN MAIN: MENÚ DE SELECCIÓN                                                         */
/*==========================================================================================*/
/*  Nuestra main será simplemente un menú que permita ejecutar cada problema por separado.

    Notas finales sobre main:
    - Se declara "int main(void)" y no "void main()". El estándar de C exige que main retorne int, porque
      ese valor es el código de salida que recibe el sistema operativo (0 = todo bien, distinto de 0 = error).
    - El "void" entre paréntesis significa explícitamente "no recibe argumentos". Dejarlo vacío, main(),
      significa en C clásico "recibe una cantidad no especificada de argumentos", que no es lo mismo.
    - El ciclo do-while se usa acá porque queremos ejecutar el cuerpo AL MENOS una vez antes de evaluar
      la condición: primero mostramos el menú, después preguntamos si seguir.
*/
void mostrar_menu(void){
    printf("\n=====================================================\n");
    printf("            REPASO DE C - MENÚ DE PROBLEMAS\n");
    printf("=====================================================\n");
    printf(" 1) Fibonacci recursivo simple\n");
    printf(" 2) Comparar las tres versiones de fibonacci\n");
    printf(" 3) Conjetura de Collatz\n");
    printf(" 4) El rey y los granos de arroz\n");
    printf(" 5) Criba de Eratóstenes\n");
    printf(" 6) Cadenas: largo, inversión y palíndromo\n");
    printf(" 7) Matrices: transpuesta y diagonales\n");
    printf(" 8) Triángulo de Pascal\n");
    printf(" 9) Ordenamiento burbuja y búsqueda binaria\n");
    printf("10) Algoritmo de Euclides (MCD y MCM)\n");
    printf(" 0) Salir\n");
    printf("-----------------------------------------------------\n");
    printf("Seleccione una opción: ");
}

int main(void){
    int opcion;     //  Variable donde guardaremos la opción elegida

    do {                        //  do-while: ejecuta el cuerpo y DESPUÉS revisa la condición
        mostrar_menu();
        if (scanf("%d", &opcion) != 1){     //  Si el usuario escribió algo que no es un número
            printf("Entrada inválida, terminando el programa.\n");
            return 1;           //  Retornamos 1 para indicarle al sistema operativo que hubo un problema
        }                       //  Nota: si no cortáramos acá, el carácter inválido quedaría en el buffer
                                //  y el programa entraría en un ciclo infinito leyendo lo mismo una y otra vez.

        switch (opcion){        //  El switch es la forma limpia de escribir muchos if/else if encadenados
            case 1:  probar_fib();          break;  //  El "break" es OBLIGATORIO: sin él la ejecución se
            case 2:  probar_fibonaccis();   break;  //  "cae" al siguiente case y ejecuta también ese código.
            case 3:  probar_collatz();      break;  //  Es uno de los errores más clásicos de C.
            case 4:  tablero_arroz();       break; 
            case 5:  probar_criba();        break;
            case 6:  probar_cadenas();      break;
            case 7:  probar_matrices();     break;
            case 8:  probar_pascal();       break;
            case 9:  probar_ordenamiento(); break;
            case 10: probar_euclides();     break;
            case 0:  printf("¡Hasta la próxima!\n"); break;
            default: printf("Opción no válida, intente nuevamente.\n"); break;
        }
    } while (opcion != 0);      //  Repetimos mientras no elija salir

    return 0;   //  Retornamos 0 para indicar que el programa terminó correctamente
}
