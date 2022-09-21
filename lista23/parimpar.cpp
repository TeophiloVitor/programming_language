#include <iostream>
using namespace std;

void parimpar(int vet1[], int d){
    int aux=0, aux2=0;

    cout << "[ " ;
    for(int l = 0; l < d; l++){ // impressão do vetor como entra no programa
        if(l < (d - 1)){
            cout << vet1[l] << " , ";
        }
        else{
            cout << vet1[l];
        }
    }
    cout << " ]" << endl;
    for(int k = 1; k < d; k+=2){ // ordenda vet1 de forma decrescente para o ímpar
        for(int l = 1; l < d; l+=2){ // nesse for começamos em 1, ímpar
            if(vet1[k] > vet1[l]){ // o contador é de 2 em 2 para pegar só índice ímpar
                aux2 = vet1[k];
                vet1[k] = vet1[l];
                vet1[l] = aux2;
            }
        }
    } // os for começam diferentes justamente para um preencher par e outro ímpar
    for(int i = 0; i < d; i+=2){ // ordena vet1 de forma crescente para o par
        for(int j = 0; j < d; j+=2){ // nesse for em 0, par
            if(vet1[i] < vet1[j]){ // o contador é de 2 em 2 para pegar só índice par
                aux = vet1[i];
                vet1[i] = vet1[j];
                vet1[j] = aux;
            }
        }
    }
    cout << "[ " ;
    for(int q = 0; q < d; q++){ //imprime o vetor final a partir da modificação feita pelos for
        if(q < (d - 1)){
            cout << vet1[q] << " , ";
        }
        else{
            cout << vet1[q];
        }
    }
    cout << " ]" << endl;
}
int main(){
    int d;
    cin >> d;
    int vet1[d];

    for(int i = 0; i < d; i++){
        cin >> vet1[i];
    }

    parimpar(vet1, d); // chama a função parimpar

return 0;
}
