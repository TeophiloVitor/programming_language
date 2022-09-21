#include <iostream>
using namespace std;

int potencia(int x, int y){
    if(x == 0 && y != 0)
        return 0;
    else if(x != 0 && y == 0)
        return 1;
    else
        return x * potencia(x,y-1);
}
int main(){
    int x, y;
    cin >> x >> y;

    cout << "pow( " << x << " , " << y << " ) = " << potencia(x, y) << endl;

return 0;
}
