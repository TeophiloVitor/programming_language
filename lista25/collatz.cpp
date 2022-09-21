#include <iostream>
using namespace std;

int collatz(int x, int cont){
    if(x == 1){
        return cont;
    }
    else if(x%2 == 0){
        x /= 2;
        cont++;
        cout << x << endl;
        collatz(x, cont);
    }
    else{
        x = (x * 3) + 1;
        cont++;
        cout << x << endl;
        collatz(x, cont);
    }
}
int main(){
    int x, cont = 0;
    cin >> x;

    cout << x << endl;
    cont = collatz(x, cont);
    cout << "Números de passos: " << cont << endl;

return 0;
}
