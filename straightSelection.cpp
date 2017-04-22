#include <iostream>
using namespace std;

void straightSelection(int *a, int tam);

int main() {
    int tam = 10;
    int a [10] = {3,2,4,5,1,9,6,7,8};
    straightSelection(a, tam);

    return 0;
}
/*
    we begin when we take the first position to put the smaller number,
    after we take the second position to next smaller number, the we
    repeat the work until the final.
*/
void straightSelection(int *a, int tam){
    int i, j, smaller, aux;
    for (i = 0; i < (tam-1); i++) {
        smaller = i;
        for (j = (i+1); j < tam; j++) {
            if(a[j] < a[smaller])
            smaller = j;
        }
        if (i != smaller) {
            aux = a[i];
            a[i] = a[smaller];
            a[smaller] = aux;
        }
    }
    for (int k = 0; k < tam; k++) {
        cout << a[k] << endl;
    }

}


