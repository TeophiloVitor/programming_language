#include <iostream>
using namespace std;

void decrescente(int vetord[], int d){
    int aux=0;
    for(int i = 1; i < d; i++){
        for(int j = 0; j < i; j++){
            if(vetord[i] > vetord[j]){
                aux = vetord[i];
                vetord[i] = vetord[j];
                vetord[j] = aux;
            }
        }
    }
    cout << "[ " ;
    for(int l = 0; l < d; l++){
        if(l < (d - 1)){
            cout << vetord[l] << " , ";
        }
        else{
            cout << vetord[l];
        }
    }
    cout << " ]" << endl;
}
int main(){
    int d;
    cin >> d;
    int vetord[d];

    for(int i = 0; i < d; i++){
        cin >> vetord[i];
    }
    cout << "[ " ;
    for(int l = 0; l < d; l++){
        if(l < (d - 1)){
            cout << vetord[l] << " , ";
        }
        else{
            cout << vetord[l];
        }
    }
    cout << " ]" << endl;

    decrescente(vetord, d);

return 0;
}
