#include <iostream>
using namespace std;

void identifica(int num, int &p, int&u){
    p = 0;
    u = 0;
    if(num == 0){ // caso o número seja 0, então no entra no while
        p = num;
        u = num;
    }else{
        u = num % 10; // calculo do último digito
        while(num != 0){
            p = num; // calcula o primeiro dígito pela ultima volta do while
            num /= 10;
        }
    }
}
int main(){
    int num, p, u;
    cin >> num;

    identifica(num, p, u);
    cout << "primeiro=" << p << " ultimo=" << u;

return 0;
}


