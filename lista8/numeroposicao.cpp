#include <iostream>
#include <iomanip>
using namespace std;

int fposicao(int n, int pos){
    float calc = n, aux2=0;
    int aux = 0;
    for(int i=0; i<pos; i++){
        calc /= 10;
        aux = calc;
        cout << fixed << setprecision(2);
        aux2 = (calc - aux)*10;
    }
    return aux2;
}
int main(){
    int n, pos;
    cin >> n >> pos;

    cout << fposicao(n,pos) <<endl;

return 0;
}
