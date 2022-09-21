#include <iostream>
using namespace std;

int main(){
    int n, n1;
    cin >> n;
    n1 = n;
    int iden[n][n1]

    for(int i=0; i<n; i++){
        for(int j=0; j<n1; j++){
            if(i == j)
                iden[i][j] = 1;
            else
                iden[i][j] = 0;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n1; j++){
            cout << iden[i][j] << " ";
        }
        cout << endl;
    }
return 0;
}
