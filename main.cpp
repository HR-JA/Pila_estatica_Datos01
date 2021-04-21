#include <iostream>
#include <stdlib.h>
#include "pila.h"
//#include<windows.h>
using namespace std;
int main(){
    pila p;
    int opcion,num;
    do{
        system("clear");
        p.mostrar_pila();
        cout<<"\n\n[1].ingresar numero\n[2].Eliminar \n[3].Mostrar tope\n[4].Mostrar pila\n[5].salir"<<endl;
        cin>>opcion;
        switch(opcion){
            case 1:p.push();break;
            case 2:p.pop();break;
            case 3:p.mostrar_tope();break;   
            case 4:p.mostrar_pila();break;
            default: cout<<"Opcion no encontrada:404 "<<endl;
        }
    }while(opcion!=5);
}