#include <iostream>
using namespace std;

int mult(int x, int y){
    if(x == 0 || y == 0)
        return 0;
    else
        return x + mult(x, y-1);
}
int main(){
    int x, y;
    cin >> x >> y;

    cout << x << " * " << y << " = " << mult(x, y) << endl;

return 0;
}
/* a recursividade acontece pois a função
continuará a executar o chamado a função até se obter ou um dos casos
especiais ou o resultado da conta*/
