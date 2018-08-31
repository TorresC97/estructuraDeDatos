#include<stdio.h>
int sumar (int *elementosArreglo, int tamanioArreglo){
    
    if (tamanioArreglo-1 == 0){
        return elementosArreglo[tamanioArreglo-1];
    }else{
        return elementosArreglo[tamanioArreglo-1] + sumar(elementosArreglo,tamanioArreglo-1);
    }
}
int main (int argc, char *argv){
    int elementos[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    //int resultado = sumar(elementos);
    printf("%i",sumar(elementos,10)); /*refactorice*/
    return 0;
}