#include <iostream>
#include <stdlib.h>
#include "pila.h"
//#include<windows.h>
using namespace std;
int main(){
    pila p;
    GUI graf;
    int opcion,num;
    initscr();
    do{
        //system("clear");
        if(opcion!=3&&p.llena()==0)p.mostrar_pila();
        opcion=graf.menu();//cout<<"\n\n[1].ingresar numero\n[2].Eliminar \n[3].Mostrar tope\n[4].Mostrar pila\n[5].salir"<<endl;
        //cin.ignore();
        switch(opcion){
            case 1:p.push();break;
            case 2:p.pop();break;
            case 3:p.mostrar_tope();break;   
            //case :p.mostrar_pila();break;
            case 4:break;
            //default: cout<<"Opcion no encontrada:404 "<<endl;
        }
    }while(opcion!=4);
    endwin();
}