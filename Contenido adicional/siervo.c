  #include <stdio.h>

int granos[14];         //

long potencia(int base, int exponente){         // Defino mi funcion potencia que recibe dos enteros y retorna un long
    long resultado = base;         // Defino resultado como base, para que en el caso de exponente = 1, retorne base
    if (exponente == 0)         // Chequeo si el exponente es 0, en cuyo caso retorno 1
    return 1;         // Retorno 1, ya que cualquier número elevado a 0 es 1
    while (exponente > 1){         // Mientras el exponente sea mayor a 1, multiplico resultado por base y decremento exponente
        resultado = resultado * base;         // El resultado se multiplica por la base
        --exponente;         // Decremento el exponente en 1
    }
    return resultado;         // Retorno el resultado final, que es base elevado a exponente
}

int main(){
    int total = 0;         // Defino total como 0, para acumular la cantidad de granos en todas las casillas
    for (int i=0; i<14; i++){         // Recorro las 14 casillas del tablero
        granos[i] = potencia(2, i);         // Calculo la cantidad de granos en cada casilla
        total += granos[i];         // Acumulo la cantidad de granos
        printf("En la %d-ésima casilla hay %d granos\n", i, granos[i]);         // Imprimo la cantidad de granos en cada casilla
    }
    printf("El total de granos es: %d\n", total);         // Imprimo el total de granos en todas las casillas

    return 0;         // Retorno 0 para indicar que el programa finalizó correctamente
}

/*
        POSIBLE SOLUCIÓN ALTERNATIVA, y optimizada:
#include <stdio.h>

int granos[14];

int main(){
    granos[0] = 1;
    int total = 1;
    printf("En la 0-ésima casilla hay 1 granos\n");
    for (int i = 1; i < 14; i++){
        granos[i] = 2 * granos[i-1];
        total += granos[i];
        printf("En la %d-ésima casilla hay %d granos\n", i, granos[i]);
    }
    printf("El total de granos es: %d\n", total);
    return 0;
}
*/