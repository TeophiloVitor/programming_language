#include <iostream>
#include <climits>
#include <iomanip>
using namespace std;

int main(){
    int n, m, maior, menor;
    float media = 0;
    cin >> n >> m;
    int matriz[n][m];
    maior = INT_MIN;
    menor = INT_MAX;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> matriz[i][j];
            media += matriz[i][j];
        }
    }
    media /= (n*m);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){

            if(matriz[i][j] > maior)
                maior = matriz[i][j];

            if(matriz[i][j] < menor)
                menor = matriz[i][j];
        }
    }
    cout << fixed << setprecision(2);
    cout << "Menor valor: " << menor << endl;
    cout << "Maior valor: " << maior << endl;
    cout << "Média dos valores: " << media << endl;

return 0;
}
