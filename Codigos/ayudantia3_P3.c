#include <stdio.h>

// Calcula cuántos bits necesita n para ser representado
int tamano_bits(unsigned int n){              // Defino mi funcion tamano_bits que recibe un entero sin signo y retorna un entero
    if (n == 0)              // Si n es 0, necesita 1 bit
        return 1;              // Retorno 1, ya que el número 0 se representa con un solo bit
    int bits = 0;              // Inicializo el contador de bits
    while (n > 0){              // Mientras n sea mayor que 0
        bits++;              // Incremento el contador de bits
        n = n >> 1;            // descarto el bit menos significativo
    }
    return bits;              // Retorno el número de bits necesarios para representar n
}

void imprimir_binario(unsigned int n){              // Defino mi funcion imprimir_binario que recibe un entero sin signo y retorna void
    int bits = tamano_bits(n);              // Defino bits como el número de bits necesarios para representar n
    // La máscara empieza con un 1 en la posición más significativa
    unsigned int mascara = 1u << (bits - 1);              // Inicializo la máscara con un 1 en la posición más significativa, teniendo en cuenta que 1u significa que es un entero sin signo, y bits - 1 es el índice del bit más significativo
    while (mascara > 0){              // Mientras la máscara sea mayor que 0
        printf("%d", (n & mascara) ? 1 : 0);              // Imprimo 1 si el bit correspondiente en n es 1, de lo contrario imprimo 0
        mascara = mascara >> 1;              // Desplazo la máscara un bit a la derecha para verificar el siguiente bit
    }
    printf("\n");              // Imprimo un salto de línea al final
}

int main(){
    unsigned int n;              // Defino n como un entero sin signo para almacenar el número ingresado por el usuario

    printf("Ingrese un número: ");              // Imprimo un mensaje solicitando al usuario que ingrese un número
    scanf("%u", &n);              // Leo el número ingresado por el usuario y lo almaceno en n, usando %u para indicar que es un entero sin signo

    printf("El número %u en binario es: ", n);              // Imprimo un mensaje indicando el número ingresado y que se mostrará en binario
    imprimir_binario(n);              // Llamo a la función imprimir_binario para mostrar la representación binaria de n

    return 0;              // Retorno 0 para indicar que el programa finalizó correctamente
}