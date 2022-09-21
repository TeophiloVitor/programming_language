#include <iostream>

using namespace std;

int SD(int n){
    int soma = 0;
    for(int i=1; i<=(n/2); i++){
        if(n%i==0){
            soma+=i;
        }
    }
    return soma;
}

bool amigos(int n1, int n2){
    if(SD(n2)== n1 && SD(n1)==n2){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n;
    cin >> n;
    for(int i=2; i<=n; i+=2){
            int j;
            j=SD(i);
            if(amigos(i,j)==true){
                cout << i << " amigo de " << j << endl;
            }
        }
    return 0;
}

