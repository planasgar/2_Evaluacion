//Vamos hacer un programa que lea la palabra y las vocales
#include<iostream>
int devuelve_longuitud(char palabra[]){
    int cont=0;
    char longuitud;
    while(palabra[cont]!='\0'){
                               longuitud++;
                               cont++;
                               }
    return(longuitud);
}
int main(){
    char palabra[10];
    char vocales[]={'a','e','i','o','u'};
    int nvocales,cont;
    int longuitud=0;
    int cont2=0;
    int nconstantes;
    char salir;
    std::cout<<"Dime una palabra: ";
    std::cin>>palabra;
   
    for(cont=0;cont<devuelve_longuitud(palabra);cont++){
       for(nvocales=0;nvocales<5;nvocales++){
          if(palabra[cont]==vocales[nvocales]){
                                                                                                                       
               cont2++;
          }
       }
    }
    cont=0;
    while(palabra[cont]!='\0'){
                               longuitud++;
                               cont++;
    }
                               
          
    std::cout<<"\n";
    std::cout<<"numero vocales: "<<cont2;
    nconstantes=longuitud-cont2;
    std::cout<<"\n";
    std::cout<<"numero constantes: "<<nconstantes;
    
    std::cin>>salir;
    }
    
                                              
                                                                                 
                                                                                    
                                              
                               
