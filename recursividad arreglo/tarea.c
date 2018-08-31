#include<stdio.h>
int sumar (long int *elementos){
    
    if (*elementos == 0){
        return 1;
    }else{
        return *elementos + sumar(elementos-1);
    }

    
}
int main (int argc, char *argv){
    int elementos[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int resultado = sumar(elementos);
    return 0;
}