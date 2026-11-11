#include <iostream>

#include <limits>
#include "Caballo.h"

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

    bool enjuego = true;
    do{

    int ncol =0;
    int nfil =0;
    int col = 0;
    int fil = 0;

    print();
    cout<<"\n";
    cout<<"Elija que pieza desea mover :(Fila | Columna):";
    cin>>fil >>col;

    while(cin.fail() ){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout<<"Elija que pieza desea mover (Fila | Columna)\n";
        cin>>fil >>col;
    }
    cout<<"A que Pocision va mover esta pieza :(Fila | Columna):";
    cin>>nfil >>ncol;

    while(cin.fail()){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout<<"A que Pocision va mover esta pieza :(Fila | Columna):";
        cin>>nfil >>ncol;

    }



    switch(tablero[fil][col]){
    case 'C':
        case'c':{
            Caballo c (fil,col);

        if(!c.ver(nfil,ncol)){
                cout<<"Movimiento Invalido"<<endl;
        }else{
            tablero[nfil][ncol] = 'c';
            tablero[fil][col] = libre;
        }
        break;
        }
    case 'T':
        case 't':{
        break;
    }
    case 'a':
        case 'A':{
        break;
    }
    case 'R':
        case 'r':{
        break;
    }
    case 'Q' :
         case 'q':{
        break;
    }
    case 'P':
        case 'p':{
        break;
    }

    }

    }while (enjuego);

}
void inicializar(){
    for (int x = 0; x < t; x++) {

        for (int  y = 0; y < t; y++) {
            tablero[x][y] = libre;

        }
    }
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

