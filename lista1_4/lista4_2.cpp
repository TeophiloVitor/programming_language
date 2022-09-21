#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char produto;
    float valor, calc;
    cin >> produto >> valor;

    if(produto == 'f' && valor > 500){
        calc = valor - valor*0.1;
        cout << fixed << setprecision(2);
        cout << "Preco do fogao com desconto: " << calc << endl;
    }
    else if(produto == 'f' && valor < 500){
        calc = valor - valor*0.05;
        cout << fixed << setprecision(2);
        cout << "Preco do fogao com desconto: " << calc << endl;
    }
    else if(produto == 'g' && valor > 2000){
        calc = valor - valor*0.3;
        cout << fixed << setprecision(2);
        cout << "Preco da geladeira com desconto: " << calc << endl;
    }
    else if(produto == 'g' && 1000 <= valor <= 2000){
        calc= valor - valor*0.2;
        cout << fixed << setprecision(2);
        cout << "Preco da geladeira com desconto: " << calc << endl;
    }
    else if(produto == 'g' && valor < 1000){
        calc = valor - valor*0.1;
        cout << fixed << setprecision(2);
        cout << "Preco da geladeira com desconto: " << calc << endl;
    }
    else if(produto != 'f'||'g'){
        cout << "Codigo Invalido" << endl;
    }
return 0;
}
