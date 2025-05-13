#include <iostream>
using namespace std;

int main(){
    //declarar variables
    int edad,cliente,descuento, combo1,combo2,combo3;
    

    cout<<" ingresar edad "<<endl;
    cin>> edad;

 //verificacion de edad
 if(edad <12){
    cout <<" edad inapropiada intente de nuevo";
 } else {
    cout<<" puedes proceder con tu compra"<<endl;
    //verificar tipo de cliente
    cout<<" para que tipo de cliente nesesitas ver"<<endl;
    cout<<" ingresa 1 para estudiante"<<endl;
    cout<<" ingresar 2 para adulto mayor"<<endl;
    cout<< " ingresar 3 para ver todo "<<endl;
    cin>> cliente; 
    switch (cliente)
    {
    case 1:
        //tu descuento es de 25 porciento
        cout <<" tu descuento es del 25%"<<endl;
        cout <<" que deseas ordenar "<<endl;
        descuento=0.25;
        cout<< " ingresa 1 si quieres el combo de hamburguesa $8"<<endl; 
        cin>> combo1;
        cout<<" ingresa 2 si quieres el combo de pizza personal $7"<<endl; 
        cin>> combo2;
        cout<<" ingresa 3 si quieres un almuerzo ejecutivo $10"<<endl;
        cin>> combo3;
        combo1=8*descuento;
        combo2=7*descuento;
        combo3=10*descuento;
        if(combo1){
            cout<<"tu precio es"<<combo1<<endl;
        }
        break;
    
    default:
        break;
    }
    }











    return 0;
}