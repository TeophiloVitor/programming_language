#include <iostream>
using namespace std;

void junta(int v1[], int v2[], int v3[], int d){
    int aux=0, aux2=0, w=0, x=0, tam = 2*d;

    for(int i = 1; i < d; i++){ // ordena v1 de forma crescente
        for(int j = 0; j < i; j++){
            if(v1[i] < v1[j]){
                aux = v1[i];
                v1[i] = v1[j];
                v1[j] = aux;
            }
        }
    }
    for(int k = 1; k < d; k++){ // ordenda v2 de forma decrescente
        for(int l = 0; l < k; l++){
            if(v2[k] > v2[l]){
                aux2 = v2[k];
                v2[k] = v2[l];
                v2[l] = aux2;
            }
        }
    }
    for(int t = 0; t < tam; t++){
        if(t%2 == 0){ // aloca os elementos de v1 nas pos pares
            v3[t] = v1[w];
            w++;
        }
        else{ // aloca os elemantos de v2 nas pos ímpar
            v3[t] = v2[x];
            x++;
        }
    }
}
int main(){
    int d;
    cin >> d;
    int tam = 2*d;
    int v1[d], v2[d], v3[tam];

    for(int i = 0; i < d; i++){
        cin >> v1[i];
    }
    for(int j = 0; j < d; j++){
        cin >> v2[j];
    }
    cout << "[ " ;
    for(int l = 0; l < d; l++){ // impressão do primeiro vetor
        if(l < (d - 1)){
            cout << v1[l] << " , ";
        }
        else{
            cout << v1[l];
        }
    }
    cout << " ]" << endl;
    cout << "+" << endl;
    cout << "[ " ;
    for(int k = 0; k < d; k++){ // impressão do segundo vetor
        if(k < (d - 1)){
            cout << v2[k] << " , ";
        }
        else{
            cout << v2[k];
        }
    }
    cout << " ]" << endl;
    cout << "=" << endl;

    junta(v1, v2, v3, d); // chama a função junta

    cout << "[ " ;
    for(int q = 0; q < tam; q++){ // imprime o vetor final retornado da função
        if(q < (tam - 1)){
            cout << v3[q] << " , ";
        }
        else{
            cout << v3[q];
        }
    }
    cout << " ]" << endl;

return 0;
}

