#include <iostream>
using namespace std;

int main(){
	int n, cont = 0;
	cin >> n;
	int vetor[n];

	for(int i=0; i<n; i++){
		cin >> vetor[i];
	}
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(vetor[i] == vetor[j])
				cont++;
		}
	}
	if(cont != 0)
		cout << "Existem elementos repetidos" << endl;
	else
		cout << "Não existem elementos repetidos" << endl;

return 0;
}
