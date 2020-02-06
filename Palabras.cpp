#include<iostream>
#include<stdio.h>
#include<stdlib.h>
int devuelve_longitud(char palabra[]){
    int cont=0;
    char longitud;
    while(palabra[cont]!='\0'){
                               longitud++;
                               cont++;
                               }
    return(longitud);
}

int main(){
    char *palabra[4];
    int cont;
    char salir;
    char aux[20];
    int longitud;
    int veces;
    char *p_aux;
    //Leo 4 palabras
    for(cont=0;cont<4;cont++){
                              std::cout<<"Palabra: ";
                              std::cin>>aux;
                              longitud=devuelve_longitud(aux);
                              std::cout<<longitud;
                              palabra[cont]=(char *)malloc(longitud*sizeof(char));
                              strcpy(palabra[cont],aux);
                              //Copia la cadena de caracteres de aux a su sitio eservado (destino,origen)
                              //Es una funcion que esta pensada para que los dos parametros sean la posición de memoria para cada letra. (11AB02, 34BG99)
                              //Reserva el sitio con la longuitud de la palabra 0,1,2,3 mas 1 ya que esta wl \0
                              //sizeof() tamaño de la letra, el numero
                              //(char*) te obliga a que lo que se guarde sea una letra
                              std::cout<<"\n";
                              }
    std::cout<<"Lista de palabras\n";
    for(cont=0;cont<4;cont++){
                              printf("%s",palabra[cont]);
                              std::cout<<("\n");
                              }
    //Ordenamos por el metodo de la burbuja
    for(veces=1;veces<4;veces++){
      for(cont=0;cont<3;cont++){
        if(strcmp(palabra[cont],palabra[cont+1])>0){
          p_aux=palabra[cont];
          palabra[cont]=palabra[cont+1];
          palabra[cont+1]=p_aux;
        }
      }
    } 
    std::cout<<"Lista de palabras ordenadas\n";
    for(cont=0;cont<4;cont++){
      printf("%s",palabra[cont]);
      std::cout<<("\n");
    }
                             
    std::cin>> salir;
}
