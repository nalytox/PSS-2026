#include <stdio.h>
#include <stdlib.h>

int len(char* str){         // Nombro a mi funcion definiendole el tipo de dato que va a retornar y el nombre de la funcion, ademas de los parametros que va a recibir
    int largo = 0;          // Defino el largo inicial como 0
    while (*str != '\0'){   // Mientras el caracter al que apunta str no sea el caracter nulo, hago lo siguiente:
        largo++;            // Aumento el largo en 1
        str++;              // Avanzo al siguiente caracter de la cadena
    }
    return largo;           // Retorno el largo de la cadena
}

int main(){
    char string[] = "hola";   //        Ingrese su palabra aquí
    int largo = len(string);  // Llamo a la funcion len y almaceno el resultado en largo
    printf("El largo de sus string es: %d", largo); // Imprimo el largo de la cadena
    return 0; // Retorno 0 para indicar que el programa finalizo correctamente
}