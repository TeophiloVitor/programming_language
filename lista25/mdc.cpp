#include <iostream>
using namespace std;

int mdc(int x, int y){
    int calc = 0; // pela recursão calc será = 0 sempre no novo chamado a função, porém como ela só depende de x e y, não deve armazenar valores
    if(y == 0){ // caso base
        return x;
    }
    else{ // uso do algortimo de euclides, onde realizado o calc o x = y e o y = calc, então operamos y pelo calc até chegar ao resultado do MDC
        calc = x%y;
        x = y;
        y = calc;
        return mdc(x, y); // novo chamado a função
    }
}
int main(){
    int x, y;
    cin>> x >> y;

    cout << "MDC(" << x << " , " << y << ") = " << mdc(x, y) <<endl;

return 0;
}
