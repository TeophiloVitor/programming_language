#include <iostream>
#include <iomanip>
using namespace std;

void notasmed(double notas[], int n, int k){
    double media = 0, aux = 0;

    for(int i = 1; i < n; i++){ // ordena notas de forma decrescente
        for(int j = 0; j < i; j++){
            if(notas[i] > notas[j]){
                aux = notas[i];
                notas[i] = notas[j];
                notas[j] = aux;
            }
        }
    }
    for(int l = 0; l < k; l++){ // soma as notas at� k
        media += notas[l];
    }
    media /= k; // calculo da media

    cout << fixed << setprecision(2);
    cout << "M�dia = " << media << endl; // retorno
}
int main(){
    int k, n;
    cin >> k >> n;
    double notas[n];

    for(int i = 0; i < n; i++){
        cin >> notas[i];
    }

    cout << fixed << setprecision(2);
    cout << "[ " ;
    for(int j = 0; j < n; j++){ // impress�o do vetor entrada
        if(j < (n - 1)){
            cout << notas[j] << " , ";
        }
        else{
            cout << notas[j];
        }
    }
    cout << " ]" << endl;

    notasmed(notas, n, k); // chama a fun��o notasmed

return 0;
}
