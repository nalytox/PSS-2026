#include <stdio.h>

#define MAX 64      // Tamaño máximo para las cadenas binarias

char *XOR(const char *x, const char *y, char *res)      // Defino mi funcion XOR que recibe tres punteros a caracteres y retorna un puntero a carácter
{
    int i;      // Inicializo un contador i para recorrer las cadenas

    if (x == NULL || y == NULL || res == NULL) {      // Chequeo si alguno de los punteros es NULL
        return NULL;      // Retorno NULL si alguno es NULL
    }

    for (i = 0; x[i] != '\0' && y[i] != '\0'; i++) {      // Recorro las cadenas mientras no llegue al final de ninguna de ellas

        if ((x[i] != '0' && x[i] != '1') || (y[i] != '0' && y[i] != '1')) {      // Chequeo si los caracteres son diferentes de '0' y '1'
            return NULL;    // Retorno NULL si alguno de los caracteres no es '0' o '1'
        }

        int a = x[i] - '0';       // Convierto el carácter a un entero (0 o 1)
        int b = y[i] - '0';      // Convierto el carácter a un entero (0 o 1)

        /* XOR construido a mano: (~a & b) | (a & ~b) */
        int r = ((~a & b) | (a & ~b)) & 1;

        res[i] = r ? '1' : '0';      // Asigno el resultado de la operación XOR a la cadena de resultado como carácter ('0' o '1')
    }

    /* si una termino antes que la otra, entonces los largos no coinciden */
    if (x[i] != '\0' || y[i] != '\0') {
        return NULL;
    }

    res[i] = '\0';      // Agrego el carácter nulo al final de la cadena de resultado
    return res;      // Retorno el puntero a la cadena de resultado
}


int main(void)
{
    char a[MAX];      // Defino un arreglo de caracteres para la primera cadena binaria
    char b[MAX];      // Defino un arreglo de caracteres para la segunda cadena binaria
    char resultado[MAX];      // Defino un arreglo de caracteres para almacenar el resultado de la operación XOR

    printf("Ingrese la primera cadena binaria (solo 0 y 1): ");      // Imprimo un mensaje para solicitar la primera cadena binaria
    scanf("%s", a);      // Leo la primera cadena binaria desde la entrada estándar
    printf("Ingrese la segunda cadena binaria (solo 0 y 1): ");      // Imprimo un mensaje para solicitar la segunda cadena binaria
    scanf("%s", b);      // Leo la segunda cadena binaria desde la entrada estándar
    

    if (XOR(a, b, resultado) == NULL) {      // Comparo el resultado de la función XOR con NULL para verificar si hubo un error
        printf("Entrada invalida: las cadenas deben tener el mismo largo y contener solo 0 y 1\n");      // Imprimo un mensaje de error
        return 1;      // Retorno 1 para indicar que hubo un error
    }

    printf("xor = %s\n", resultado);      // Imprimo el resultado de la operación XOR

    return 0;       // Retorno 0 para indicar que el programa finalizó correctamente
}