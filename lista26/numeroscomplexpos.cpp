#include <iostream>
#include <cmath>

using namespace std;

struct Numcomplex{
    int real;
    int imagi;

    void exibe(){ // fun��o que exibe o n�mero complexo
        int aux = imagi; // para evitar que as opera��es n�o alterem o n�mero complexo na struct
        if(aux < 0){ // caso negativo
            aux *= -1;
            cout << real << " - " << aux << "i";
        }else{ // caso positivo
            cout << real << " + " << aux << "i";
        }
    }
};
void conjugado(struct Numcomplex entrada[]){
    int i = 0;
    int aux = entrada[i].imagi; // para evitar que as opera��es n�o alterem o n�mero complexo na struct
    aux *= -1; // realiza "a troca" de sinal da parte imagin�ria

    if(aux > 0){ // caso positivo
        cout << "conjugado = " << entrada[i].real << " + " << aux << "i" << endl;
    }else{ // caso negativo
        aux *= -1;
        cout << "conjugado = " << entrada[i].real << " - " << aux << "i" << endl;
    }
}
void modulo(struct Numcomplex entrada[]){
    int i = 0;
    double calc = 0;
    int aux = entrada[i].real; // para evitar que as opera��es n�o alterem o n�mero complexo na struct
    int aux2 = entrada[i].imagi;

    calc = sqrt(pow(aux,2) + pow(aux2,2)); // calculo do m�dulo
    cout << "m�dulo = " << calc << endl;
}
bool compara(struct Numcomplex entrada[]){
    int i = 0, cont = 0;
    if(entrada[i].real == entrada[i+1].real) // compara a parte real
        cont++;
    if(entrada[i].imagi == entrada[i+1].imagi) // compara a parte imagin�ria
        cont++;

    if(cont == 2)
        return true;
    else
        return false;
}
void soma(struct Numcomplex entrada[], int n){
    int soma = 0, soma2 = 0;
    for(int i=0; i<n; i++){
        soma += entrada[i].real; // soma da parte real
        soma2 += entrada[i].imagi; // soma da parte imagin�ria
    }
    if(soma2 >= 0){ // caso positivo
        cout << endl;
        cout << "a soma dos complexos � " << soma << " + " << soma2 << "i" << endl;
    }else{ // caso negativo
        soma2 *= -1;
        cout << endl;
        cout << "a soma dos complexos � " << soma << " - " << soma2 << "i" << endl;
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
