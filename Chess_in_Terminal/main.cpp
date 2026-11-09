#include <iostream>
#include <vector>
#include <limits>

using namespace std;
void inicializar();
void jugar();
void print();

const int t = 8;
const char libre ='*';
char tablero[t][t];

int main(){
    int op =0;
    do {
    cout<< string(4,'-')<<"CHESS IN TERMINAL 2.0"<< string(4,'-')<<"\n";
    cout<<"1. Jugar\n";
    cout<<"2. Salir\n";
    cin>>op;
    while(cin.fail()){
            cin.clear();

            cin.ignore(numeric_limits<streamsize>::max(),'\n');

            cout<<"\n";
            cout<<"Opcion no Valida"<<endl;
            cout<< string(4,'-')<<"CHESS IN TERMINAL 2.0"<< string(4,'-')<<"\n";
            cout<<"1. Jugar\n";
            cout<<"2. Salir\n";
            cin>>op;

    }

    switch (op){
    case 1:{
        inicializar();
        jugar();
        break;
    }

    }
    }while(op != 2);


}
void jugar(){

    print();

}
void inicializar(){
//BLANCAS
    tablero[0][0] ='T';
    tablero[0][1] ='C';
    tablero[0][2] ='A';
    tablero[0][3] ='Q';
    tablero[0][4] ='K';
    tablero[0][5] ='A';
    tablero[0][6] ='C';
    tablero[0][7] ='T';

// NEGRAS
    tablero[7][0] ='T';
    tablero[7][1] ='C';
    tablero[7][2] ='A';
    tablero[7][3] ='Q';
    tablero[7][4] ='K';
    tablero[7][5] ='A';
    tablero[7][6] ='C';
    tablero[7][7] ='T';



}

void print(){
    for (int x = 0; x < t; x++) {
        cout<<"\n";
        for (int  y = 0; y < t; y++) {
            cout<<tablero[x][y];

        }
    }
}

