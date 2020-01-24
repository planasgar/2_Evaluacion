#include<iostream>
/*Un prorama que lea una palabra y me devuelva la inicial*/
int main(){
    char palabra[10];
    char salir;
    int cont;
    int longuitud=0;
    std::cout<<"Dime tu nombre: ";
    std::cin >> palabra;
    std::cout<<"\n Te llamas ";
    std::cout<< palabra;
    std::cout<<"\n La primera letra de tu nombre es: ";
    std::cout<< palabra[0];
    std::cout<<"\nANIMADORA: \n";
    for(cont=0;cont<=9;cont++){
                               std::cout<<palabra[cont];
                               std::cout<<'\n';
                               }
                               for(cont=0;cont<=9;cont++){
                                                          if(palabra[cont]!='\0'){
                                                                                  longuitud=longuitud+1;
                                                                                  }
                                                          }
                                                                                  
    std::cout<<"El nombre de ";
    std::cout<< palabra;
    std::cout<<" tiene ";
    std::cout<< longuitud;
    std::cout<<" letras";
                                                                                  
    std::cin >> salir;
}
