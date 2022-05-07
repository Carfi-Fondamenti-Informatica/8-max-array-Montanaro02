#include <iostream>
#include "lib.h"
using namespace std;

int main(){
    int dim;
    cin >> dim;
    float insieme[dim];
    for(int i=0; i<dim; i++){
        cin >> insieme[i];
    }
    cout<<maggiore(insieme, dim);
    return 0;
}
