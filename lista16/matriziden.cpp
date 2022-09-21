#include <iostream>
using namespace std;

const int MAX = 30;

void identidade(int iden[][MAX], int n, int n1){
    for(int i=0; i<n; i++){
        for(int j=0; j<n1; j++){
            if(i == j)
                iden[i][j] = 1;
            else
                iden[i][j] = 0;
        }
    }
}
int main(){
    int n, n1;
    cin >> n;
    n1 = n;
    int iden[n][n1] = {};

    identidade(iden, n, n1);

return 0;
}
