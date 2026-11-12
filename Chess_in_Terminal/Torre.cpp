#include "Torre.h"

Torre::Torre(int f, int c){
    this->fila = f;
    this->col = c;

}

bool Torre::ver(int nf, int nc){
    if(fila == nf && col != nc){
        return true;
    }

    if(fila != nf && col == nc){

        return true;
    }



    return false;
}