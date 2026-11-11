#include "Caballo.h"
#include <cmath>
using namespace  std;

Caballo::Caballo (int f,int c){
    this->f = f;
    this->c = c;
}
bool Caballo::ver(int nf,int nc){
    int i = abs(f-nf);
    int z = abs(c-nc);

    if(i == 2 && z == 1){
        return true;
    }

    if(i == 1 && z == 1){
        return true;
        }

    return false;

}





