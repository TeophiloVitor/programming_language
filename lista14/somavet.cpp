#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int vetor[n], vetor2[n], calc[n];

	for(int i=0; i<n; i++){
		cin >> vetor[i];
	}
	for(int i=0; i<n; i++){
		cin >> vetor2[i];
	}
	cout << "[ ";
	for(int i=0; i<n; i++){
		calc[i] = vetor[i] + vetor2[i];

        if(i < (n - 1))
            cout << calc[i] << " , ";
        else
            cout << calc[i];
    }

    cout << " ]";

return 0;
}
