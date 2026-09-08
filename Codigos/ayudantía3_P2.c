#include <stdio.h>

int indices[10] = {0};          // Arreglo para almacenar los índices de los caracteres distintos
int comprobacion(char* cadena);          // Defino mi funcion comprobacion que recibe un puntero a char y retorna un int
int iguales(char* cadena, char* comp);          // Defino mi funcion iguales que recibe dos punteros a char y retorna un int
void distintos(char* x, char* y);          // Defino mi funcion distintos que recibe dos punteros a char y retorna void
void printear( char *x, char *Y);          // Defino mi funcion printear que recibe dos punteros a char y retorna void

int comprobacion(char* cadena){
    int count = 0;          // Inicializo un contador para contar la cantidad de caracteres en la cadena
    while (*cadena != '\0'){          // Mientras el carácter apuntado no sea el carácter nulo
        count++;          // Incremento el contador
        printf("valor de ptr %c\n",*cadena);          // Imprimo el valor del carácter apuntado por el puntero
        if (*cadena != 'A' && *cadena != 'G' && *cadena != 'C' && *cadena != 'T'){          // Si el carácter no es A, G, C o T
            return 1;          // Retorno 1 para indicar que la cadena no es válida
        }
        cadena++;          // Avanzo al siguiente carácter de la cadena
    }
    if (!count)          // Si la cadena está vacía
        return 1;          // Retorno 1 para indicar que la cadena no es válida
    return 0;          // Retorno 0 para indicar que la cadena es válida
}

int iguales(char* cadena, char* comp){
    while (*cadena == *comp){          // Mientras los caracteres apuntados por los punteros sean iguales
        cadena++;          // Avanzo al siguiente carácter de la cadena
        comp++;          // Avanzo al siguiente carácter de la cadena de comparación
        if (*cadena == '\0' && *comp == '\0')          // Si ambos punteros apuntan al carácter nulo
            return 0;          // Retorno 0 para indicar que las cadenas son iguales
    }
    return 1;          // Retorno 1 para indicar que las cadenas son distintas
}

void distintos(char* x, char* y) {
    printf("Los indices distintos son: ");          // Imprimo un mensaje indicando que se van a mostrar los índices de los caracteres distintos
    for (int i = 0; i < 10; i++) {          // Recorro los índices de las cadenas
        if (x[i] != y[i]) {          // Si los caracteres en la posición i son distintos
            printf("%d, ", i);          // Imprimo el índice i
            indices[i] = 1;          // Marco el índice como distinto
        }
    }
    printf("\n");          // Imprimo un salto de línea
}

void printear(char *x, char *y) {
    printf("Caracteres distintos (cadena 1): ");          // Imprimo un mensaje indicando que se van a mostrar los caracteres distintos de la cadena 1
    for (int i = 0; i < 10; i++) {          // Recorro los índices de las cadenas
        if (indices[i]) {          // Si el índice i está marcado como distinto
            printf("%c ", x[i]);          // Imprimo el carácter en la posición i de la cadena 1
        }
    }
    printf("\n");          // Imprimo un salto de línea

    printf("Caracteres distintos (cadena 2): ");          // Imprimo un mensaje indicando que se van a mostrar los caracteres distintos de la cadena 2
    for (int i = 0; i < 10; i++) {          // Recorro los índices de las cadenas
        if (indices[i]) {          // Si el índice i está marcado como distinto
            printf("%c ", y[i]);          // Imprimo el carácter en la posición i de la cadena 2
        }
    }
    printf("\n");          // Imprimo un salto de línea
}

int main() {
    char cadena[11];          // Arreglo para almacenar la cadena de ADN ingresada por el usuario
    char comp[11] = "GACTACTAG";          // Arreglo con la cadena de ADN de referencia

    printf("Ingrese una cadena de ADN (maximo 10 caracteres): ");          // Solicito al usuario que ingrese una cadena de ADN
    scanf("%10s", cadena);          // Almaceno la cadena ingresada por el usuario en el arreglo cadena, limitando la entrada a 10 caracteres para evitar desbordamiento de buffer

    if (comprobacion(cadena)) {          // Si la cadena ingresada no es válida
        printf("La cadena ingresada no es una cadena de ADN valida.\n");          // Imprimo un mensaje indicando que la cadena no es válida
        return 1;          // Retorno 1 para indicar que hubo un error
    }

    int resultado = !iguales(cadena, comp);          // Compruebo si las cadenas son iguales

    if (resultado) {          // Si las cadenas son iguales
        printf("Las cadenas son iguales.\n");          // Imprimo un mensaje indicando que las cadenas son iguales
    } else {          // Si las cadenas son distintas
        printf("Las cadenas NO son iguales.\n");          // Imprimo un mensaje indicando que las cadenas no son iguales
        distintos(cadena, comp);          // Muestro los índices de los caracteres distintos
        printear(cadena, comp);          // Muestro los caracteres distintos
    }
    return 0;          // Retorno 0 para indicar que el programa se ejecutó correctamente
}
