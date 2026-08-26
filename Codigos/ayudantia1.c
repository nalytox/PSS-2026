#include <stdio.h>
#include <stdlib.h>

int main(){
    int c, ele;
    
    printf("Ingresa una opción (1-4) y luego presiona ENTER: ");
    ele = getchar() - '0';  
    getchar();              
    
    printf("Ingresa un número: ");
    if((c = getchar()) != EOF){
        printf("El valor antes de operar es: %d\n", c);
    }
    
    if (ele == 1){
        c = c + 2;
        printf("Se procede a sumarle 2 al valor ingresado.\n");
    }
    else if (ele == 2){
        c = c - 2;
        printf("Se procede a restarle 2 al valor ingresado.\n");
    }
    else if (ele == 3){
        c = c >> 1;        
        printf("Se procede a shiftear por 1 al valor ingresado.\n");
    }
    else if (ele == 4){
        c = (int)(c - 'a');
        printf("Se procede a restarle el valor del char 'a' al valor ingresado\n");
    }
    else if (ele == 5){
        int mascara = 0b01010101;
        c = c ^ mascara;
        printf("Se procede a aplicar una mascara XOR (0b01010101) al valor ingresado.\n");
    }
    printf("El valor final es: ");
    if (ele == 4 || ele == 5){
        printf("%d\n", c);
    } else {
        printf("%c\n", (char)c);
    }

    return 0;
}





#include <stdio.h>
#include <stdlib.h>

int main(){
    int c, ele;
    
    printf("Ingresa una opción (1-4) y luego presiona ENTER: ");
    ele = getchar() - '0';  
    getchar();              
    
    printf("Ingresa un número: ");
    if((c = getchar()) != EOF){
        printf("El valor antes de operar es: %d\n", c);
    }

    if(ele == 1){
        c = c+2;
        printf("Se procede a sumarle 2 al valor ingresado.\n");
    }
    else if(ele == 2){
        c = c-2;
        printf("Se procede a restarle 2 al valor ingresado.\n");
    }
    else if(ele == 3){
        c = c >> 1;
        printf("Se procede a shiftear por 1 al valor ingresado.\n");
    }
    else if (ele == 4){
        c = (int)(c- 'a');
    }


    printf("El valor final es: ");
    if (ele == 4 || ele == 5){
        printf("%d\n", c);
    } else {
        printf("%c\n", (char)c);
    }

    return 0;
}

