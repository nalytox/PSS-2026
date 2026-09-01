/*
    Hola, y bienvenido a este codigo de repaso sobre la materia de pipes y fork.

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


    A continuación, te presentaré un código que te guiará paso a paso, explicándo el por qué de cada
    línea. Mencionando tanto lo práctico como lo teórico y anotaciones. Esto toma en cuenta el funcionamiento
    y pensamiento que se ha de llevar a cabo para ir construyendo nuestro pipe y que estos utilicen procesos pesados (fork)
*/

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>   //  Librería que nos entrega wait() y waitpid(), para que un padre espere a sus hijos
#include <stdio.h>
#include <stdlib.h>

double p(double x){    //  Definimos p como una función cualquiera
//  Notar que la declaramos como double y no como int, aunque el valor que retorna podría caber en un entero.
//  El tipo de retorno es parte del contrato de la función: si retornara int, el valor se truncaría al salir
//  (p(2.5) entregaría 1 y no 1.5) y además el printf con %f estaría leyendo bytes de un tipo distinto al que
//  espera, lo que en C no es un error de compilación sino basura silenciosa en pantalla.
    return x-1;     //  Hacemos que retorne un valor facil para calcular y comprobar los resultados, en este caso, x-1
}
double g(double x){     //  Definimos g como una función cualquiera
    return x;       //  Hacemos que retorne un valor facil para calcular y comprobar los resultados, en este caso, x
}
double h(double x){     //  Definimos h como una función cualquiera
    return 3*x;     //  Hacemos que retorne un valor facil para calcular y comprobar los resultados, en este caso, 3x
}
double f(double x){ //  Partimos definiendo f(x)
    int fds1[2];    //  Definimos el que será el primer pipe
    int fds2[2];    //  Definimos el que luego será el segundo pipe
    pid_t PID1, PID2;   //  Definimos los PIDS para poder tener control posterior de los procesos hijos

/* Anotación: 
La notación estandar para definir pipes viene dada por fds[2]
siendo fds el "nombre" y le damos un largo de 2 para que luego al llamar a la funcion pipe()
se defina el primer indice [0] como la lectura entre codigos y el segundo indice [1] para la lectura
Un posible ejemplo de como visualizar un pipe es como una llave de agua que permite el flujo de esta misma
Notar que al igual que este tipo de llaves, el flujo es unidireccional, lo que significa que los datos no pueden
transmitirse entre los codigos, sino que se transmiten de uno a otro.
Una solución común a lo anterior y generar comunicación bidireccional es crear dos pipes para conectar ambos codigos.
*/

//-----------------------------------//
//      CREACIÓN DE AMBOS PIPES      //
//-----------------------------------//
//  Mediante la función pipe(arg), hacemos que el argumento pasado se convierta en un pipe 
    if (pipe(fds1) == -1 || pipe(fds2) == -1) {     //  Comprobamos si al crear los pipes, alguno retorna -1 que significaría que hubo un error
        fprintf(stderr, "Falló el pipe\n"); //  Imprimimos por la salida de errores que falló
        exit(1);    //  Y hacemos que el programa finalice
    }

    //------------------------------------//
    //      CREACIÓN DEL PRIMER FORK      //
    //------------------------------------//
//  Creamos un fork que guardamos en una de nuestras variables PID mediante la función fork()
    if ((PID1 = fork()) < 0){   //  Comprobamos si el valor del PID obtenido es menor a 0, que significaría que hubo un error
        fprintf(stderr, "Falló el primer fork");    //  En cuyo caso, imprimimos por la salida de errores que falló el fork
        exit(1); // Y terminamos el programa
    }
    

    else if (PID1 == 0){    //  En caso de no haber error, comprobamos si el valor retornado es igual a 0, que significaría que estamos en el proceso hijo
        close(fds1[0]); //  Partimos por cerrar la lectura del primer pipe
/*  Anotación:
El la forma común de trabajar con este tipo de pipes simples, es la siguiente:
close(pipe[0]) -> acción -> write(pipe[1], dirección de lo que se quiere enviar, tamaño de este ultimo)
->close(pipe[1]) -> exit(1)
En donde las flechas indican el órden a llevar a cabo.
Si bien esto es un estandar para acciones simples, no está demás explicar que es lo que hace y tambien aclarar
que no todos los usos de pipes son así. Se recomienda un entendimiento de lo que hay detrás para no cometer errores.
Explicación:
Como sabemos, un pipe conecta una salida estandar con una entrada.
Entonces, la manera de proceder es la siguiente (cada número representa las acciones previamente mencionadas, separadas por flechas)
1) Cerramos la lectura del pipe
2) Hacemos la manipulación de datos que queramos hacer para retornar luego
3) Escribimos con write(), los argumentos pasados a esta función son: 
(Pipe[1] indicando que escribiremos por la salida del pipe, la dirección (&) donde está la variable con el valor que queremos pasar, tamaño de la variable)
4) Cerramos la escritura del pipe
5) Terminamos el proceso
Como anteriormente mencioné, estos pasos son estandar para un fork que busque realizar una acción y pasarla directamente a otro codigo.
*/

        //-------------------------------------//
        //      CREACIÓN DEL SEGUNDO FORK      //
        //-------------------------------------//

        if ((PID2 = fork()) < 0){   //  Creamos otro fork dentro del primer fork y comprobamos si es menor a 0
            fprintf(stderr, "Falló el segundo fork");   //  Si se da el caso, significa que hubo un error y lo imprimimos
            exit(1);    //  Y terminamos la ejecución
        }
        else if (PID2 == 0){    //  Si no es el caso, comprobamos que el PID2 sea igual a 0, es decir, si estamos trabajando con el nieto del codigo original
            close(fds2[0]); //  Cerramos la lectura del segundo pipe
            double valor_g = g(x);  //  Calculamos el valor de g(x)
            write(fds2[1], &valor_g, sizeof(valor_g));  //  Lo escribimos por la salida estandar del pipe
            close(fds2[1]); //  Cerramos el pipe
            exit(0);    //  Terminamos el proceso de este hijo para así no generar problemas de ejecución
            //  El valor entregado a exit() es el código de salida que recibirá el padre al hacer wait().
            //  Por convención, 0 significa "terminé correctamente" y cualquier otro valor significa error.
            //  Como este proceso hizo su trabajo sin problemas, corresponde exit(0).
        }
        close(fds2[1]); //  El hijo cierra su propia copia de la ESCRITURA del segundo pipe antes de ponerse a leer.
        //  Esto es importante y suele olvidarse: al hacer fork() se DUPLICAN los descriptores, así que el pipe
        //  tiene ahora dos extremos de escritura abiertos (el del nieto y el del hijo). Un read() solo termina
        //  cuando TODOS los extremos de escritura están cerrados, así que si el hijo se queda con el suyo abierto
        //  y el nieto llegara a fallar, el read de abajo se bloquearía para siempre esperando datos que no llegan.
        double valor_g; //  Reservamos un espacio de memoria de tipo double para guardar el valor de g
        read (fds2[0], &valor_g, sizeof(valor_g));  //  LLamamos a read para que lea lo entregado por el segundo pipe y lo guarde en la variable valor_g
        double valor_h = h(x);  //  Calculamos el valor de h como h(x)
        double valores[2] = {valor_g, valor_h}; //  Definimos el arreglo de tipo double valores que guarde los dos valores obtenidos
        close(fds2[0]); //  Ya terminamos de usar el segundo pipe, así que cerramos también su lectura
        waitpid(PID2, NULL, 0); //  Esperamos a que el nieto termine antes de continuar
        //  Usamos waitpid() y no wait() porque acá sabemos exactamente a qué proceso queremos esperar: al nieto,
        //  cuyo PID guardamos en PID2. El segundo argumento es la dirección donde guardaríamos su código de
        //  salida (le pasamos NULL porque no nos interesa) y el tercero son banderas de opciones (0 = ninguna).
        write(fds1[1], &valores, sizeof(valores));  //  Escribimos el arreglo creado mediante el primer pipe
        close(fds1[1]); //  Cerramos la escritura del primer pipe
        exit(0);    //  Terminamos la ejecución del hijo para no generar problemas en el código posterior
    }
    //  Continuación del código padre
    close(fds1[1]); //  Partimos por cerrar la escritura de ambos pipes
    close(fds2[1]);
    double valor_p = p(x);  //  Calculamos el valor de p(x)
    double valores[2];  //  Reservamos un espacio de memoria de tipo arreglo de doubles para guardar los valores previamente calculados
    read(fds1[0], &valores, sizeof(valores));   //  Leemos lo entregado por el primer pipe y lo guardamos en la variable recien creada
    close(fds1[0]); //  Cerramos la lectura de ambos pipes
    close(fds2[0]);
    printf("El valor de p es: %f\n", valor_p);  //  Imprimimos el valor de p(x)
    printf("El valor de g es: %f\n", valores[0]);  //  Imprimimos el valor de g(x)
    printf("El valor de h es: %f\n", valores[1]);  //  Imprimimos el valor de h(x)
    waitpid(PID1, NULL, 0); //  Antes de terminar, el padre espera a que su hijo haya finalizado por completo
/*  Anotación sobre wait/waitpid:
Cuando un proceso hijo termina, no desaparece de inmediato del sistema: queda en un estado llamado ZOMBIE.
El sistema operativo mantiene una entrada mínima con su código de salida, esperando a que el padre venga a
"recogerlo". Esa recogida es justamente lo que hace wait() o waitpid().
Si el padre nunca espera a sus hijos, esas entradas se van acumulando y ocupan espacio en la tabla de procesos
del sistema. En un programa corto casi no se nota, pero en un servidor que crea miles de procesos es un problema real.
La diferencia entre ambas funciones es simple:
    wait(&estado)               -> espera a CUALQUIER hijo, al primero que termine
    waitpid(PID, &estado, 0)    -> espera a UN hijo en particular, identificado por su PID
Acá usamos waitpid() porque tenemos guardados los PID y queremos esperar a uno específico.
Notar también que el wait va DESPUÉS del read: si esperáramos antes de leer, y el hijo escribiera más datos de
los que caben en el buffer del pipe, el hijo quedaría bloqueado escribiendo y el padre bloqueado esperándolo.
Ninguno de los dos avanzaría nunca: eso es un interbloqueo (deadlock).
*/
    if (valor_p){   //  Seguimos el prototipo entregado por el enunciado
        return valores[0];
    }
    else{
        return valores[1];
    }
}
int main(void){     //  Declaramos main(void) porque este programa no recibe argumentos por línea de comandos.
//  La forma main(int argc, char* argv[]) solo se justifica si efectivamente vamos a leer esos argumentos.
    f(0);   //  En caso de comprobar con distintos valores, cambiar el argumento entregado a f en esta linea
    return 0;
}