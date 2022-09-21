#include <iostream>
#include <cmath>

using namespace std;

struct Numcomplex{
    int real;
    int imagi;

    void exibe(){ // função que exibe o número complexo
        if(imagi < 0) // caso negativo
            cout << real << " - " << imagi*(-1) << "i";
        else // caso positivo
            cout << real << " + " << imagi << "i";
    }
};
void conjugado(struct Numcomplex entrada[]){
    int i = 0;
    if(entrada[i].imagi > 0){ // caso positivo realiza a troca de sinal, operação conjugado
        cout << "conjugado = " << entrada[i].real << " - " << entrada[i].imagi << "i" << endl;
    }else{ // caso negativo realizada a troca de sinal, operação conjugado
        cout << "conjugado = " << entrada[i].real << " + " << entrada[i].imagi*(-1) << "i" << endl;
    }
}
void modulo(struct Numcomplex entrada[]){
    int i = 0;
    double calc = 0; // variável do calculo

    calc = sqrt(pow(entrada[i].real,2) + pow(entrada[i].imagi,2)); // calculo do módulo
    cout << "módulo = " << calc << endl;
}
bool compara(struct Numcomplex entrada[]){
    int i = 0, cont = 0;
    if(entrada[i].real == entrada[i+1].real) // compara a parte real
        cont++;
    if(entrada[i].imagi == entrada[i+1].imagi) // compara a parte imaginária
        cont++;

    if(cont == 2)
        return true; // resposta da função
    else
        return false; // resposta da função
}
void soma(struct Numcomplex entrada[], int n){
    int soma = 0, soma2 = 0;
    for(int i=0; i<n; i++){
        soma += entrada[i].real; // soma da parte real
        soma2 += entrada[i].imagi; // soma da parte imaginária
    }
    if(soma2 >= 0){ // caso positivo, >= pois o 0 recebe sinal positvo
        cout << endl;
        cout << "a soma dos complexos é " << soma << " + " << soma2 << "i" << endl;
    }else{ // caso negativo
        cout << endl;
        cout << "a soma dos complexos é " << soma << " - " << soma2*(-1) << "i" << endl;
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
        entrada[j].exibe(); // função para exibir os números complexos
        cout << endl;
    }
    conjugado(entrada); // função que calcula o conjugado
    modulo(entrada); // função que calcula o módulo
    entrada[0].exibe();
    if(compara(entrada) == true){; // função que realiza a comparação dos complexos
        cout << " é igual a ";
    }else{
        cout << " não é igual a ";
    }
    entrada[1].exibe();
    soma(entrada, n); // função que faz a soma dos complexos

return 0;
}
