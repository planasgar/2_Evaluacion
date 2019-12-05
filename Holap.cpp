#include<iostream>
int main(){
    //Definicion de variables
    char salir;
    char respuesta;
    std::cout<<"Hola";
    std::cout<<" Eres guapo? (s/n)";
    std::cin>> respuesta;
    if(respuesta=='s'){
                       std::cout<<"No mientas, poque mientes, mentir esta mal";
    }
    else{
         std::cout<<"Tio no pasa nada, ella no te iba a querer tampoco aunque fueras guapo";
    }
    std::cin>> salir;
}
