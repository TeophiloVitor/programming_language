#include <iostream>
#include <cstdlib>
using namespace std;

void permutacao(int vetp[], int tam, int s){
    int n=0, k=0, i=0, j=0, aux=0;
    srand(s);

    n = (1 + rand()%5);

    cout << "permutações" << endl;
    cout << "n = " << n << endl;

    while(k < n){
        i = rand()%tam;
        j = rand()%tam;

        aux = vetp[i];
        vetp[i] = vetp[j];
        vetp[j] = aux;

        cout << "pos " << i << " <-> " << j << endl;

        k++;
    }
    cout << "resultado" << endl;
    cout << "[ " ;
    for(int l = 0; l < tam; l++){
        if(l < (tam - 1)){
            cout << vetp[l] << " , ";
        }
        else{
            cout << vetp[l];
        }
    }
    cout << " ]" << endl;
}
int main(){
    int s, tam;
    cin >> s >> tam;
    int vetp[tam];

    for(int i=0; i<tam; i++){
        cin >> vetp[i];
    }

    cout << "vetor original" << endl;

    cout << "[ " ;
    for(int i = 0; i < tam; i++){
        if(i < (tam - 1)){
            cout << vetp[i] << " , ";
        }
        else{
            cout << vetp[i];
        }
    }
    cout << " ]" << endl;

    permutacao(vetp, tam, s);

return 0;
}
