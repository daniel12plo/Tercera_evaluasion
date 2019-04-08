#include<iostream>
#include<stdio.h>
int main(){
    int x;
    int y;
    char salir;
    x=3;
    y=5;
    int *px;
    px=&x;
    
    
    
    printf("\nDireccion x=%X direccion y=%X",&x,&y);
    printf("\ncontenido x=%d contenido y=%d",x,y);
    
    std::cout<<"\nToca cualquier tecla:";
    std::cin>>salir;
    return 0;
}
