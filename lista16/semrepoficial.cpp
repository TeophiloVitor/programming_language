#include <iostream>
using namespace std;

int main(){
    int n, cont;
    bool repeticao;
    cin >> n;
    int semrep[n];

    for(int i=0; i<n; i++){
        cin >> semrep[i];
    }
    cout << "[ ";
    for(int i=0; i<n; i++){
        repeticao = false;
		for(int j=0; j<i; j++){
			if(semrep[i] == semrep[j])
				repeticao = true;
		}
		if(repeticao == false){
		    if(i < n-1)
                cout << semrep[i] << " , ";
            else
                cout << semrep[i];
		}
    }
    cout << " ]";

return 0;
}
