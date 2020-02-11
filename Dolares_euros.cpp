#include <iostream>
#include <stdlib.h>

int main(){
    char salir;
	int euros,dolares;
    int a;
	std::cout<<"Que es lo que quiere hacer pasar de \nSi es de euros a dolares introduzca 1. \nSi es de dolares a euros introduzca 2\n";
    std::cin>>a;
	if(a=1){
		std::cout<<"\nEuros: "; 
        std::cin>>euros; 
		std::cout<<"\nSon "<<euros*1.10<<" dolares";
	}
    else if(a=2){
		std::cout<<"\n Dolares: ";
        std::cin>>dolares;
		std::cout<<"\nSon "<<dolares/1.10<<" euros";
	}
    else{
		std::cout<<"Error";
	}
	std::cin>>salir;
}
