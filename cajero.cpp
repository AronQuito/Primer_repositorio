#include <iostream>
using namespace std;
int saldo=0;
void menu();

int main(){
    menu();
    return 0;
    
}

void menu(){
    int op;
    do{
        cout<<"\n--- Cajero automatico ---"<<endl;
        cout<<"1. Depositar 100"<<endl;
        cout<<"2. Retiro 100"<<endl;
        cout<<"3. Mostrar Saldo"<<endl;
        cout<<"4. Salir "<<endl;
        cin>>op;
        switch (op){
        case 1 :
            //depositar();
            break;
        case 2 :
            //retirar();
            break;
        case 3 :
            //mostrarSaldo();
            break;
        case 4:
            cout<<"Saliendo..."<<endl;
            break;
        
        default:
            cout<<"Opcion no valida. "<<endl;
            break;
        }  
    } while (op!=4);
    
}

