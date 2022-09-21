#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

bool palindromo(char string1[]){
    int j=0, cont2=0;
    char string2[150]; // cria a strin2 de comparação

    int tam = strlen(string1); // computa o tamanho

    for(int j=0; j<tam; j++){ // código responsável por concatenar a string
        if(string1[j] == ' ') // para o caso particular do espaço
            for(int k=j; k<tam; k++)
                string1[k] = string1[k+1];
    }
    for(int j=0; j<tam; j++){ // código responsável por concatenar a string
        if(string1[j] == '.') // para o ponto
            for(int k=j; k<tam; k++)
                string1[k] = string1[k+1];
    }
    for(int j=0; j<tam; j++){ // código responsável por concatenar a string
        if(string1[j] == ',') // para a vírgula
            for(int k=j; k<tam; k++)
                string1[k] = string1[k+1];
    }
    for(int j=0; j<tam; j++){ // código responsável por concatenar a string
        if(string1[j] == ' ') // espaço
            for(int k=j; k<tam; k++)
                string1[k] = string1[k+1];
    }
    int cont1 = strlen(string1); // computa o tamanho após a concatenação

    for(int i=cont1; i>0; i--){ // colaca em string2 a string1 invertida
        string2[i-1] = string1[j];
        j++;
    }
    for(int i=0; i<cont1; i++){
        if(tolower(string1[i]) == tolower(string2[i])) // realiza a comparação
            cont2++;
    }
    cout << string1 << endl;
    cout << string2 << endl;
    if(cont2 == cont1) // condição final
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
        cout << '"' << stringaux << '"' << " é um palíndromo";
    else
        cout << '"' << stringaux << '"' << " não é um palíndromo";

return 0;
}
