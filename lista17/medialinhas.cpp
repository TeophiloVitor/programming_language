#include <iostream>
using namespace std;

const int MAX = 30;

void resultado(int matriz[][MAX], int n , int m){
    int cont = 0, aux[n];
    float media = 0 ;

    for(int i = 0; i < m; i++){
        media += matriz[n][i]; // for que calcula a soma das linhas;
    }
    media /= m; // para calcular a media pegamos a soma anterior e / por m

    for(int i = 0; i < m; i++){
        if(matriz[n][i] >= media){ // aqui compara se os elementos da linha s�o >= media
            aux[cont] = matriz[n][i]; // se for verdade ele armazena o elemento no vetor auxiliar
            cont++; // respons�vel pelo tamanho do vetor auxiliar nesse caso e tamb�m auxilia na impress�o

        }
    }
    cout << "[ " ; // aqui � impresso o vator da forma pedida na sa�da
    for(int i = 0; i < cont; i++){ // for que percorre o vetor auxiliar com aux�lio do cont
        if(i < (cont - 1)){ // essa condi��o � para imprimitr a v�rgula at� o �ltimo elemento
            cout << aux[i] << " , ";
        }
        else{
            cout << aux[i];
        }
    }
    cout << " ]" << endl;
}
int main(){
    int n, m;
    cin >> n >> m;
    int matriz[MAX][MAX];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> matriz[i][j];
        }
    }
    for(int i = 0; i < n; i++){ // este for percorre as linhas
        resultado(matriz , i , m); // ele foi usado para que chame uma linha de cada vez na fun��o
    }
    return 0;
}
