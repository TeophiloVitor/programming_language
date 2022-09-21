#include <iostream>
#include <cmath>

using namespace std;

struct Numcomplex{
    int real;
    int imagi;

    void exibe(){ // função que exibe o número complexo
        int aux = imagi; // para evitar que as operações não alterem o número complexo na struct
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
    int aux = entrada[i].imagi; // para evitar que as operações não alterem o número complexo na struct
    aux *= -1; // realiza "a troca" de sinal da parte imaginária

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
    int aux = entrada[i].real; // para evitar que as operações não alterem o número complexo na struct
    int aux2 = entrada[i].imagi;

    calc = sqrt(pow(aux,2) + pow(aux2,2)); // calculo do módulo
    cout << "módulo = " << calc << endl;
}
bool compara(struct Numcomplex entrada[]){
    int i = 0, cont = 0;
    if(entrada[i].real == entrada[i+1].real) // compara a parte real
        cont++;
    if(entrada[i].imagi == entrada[i+1].imagi) // compara a parte imaginária
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
        soma2 += entrada[i].imagi; // soma da parte imaginária
    }
    if(soma2 >= 0){ // caso positivo
        cout << endl;
        cout << "a soma dos complexos é " << soma << " + " << soma2 << "i" << endl;
    }else{ // caso negativo
        soma2 *= -1;
        cout << endl;
        cout << "a soma dos complexos é " << soma << " - " << soma2 << "i" << endl;
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
