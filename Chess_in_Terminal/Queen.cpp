#include "Queen.h"

#include "cmath"
Queen::Queen(int f,int c){
    this->f = f;
    this->c = c;
}

bool Queen::ver(int nf,int nc){

    if(f == nf && c != nc){
        return true;
    }

    if(f != nf && c == nc){
        return true;
    }

    if(abs(nf - f) == abs(nc - c) && nf != f){
        return true;
    }

    return false;
}