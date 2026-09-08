#include <stdio.h>

int Collatz(int n){   // Defino mi funcion Collatz que recibe un entero n y retorna un entero
    int pasos = 0;   // Inicializo el contador de pasos
    if (n == 2){   // Si n es 2, retorno 1 paso
        return 1;   //
    }
    while (n != 1){   // Mientras n no sea 1
        if (n % 2){   // Si n es impar
            n = n/2;   // Divido n entre 2
        }
        else{   // Si n es par
            n = 3*n+1;   // Multiplico n por 3 y le sumo 1
        }
        pasos++;   // Aumento el contador de pasos
    }
    return pasos;   // Retorno el número de pasos
}

int main(){
    printf("Ingrese un número a calcular\n");   // Solicito al usuario que ingrese un número
    int n = getchar() - '0';   // Leo el número ingresado por el usuario
    int pasos = Collatz(n);   // Llamo a la función Collatz y almaceno el resultado
    printf("El número de pasos hasta llegar a 1 fue: %d", pasos);   // Imprimo el resultado
    return 0;   // Retorno 0 para indicar que el programa finalizó correctamente
}