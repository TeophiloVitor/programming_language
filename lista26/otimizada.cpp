#include <iostream>
#include <cmath>

using namespace std;

struct Numcomplex{
    int real;
    int imagi;

    void exibe(){ // fun��o que exibe o n�mero complexo
        if(imagi < 0) // caso negativo
            cout << real << " - " << imagi*(-1) << "i";
        else // caso positivo
            cout << real << " + " << imagi << "i";
    }
};
void conjugado(struct Numcomplex entrada[]){
    int i = 0;
    if(entrada[i].imagi > 0){ // caso positivo realiza a troca de sinal, opera��o conjugado
        cout << "conjugado = " << entrada[i].real << " - " << entrada[i].imagi << "i" << endl;
    }else{ // caso negativo realizada a troca de sinal, opera��o conjugado
        cout << "conjugado = " << entrada[i].real << " + " << entrada[i].imagi*(-1) << "i" << endl;
    }
}
void modulo(struct Numcomplex entrada[]){
    int i = 0;
    double calc = 0; // vari�vel do calculo

    calc = sqrt(pow(entrada[i].real,2) + pow(entrada[i].imagi,2)); // calculo do m�dulo
    cout << "m�dulo = " << calc << endl;
}
bool compara(struct Numcomplex entrada[]){
    int i = 0, cont = 0;
    if(entrada[i].real == entrada[i+1].real) // compara a parte real
        cont++;
    if(entrada[i].imagi == entrada[i+1].imagi) // compara a parte imagin�ria
        cont++;

    if(cont == 2)
        return true; // resposta da fun��o
    else
        return false; // resposta da fun��o
}
void soma(struct Numcomplex entrada[], int n){
    int soma = 0, soma2 = 0;
    for(int i=0; i<n; i++){
        soma += entrada[i].real; // soma da parte real
        soma2 += entrada[i].imagi; // soma da parte imagin�ria
    }
    if(soma2 >= 0){ // caso positivo, >= pois o 0 recebe sinal positvo
        cout << endl;
        cout << "a soma dos complexos � " << soma << " + " << soma2 << "i" << endl;
    }else{ // caso negativo
        cout << endl;
        cout << "a soma dos complexos � " << soma << " - " << soma2*(-1) << "i" << endl;
    }
}
int main(){
    int n;
    cin >> n;
    Numcomplex entrada[n];

    for(int i = 0; i < n; i++){
        cin >> entrada[i].real;
        cin >> entrada[i].imagi;
    }
    for(int j = 0; j < n; j++){
        entrada[j].exibe(); // fun��o para exibir os n�meros complexos
        cout << endl;
    }
    conjugado(entrada); // fun��o que calcula o conjugado
    modulo(entrada); // fun��o que calcula o m�dulo
    entrada[0].exibe();
    if(compara(entrada) == true){; // fun��o que realiza a compara��o dos complexos
        cout << " � igual a ";
    }else{
        cout << " n�o � igual a ";
    }
    entrada[1].exibe();
    soma(entrada, n); // fun��o que faz a soma dos complexos

return 0;
}
