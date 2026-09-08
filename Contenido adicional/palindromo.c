#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void palindromo(const char* str){     // Defino mi funcion palindromo que recibe un puntero a char y retorna un char
    int j = strlen(str) - 1;     // Defino j como el largo de la cadena menos 1, para que apunte al ultimo caracter que no es '/0'
    for (int i = 0; i< j;i++){     // Recorro la cadena desde el principio
        if (str[i] != str[j]){     // Si los caracteres no coinciden
            printf("La palabra ingresada no es un palíndromo\n");     // Imprimo un mensaje
            return;     // Termino la ejecución de la funcion
            }
        j--;     // Decremento j para apuntar al siguiente caracter desde el final
    }
    printf("La palabra ingresada si es un palíndromo");     // Imprimo un mensaje de que la palabra es un palindromo
}

int main(){ 
    const char *str1 = "hola"; // Defino un puntero a char que apunta a la cadena "hola". Esta definición es para sólo lectura, ya que las cadenas literales son inmutables en C.
    palindromo(str1);     // Llamo a la funcion palindromo con el puntero str1 como argumento 
    const char *str2 = "reconocer";     // Defino un puntero a char que apunta a la cadena "reconocer". Esta definición es para sólo lectura, ya que las cadenas literales son inmutables en C.
    palindromo(str2);     // Llamo a la funcion palindromo con el puntero str2 como argumento
    return 0;     // Retorno 0 para indicar que el programa finalizó correctamente
    /*
    En caso de querer utilizar un string modificable, se utiliza char str[] = "hola";
    Esto crea un arreglo de caracteres que puede ser modificado, a diferencia de un puntero a char que apunta a una cadena literal, la cual es inmutable. 
    Sin embargo, en este caso, no es necesario modificar la cadena, por lo que se utiliza un puntero a char para ahorrar memoria y evitar copias innecesarias. 
    Además, al utilizar un puntero a char, se puede pasar la cadena a funciones sin necesidad de copiarla, lo que mejora el rendimiento del programa. 
    En resumen, se utiliza un puntero a char para cadenas literales inmutables y un arreglo de caracteres para cadenas modificables. 
    */
} 
