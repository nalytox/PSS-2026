#include <stdlib.h>
#include <stdio.h>

typedef struct nodo {
    int valor;     
    struct nodo* izq;   
    struct nodo* der;   
} nodo;  

nodo* generar(int valor){   
    nodo* nuevo = (nodo*)malloc(sizeof(nodo));  
    nuevo -> valor = valor;
    nuevo -> izq = NULL;
    nuevo -> der = NULL;
    return nuevo;    
}

void agregar(nodo* cabeza, int valor){

  nodo* nuevo = generar(valor);
  nodo * aux = cabeza;      
  while (aux){
    if (aux->valor > nuevo->valor){
        if (aux->izq == NULL){
            aux->izq = nuevo;
            break;
        }
        aux = aux->izq;
    }
    else if (aux->valor < nuevo->valor){
        if (aux->der == NULL){
            aux->der = nuevo;
            break;
        }
        aux = aux->der;
    }
  } 
}   

void liberarMemoria(nodo* cabeza) {
    if (cabeza == NULL) return;
    liberarMemoria(cabeza->izq);
    liberarMemoria(cabeza->der);
    free(cabeza);
}

void buscar(nodo* cabeza, int valor){
    for(;cabeza->valor != valor;){
        if (cabeza->valor > valor){
            buscar(cabeza->izq, valor);
        }
        else if (cabeza->valor < valor){
            buscar(cabeza->der, valor);
        }
        return;
    }
    printf("Valor encontrado\n");
}
void minmax(nodo* cabeza, int* min, int* max){
  nodo* auxmin = cabeza;
  nodo* auxmax = cabeza;
  while (1){
    if (!auxmin->izq && !auxmax->der){
        *min = auxmin->valor;
        *max = auxmax->valor;
        break;
    }
    else if (!auxmin->izq && auxmax->der){
      auxmax = auxmax->der;
    }
    else if (!auxmax->der && auxmin->izq){
      auxmin = auxmin->izq;
    }else{
      auxmin = auxmin->izq;
      auxmax = auxmax->der;
    }
  }

}
int alto(nodo* cabeza, int numero){
  int contador = 0;
  for (nodo* aux = cabeza; aux != NULL; contador++){
    if (numero == aux->valor) 
        return contador;
    aux = (numero < aux->valor) ? aux->izq : aux->der;
  }
  printf("Su valor no se encuentra\n");
  return -1;
}

int main(){
    int min;
    int max;
    nodo* cabeza = generar(4);
    agregar(cabeza, 3);
    agregar(cabeza, 5);
    buscar(cabeza, 3);
    minmax(cabeza, &min, &max);
    printf("El valor mínimo es: %dEl valor máximo es: %d\n", min, max);
    liberarMemoria(cabeza);
    return 0;
}