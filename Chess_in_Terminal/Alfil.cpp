#include "Alfil.h"


Alfil::Alfil(int f,int c){
    this->c = c;
    this->f = f;
}
bool Alfil::ver(int nf,int nc){
    if(nf != f && nc != c){
        return true;
    }
    return false;
}