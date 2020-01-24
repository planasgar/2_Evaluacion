#include<iostream>
/*Vamos ha hacer un programa que nos pida 4 numeros y los guarde para calcular la media*/

int main(){
    //Definición de varaiables
    char salir;
    int num[4];
    int cont;
    int suma_numero;
    int media;
    for(cont=0;cont<=3;cont++){
    std::cout<<"Introduce el numero ",cont,": ";
    std::cin>> num[cont];
    }
    //Sacamos los numeros guardados
    std::cout<<"Has metido los siguientes numeros:";
    for(cont=0;cont<=3;cont++){
                             std::cout<<num[cont];
    }
    //Calculamos la media
    std::cout<<"\n";
    std::cout<<"MEDIA\n";
    suma_numero=0;
    for(cont=0;cont<=3;cont++){
                               suma_numero=suma_numero+num[cont];//suma acumulada
    }
    std::cout<<"La suma vale: ";
    std::cout<<suma_numero;
    std::cout<<"\n";
    media=suma_numero/4;
    std::cout<<"La media vale: ";
    std::cout<<media;
    std::cout<<"\n";
    //Mostramos la lista en orden inverso
    std::cout<<"Los numeros en orden inverso son:";
    for(cont=3;cont>=0;cont--){
                               std::cout<<num[cont];
    }
    std::cin>>salir;
}
