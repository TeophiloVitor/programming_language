#include <iostream>
#include <cstring>
using namespace std;

bool palindromo(char dig[], int str, int cont){
    if(dig[str-1] == dig[cont]){ // compara a última com a primeira, pénultima com a segunda...
        str--; // diminui str para comparação
        cont++; // aumenta cont para comparação
        if(cont < str)
            return palindromo(dig, str, cont); // enquanto não forem feitas as comparações necessárias
        else
            return true; // se as posições comparadas forem todas iguais
    }
    else // caso alguma letra não seja igual já retorna falso
        return false;
}
int main(){
    int str = 0, cont = 0; // o parâmetro cont representa o primeiro índice da string
    char dig[36];
    cin >> dig;

    str = strlen(dig); // lê o tamanho da string, último índice da string

    if(palindromo(dig, str, cont) == true) // chama a função
        cout << dig << " é palíndromo"<< endl;
    else
        cout << dig << " não é palíndromo"<< endl;

return 0;
}
