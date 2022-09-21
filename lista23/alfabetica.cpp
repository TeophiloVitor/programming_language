#include <iostream>
#include <cstring>
using namespace std;

void ordena(char ordem[]){
    char aux, ordaux[30]={}, ordaux2[30]={};
    int str = strlen(ordem);
    int c=0, c1=0;

    for(int i = 1; i < str; i++){ //coloca as vogais antes das consoantes pelo seu número na tabela ASCII
        for(int j = 0; j < i; j++){
            if(ordem[i] == 'a' || ordem[i] == 'e' || ordem[i] == 'i' || ordem[i] == 'o' || ordem[i] == 'u'){
                aux = ordem[i];
                ordem[i] = ordem[j];
                ordem[j] = aux;
            }
        }
    }
    for(int a = 0 ; a < str; a++){
        if(ordem[a] == 'a' || ordem[a] == 'e' || ordem[a] == 'i' || ordem[a] == 'o' || ordem[a] == 'u'){
            ordaux[c] = ordem[a]; // se for vogal entre na string aux
            c++;
        }else{
            ordaux2[c1] = ordem[a]; // se for consoante entra na string aux2
            c1++;
        }
    }
    for(int i = 1; i < c; i++){ //ordena as vogais na ordem alfabética a pelo seu número na tabela ASCII
        for(int j = 0; j < i; j++){
            if(ordaux[i] < ordaux[j]){
                aux = ordaux[i];
                ordaux[i] = ordaux[j];
                ordaux[j] = aux;
            }
        }
    }
    for(int k = 1; k < c1; k++){ //ordena as consoantes na ordem alfabética a pelo seu número na tabela ASCII
        for(int l = 0; l < k; l++){
            if(ordaux2[k] < ordaux2[l]){
                aux = ordaux2[k];
                ordaux2[k] = ordaux2[l];
                ordaux2[l] = aux;
            }
        }
    }
    cout << strcat(ordaux, ordaux2) << endl; // concatena as strings auxiliares com vogais e consoantes
}
int main(){
    char ordem[60];
    cin >> ordem;

    cout << ordem << endl;
    ordena(ordem); // chama a função ordena

return 0;
}
