#include<iostream>
#include<stdio.h>
#include<stdlib.h>

int main(){
    int a;
    int *pa;
    char salir;
    int numeros[5];
    a=2;
    //pa=&a;
    numeros[0]=9;
    numeros[1]=8;
    numeros[2]=7;
    printf("El numero a=%d y esta almacenado en %X",a,&a);
    printf("\n");
    printf("La variable pa es un puntero pa=%X",pa);
    printf("\nnumeros[0]=%d",numeros[0]);
    printf("\nnumeros[1]=%d",numeros[1]);
    printf("\nnumeros[2]=%d",numeros[2]);
    printf("\nnumeros[3]=%d",numeros[3]);
    printf("\nnumeros=%d",*(numeros+1));
    std::cin>> salir;
}
    
