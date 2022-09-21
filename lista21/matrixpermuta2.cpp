#include <iostream>
#include <cstdlib>
using namespace std;

const int MAX = 20;

void permuta(int matriz[][MAX], int d, int n, int s){
    int i=0, j=0, lc=0, aux=0;
    srand(s);

    for(int k=0; k<n; k++){
        i = rand()%d;
        j = rand()%d;
        lc = rand()%2;

        if(lc == 0){
             for(int l=0; l<d; l++){
                aux = matriz[j][l];
                matriz[j][l] = matriz[i][l];
                matriz[i][l] = aux;
            }
            cout << "linha: " << i << " <-> " << j << endl;
        }
        else{
            for(int m=0; m<d; m++){
                aux = matriz[m][j];
                matriz[m][j] = matriz[m][i];
                matriz[m][i] = aux;
            }
            cout << "col: " << i << " <-> " << j << endl;
        }
    }
    for(int a = 0; a < d; a++){
		for(int b = 0; b < d; b++){
			cout << matriz[a][b] << " ";
		}
		cout << endl;
	}

}
int main(){
    int s, d, n;
    int matriz[MAX][MAX];
    cin >> s >> d >> n;

    for(int i = 0; i < d; i++){
		for(int j = 0; j < d; j++){
		    if(i == j)
			    matriz[i][j] = 1;
			else
			    matriz[i][j] = 0;
		}
	}
    permuta(matriz, d, n, s);

return 0;
}
