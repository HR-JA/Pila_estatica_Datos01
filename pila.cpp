#include "pila.h"
pila::pila(){
    tope=-1;
}
void pila::push(){
    int x;
    if(llena()==0){
        cout<<"ingresa numero"<<endl;
        cin>>x;
        tope ++;
     datos[tope]=x;
     }

}
void pila::pop(){
    if(vacia()==0){
        datos[tope ]= 0;
        tope --;
    }
}
void pila::mostrar_tope(){
    if(vacia()==0){
        system("cls");
        cout<<"El tope es:  "<<datos[tope ]<<endl;
        system("pause");
    }
}


void pila::mostrar_pila(){
int ayuda,i;
if(vacia()==0){
system("cls");
    for(i=tope;i>=0;i--){
    cout<<datos[i]<<endl; 
}
//system("pause");
}

  }


int  pila::vacia(){
if(tope==-1){
system("cls");
cout<<"LA PILA ESTA VACIA"<<endl;
system("pause");

return 1;
} else{
return 0;
}
}
int  pila::llena(){
if(tope==9){
system("cls");
cout<<"LA PILA ESTA LLENA "<<endl;
system("pause");
     return 1;

}
else{
return 0;
}
}