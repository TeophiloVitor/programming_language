#include <iostream>
using namespace std;

int mdc(int x, int y){
    int calc = 0; // pela recurs�o calc ser� = 0 sempre no novo chamado a fun��o, por�m como ela s� depende de x e y, n�o deve armazenar valores
    if(y == 0){ // caso base
        return x;
    }
    else{ // uso do algortimo de euclides, onde realizado o calc o x = y e o y = calc, ent�o operamos y pelo calc at� chegar ao resultado do MDC
        calc = x%y;
        x = y;
        y = calc;
        return mdc(x, y); // novo chamado a fun��o
    }
}
int main(){
    int x, y;
    cin>> x >> y;

    cout << "MDC(" << x << " , " << y << ") = " << mdc(x, y) <<endl;

return 0;
}
