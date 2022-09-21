#include <iostream>
#include <cmath>
using namespace std;

int qdigitos(int num){
    int quanti = 0;
    if(num==0){
        quanti++;
    }else{
        while(num != 0){
            num /= 10;
            quanti ++; // calcula a quantidade de digitos do numero
        }
    }return quanti;
}
void inverte(int num, int &versor, int &resp){
    int multi = (qdigitos(num) - 1) ; // usa a função auxiliar de contar digitos - 1
    int aux =  num;
    resp = 0;
    versor = 0;

    while(num >= 1){
    versor += ((num%10) * pow(10, multi));
    num /= 10;
    multi --;
    }
    if(aux < versor){
        resp = -1;
    }else if(aux == versor){
        resp = 0;
    }else if(aux > versor){
        resp = 1;
    }
}
    /*no while uso o resto da divisão por 10 do número, ela me resulta o ultimo
    dígito, então multiplico ele por 10 elevado a quantidade de digitos - 1, pois
    diminui em um digito com a divisão, com 155 por exemplo ele me retornará 500,
    então na proxima volta com while terei 15 que retornará 50 e na última volta
    terei 1 que com a potencia 10 elevado a 0 me retornará o proprio 1, então com
    a soma em versor terei 500 + 50 + 1 = 551, o numero invertido */
int main(){
    int num, versor, resp;
    cin >> num;

    inverte(num, versor, resp);
    cout << "X = " << num << endl;
    cout << "X invertido = " << versor << endl;

    if(resp == -1){
        cout << "X é menor que X invertido";
    }if(resp == 0){
        cout << "X é igual a X invertido";
    }if(resp == 1){
        cout << "X é maior que X invertido";
    }
return 0;
}

