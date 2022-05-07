
#include "lib.h"

float maggiore (float insieme [], int dim){
    float maggiore=insieme[0];
    for (int i=1; i<dim;i++){
        if (maggiore<insieme [i]) {
            maggiore=insieme [i];
        }
    } return maggiore;
}
