#include <iostream>
#include <cctype>
#include <limits>
#include "Caballo.h"
#include "Torre.h"
#include "Alfil.h""
using namespace std;
void inicializar();
void jugar();
void print();
bool team();

const int t = 8;
const char libre ='*';
char tablero[t][t];

int main(){
    int op =0;
    bool cambio = true;
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
        Torre t (fil,col);

        if(!t.ver(nfil,ncol)){
            cout<<"Movimiento Invalido"<<endl;
        }else{
            tablero[nfil][ncol] = 't';
            tablero[fil][col] = libre;
        }
        break;
    }
    case 'a':
        case 'A':{

            Alfil a (fil,col);

            if(!a.ver(nfil,ncol)){
                cout<<"Movimiento Invalido"<<endl;
            }else{
                tablero[nfil][ncol] = 'a';
                tablero[fil][col] = libre;
            }
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
    tablero[7][0] ='t';
    tablero[7][1] ='c';
    tablero[7][2] ='a';
    tablero[7][3] ='q';
    tablero[7][4] ='k';
    tablero[7][5] ='a';
    tablero[7][6] ='c';
    tablero[7][7] ='t';



}

bool team(int fil,int col){
    char x = tablero[fil][col];
    if (isupper(x)){
        // TRUE = BLANCO
        return true;
    }
    else {
        // FALSE = NEGRO
        return false;
    }
    return false;
}


void print() {
    cout << "   ";

    for (int y = 0; y < t; y++) {
        cout << " " << y;
    }
    cout << "\n";

    for (int x = 0; x < t; x++) {
        cout << x << " |";

        for (int y = 0; y < t; y++) {
            cout << " " << tablero[x][y];
        }

        cout << " |\n";
    }
}


