#include <stdlib.h>
#include <stdio.h>

#define GEN "CGATT"
#define LARGO_GEN 5

typedef struct nodo {
    char valor;
    struct nodo* sig;
} nodo;

nodo* generar(char valor){
    nodo* nuevo = (nodo*)malloc(sizeof(nodo));
    nuevo->valor = valor;
    nuevo->sig = NULL;
    return nuevo;
}

nodo* agregar(nodo* cabeza, char valor){
    nodo* nuevo = generar(valor);
    nodo* aux;

    if (cabeza == NULL){
        return nuevo;
    }

    aux = cabeza;
    while (aux->sig != NULL){
        aux = aux->sig;
    }
    aux->sig = nuevo;
    return cabeza;
}

void imprimir(nodo* cabeza){
    nodo* aux = cabeza;

    while (aux != NULL){
        printf("%c", aux->valor);
        aux = aux->sig;
    }
    printf("\n");
}

void liberarMemoria(nodo* cabeza){
    nodo* aux;

    while (cabeza != NULL){
        aux = cabeza;
        cabeza = cabeza->sig;
        free(aux);
    }
}

nodo* leerCadena(){
    nodo* cabeza = NULL;
    int c;

    c = getchar();
    while (c != '\n' && c != EOF){
        cabeza = agregar(cabeza, (char)c);
        c = getchar();
    }
    return cabeza;
}

int esValida(nodo* cabeza){
    nodo* aux = cabeza;

    while (aux != NULL){
        if (aux->valor != 'G' && aux->valor != 'A' &&
            aux->valor != 'T' && aux->valor != 'C'){
            return 0;
        }
        aux = aux->sig;
    }
    return 1;
}

int hayGenAqui(nodo* aux){
    int i = 0;

    while (i < LARGO_GEN){
        if (aux == NULL){
            return 0;
        }
        if (aux->valor != GEN[i]){
            return 0;
        }
        aux = aux->sig;
        i++;
    }
    return 1;
}

int buscarGen(nodo* cabeza){
    nodo* aux = cabeza;
    int indice = 0;

    while (aux != NULL){
        if (hayGenAqui(aux)){
            return indice;
        }
        aux = aux->sig;
        indice++;
    }
    return -1;
}

nodo* eliminarGen(nodo* cabeza, int indice){
    nodo* anterior = NULL;
    nodo* actual = cabeza;
    nodo* aux;
    int i = 0;

    while (i < indice){
        anterior = actual;
        actual = actual->sig;
        i++;
    }

    i = 0;
    while (i < LARGO_GEN){
        aux = actual;
        actual = actual->sig;
        free(aux);
        i++;
    }

    if (anterior == NULL){
        return actual;
    }
    anterior->sig = actual;
    return cabeza;
}

int main(){
    nodo* cabeza;
    int indice;

    printf("Ingrese la cadena de ADN: ");
    cabeza = leerCadena();

    if (cabeza == NULL){
        printf("No se ingreso ninguna cadena\n");
        return 1;
    }

    if (esValida(cabeza) == 0){
        printf("Cadena invalida: solo se permiten las letras G, A, T y C\n");
        liberarMemoria(cabeza);
        return 1;
    }

    indice = buscarGen(cabeza);

    if (indice == -1){
        printf("El gen %s no se encuentra en la cadena\n", GEN);
    }
    else {
        printf("El gen %s aparece por primera vez en el indice %d\n", GEN, indice);
        cabeza = eliminarGen(cabeza, indice);
        printf("Cadena resultante: ");
        imprimir(cabeza);
    }

    liberarMemoria(cabeza);
    return 0;
}
