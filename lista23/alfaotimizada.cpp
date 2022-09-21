#include <iostream>
#include <cstring>
using namespace std;

void ordena(char ordem[]){
    char aux;
    int str = strlen(ordem);

    for(int i = 1; i < str; i++){ //coloca as vogais antes das consoantes pelo seu número na tabela ASCII
        for(int j = 0; j < i; j++){
            if(ordem[i] == 'a' || ordem[i] == 'e' || ordem[i] == 'i' || ordem[i] == 'o' || ordem[i] == 'u'){
                aux = ordem[i];
                ordem[i] = ordem[j];
                ordem[j] = aux;
            }
        }
    }
    cout << ordem << endl;
    for(int i = 0; i < str; i++){ //ordena a partit de seu número na tabela ASCII
        for(int j = 0; j < i; j++){
            if(ordem[i+1] == 'a' || ordem[i+1] == 'e' || ordem[i+1] == 'i' || ordem[i+1] == 'o' || ordem[i+1] == 'u'){
                if(ordem[i] < ordem[j]){
                    aux = ordem[i];
                    ordem[i] = ordem[j];
                    ordem[j] = aux;
                }
            }else if(ordem[i] != 'a' && ordem[i] != 'e' && ordem[i] != 'i' && ordem[i] != 'o' && ordem[i] != 'u'){
                if(ordem[i] < ordem[j]){
                    aux = ordem[i];
                    ordem[i] = ordem[j];
                    ordem[j] = aux;
                }
            }
        }
    }
    cout << ordem << endl; // concatena as strings auxiliares com vogais e consoantes
}
int main(){
    char ordem[60];
    cin >> ordem;

    cout << ordem << endl;
    ordena(ordem); // chama a função ordena

return 0;
}
