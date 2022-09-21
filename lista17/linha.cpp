#include <iostream>
using namespace std;

const int MAX = 30;

bool compara(int matriz[][MAX], int n, int m){
    int aux[MAX], cont = 0, repetidos = 0;
    bool resp = false;

    for(int i = 0; i < n; i++){ //esse for engloba os outros pois compara o vetor aux com toda a matriz
        for(int j = 0; j < n; j++){
            aux[j] = matriz[i][j]; //aqui usa um vetor aux para guardar uma linha da matriz
        }
        // os pr�ximos for fazem agora a compara��o do vetor aux com as linhas da matriz
        repetidos = 0;
        for(int l = 0; l < n; l++){
            cont = 0;
            for(int k = 0; k < m; k++){
                if(aux[k] == matriz[l][k]){ //aqui faz a compara��o do aux com a matriz posi��o a posi��o
                    cont++;
                }
                if(cont == m) // se o contador for igual a m temos que a linha � igual
                    repetidos++;
            }
            if(repetidos > 1)//aqui a condi��o � >1 pois a matriz pode ter n linhas repetidas no seu decurso
                resp = true;
        }
    }
    return resp; // retorno a fun��o main
}
int main () {
    int n, m;
    int matriz[MAX][MAX];
    cin >> n >> m;

    for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> matriz[i][j];
		}
	}
	for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    if(compara(matriz, n, m) == true) // chama a fun��o compara
        cout << "A matriz tem linhas repetidas";
    else
        cout << "A matriz n�o tem linhas repetidas";

return 0;
}
