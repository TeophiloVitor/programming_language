#include <iostream>
using namespace std;

const int MAX = 30;

bool compara(int matriz[][MAX], int n){
    bool resp = true;
    int cont=0;
    for(int i = 0 ; i < n ; i++ ){ // for's e if que dão início analisando se exite númeoro diferente de 0 ou 1
        for(int j = 0 ; j < n ; j++){
            if(matriz[i][j] != 0 && matriz[i][j] != 1){
                    resp = false; // já retorna falso se encontrar algum
            }else{ // se não existir ele entra nos próximos for
                for(int i = 0; i < n; i++){
                    cont = 0;
                    for(int j = 0; j < n; j++){
                        if(matriz[i][j] == 1){ // analisa a linha
                            cont++; // conta quantas vezes houve repetição do 1
                        }
                    }
                    if(cont > 1 || cont ==0) // foi necessário o caso ==0 para quando tem linha ou coluna de zeros
                            resp = false; // for detectado mais de 1 já retorna falso
                }
                for(int i = 0; i < n; i++){
                    cont = 0;
                    for(int j = 0; j < n; j++){
                        if(matriz[j][i] == 1){ // troca o índíce [i][j] por [j][i] assim fazendo a segunda análise
                            cont++;
                        }
                    }
                    if(cont > 1 || cont ==0) // foi necessário o caso ==0 para quando tem linha ou coluna de zeros
                            resp = false; // se contar mais de um retorna falso
                }
            }
        }
    }
    return resp; // respota final do bool
}
int main(){
    int n;
    int matriz[MAX][MAX];
    cin >> n;

    for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> matriz[i][j];
		}
	}
	for(int i = 0 ; i < n ; i++ ){
        for(int j = 0 ; j < n ; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    if(compara(matriz, n) == true) // chama a função compara
        cout << "É matriz de permutação";
    else
        cout << "Não é matriz de permutação";

return 0;
}
