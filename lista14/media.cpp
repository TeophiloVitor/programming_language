#include <iostream>
using namespace std;

int main(){
    int n, cont = 0;
    cin >> n;
    float vetor[n], media = 0;

    for(int i=0; i<n; i++){
        cin >> vetor[i];
        media += vetor[i];
    }
    media /= n;
    cout << "Media: " << media << endl;

    for(int i=0; i<n; i++){
        if(vetor[i] > media)
            cont++;
    }
    cout << "Valores acima da media: " << cont << endl;

return 0;
}

