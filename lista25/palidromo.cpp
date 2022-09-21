#include <iostream>
#include <cstring>
using namespace std;

bool palindromo(char dig[], int str, int cont){
    if(dig[str-1] == dig[cont]){ // compara a �ltima com a primeira, p�nultima com a segunda...
        str--; // diminui str para compara��o
        cont++; // aumenta cont para compara��o
        if(cont < str)
            return palindromo(dig, str, cont); // enquanto n�o forem feitas as compara��es necess�rias
        else
            return true; // se as posi��es comparadas forem todas iguais
    }
    else // caso alguma letra n�o seja igual j� retorna falso
        return false;
}
int main(){
    int str = 0, cont = 0; // o par�metro cont representa o primeiro �ndice da string
    char dig[36];
    cin >> dig;

    str = strlen(dig); // l� o tamanho da string, �ltimo �ndice da string

    if(palindromo(dig, str, cont) == true) // chama a fun��o
        cout << dig << " � pal�ndromo"<< endl;
    else
        cout << dig << " n�o � pal�ndromo"<< endl;

return 0;
}
