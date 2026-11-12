#include "Rey.h"
#include "cmath"
Rey::Rey(int f,int c){
    this->c = c;
    this->f = f;

}


bool Rey::ver(int nf, int nc) {
    if (abs(nf - f) <= 1 && abs(nc - c) <= 1 && (nf != f || nc != c)) {
        return true;
    }

    return false;
}
