#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

bool palindromo(char string1[]){
    int j=0, cont2=0;
    char string2[150]; // cria a strin2 de compara��o

    int tam = strlen(string1); // computa o tamanho

    for(int j=0; j<tam; j++){ // c�digo respons�vel por concatenar a string
        if(string1[j] == ' ') // para o caso particular do espa�o
            for(int k=j; k<tam; k++)
                string1[k] = string1[k+1];
    }
    for(int j=0; j<tam; j++){ // c�digo respons�vel por concatenar a string
        if(string1[j] == '.') // para o ponto
            for(int k=j; k<tam; k++)
                string1[k] = string1[k+1];
    }
    for(int j=0; j<tam; j++){ // c�digo respons�vel por concatenar a string
        if(string1[j] == ',') // para a v�rgula
            for(int k=j; k<tam; k++)
                string1[k] = string1[k+1];
    }
    for(int j=0; j<tam; j++){ // c�digo respons�vel por concatenar a string
        if(string1[j] == ' ') // espa�o
            for(int k=j; k<tam; k++)
                string1[k] = string1[k+1];
    }
    int cont1 = strlen(string1); // computa o tamanho ap�s a concatena��o

    for(int i=cont1; i>0; i--){ // colaca em string2 a string1 invertida
        string2[i-1] = string1[j];
        j++;
    }
    for(int i=0; i<cont1; i++){
        if(tolower(string1[i]) == tolower(string2[i])) // realiza a compara��o
            cont2++;
    }
    cout << string1 << endl;
    cout << string2 << endl;
    if(cont2 == cont1) // condi��o final
        return true;
    else
        return false;
}
int main(){
    char string1[150];
    cin.getline(string1, 150);
    char stringaux[150];
    strcpy(stringaux, string1); // usada no cout

    if(palindromo(string1) == true)
        cout << '"' << stringaux << '"' << " � um pal�ndromo";
    else
        cout << '"' << stringaux << '"' << " n�o � um pal�ndromo";

return 0;
}
