#include <stdio.h>
#include <string.h>

void reverse(char *str){            // Defino mi funcion reverse que recibe un puntero a char y retorna un char
    int j = strlen(str) - 1;            // Defino j como el largo de la cadena menos 1, para que apunte al ultimo caracter que no es '/0'
    for (int i = 0; i < j; i++, j--) {            // Recorro la cadena desde el principio y desde el final, hasta que los indices se crucen
        char aux = str[i];            // Defino una variable auxiliar para almacenar el caracter en la posicion i
        str[i] = str[j];            // Asigno el caracter en la posicion j a la posicion i
        str[j] = aux;            // Asigno el caracter en la posicion aux a la posicion j
    }
}

int main(){
    char str[100];            // Defino un arreglo de caracteres de tamaño 100 para almacenar la cadena ingresada por el usuario

    printf("Ingrese su palabra: ");            // Solicito al usuario que ingrese una palabra
    scanf("%99s", str);         // Leo la palabra ingresada por el usuario y la almaceno en el arreglo str, limitando la entrada a 99 caracteres para evitar desbordamiento de buffer. El 100-ésimo caracter se guarda como '\0' automáticamente por scanf.

    printf("Palabra original:  %s\n", str);            // Imprimo la palabra original ingresada por el usuario
    reverse(str);            // Llamo a la funcion reverse para invertir la palabra ingresada por el usuario
    printf("Palabra invertida: %s\n", str);            // Imprimo la palabra invertida

    return 0;            // Retorno 0 para indicar que el programa finalizó correctamente
}