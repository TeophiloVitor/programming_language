#include <iostream>
using namespace std;

int seque(int num){
    if(num == 1) // caso num 1
        return 2;

    else if(num == 2) // caso num 2
        return 3;

    else if(num > 2) // caso num > 2
        return (2 * seque(num-2)) + seque(num-1);
}
/*aqui a l�gica da recurs�o foi ver como funcionava a express�o,
assim vi que o an precisa do an - 2 e an - 1, que foram os anteriores
a ele, assim usamos a recurs�o para calcular eles e chamar para o
c�lculo do an pedido */
int main(){
    int num;
    cin >> num;

    cout << "a" << num << " = " << seque(num) << endl;

return 0;
}
