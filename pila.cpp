#include "pila.h"
pila::pila(){
    tope=-1;
}
void pila::push(){
    int x;
    if(llena()==0){
        //cout<<"ingresa numero"<<endl;
        scanw("%d",&x);//cin>>x;
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
    GUI graf;
    string n="El tope es: " + to_string(datos[tope]);
    char const *Num = n.c_str();
    if(vacia()==0){
        clear();//system("clear");
        graf.Msg(Num);//cout<<"El tope es:  "<<datos[tope ]<<endl;
        //cin.get();//system("pause");
    }
}
void pila::mostrar_pila(){
    GUI graf;
    int i;
    clear();//system("clear");
    if(vacia()==0){
        for(i=0;i<=tope;i++){
            graf.pila(datos[i],i);//cout<<datos[i]<<endl; 
        }
        //system("pause");
    }
}
int  pila::vacia(){
    GUI graf;
    if(tope==-1){
        //system("clear");
        graf.Msg("LA PILA ESTA VACIA");//cout<<"LA PILA ESTA VACIA"<<endl;
        //cin.get();//system("pause");
        return 1;
    }
    else{
        return 0;
    }
}
int  pila::llena(){
    GUI graf;
    if(tope==9){
        clear();//system("clear");
        graf.Msg("LA PILA ESTA LLENA");//cout<<"LA PILA ESTA LLENA "<<endl;
        ///cin.get();//system("pause");
     return 1;
    }
    else{
         return 0;
    }
}