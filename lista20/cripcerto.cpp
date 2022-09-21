#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

void cripto(char stringentry[], int n){
    int str = strlen(stringentry); // tamanho da string

    for(int i=0; i<str; i++){ // for que percorre a string
        if(i%2 == 0 && isalpha(stringentry[i])){ // caso seja par e uma letra do alfabeto
            if(islower(stringentry[i])){ // letra minúscula
                stringentry[i] = stringentry[i] + n; // de acordo com n dará o caracter
                if(stringentry[i] > 122) // uso da tabela ASCII, caso passe do alfabeto minúsculo para outros caracteres
                    stringentry[i] = stringentry[i] - 26; // subtrai 26 pois é o num de letras do alfabeto
            }
            else if(isupper(stringentry[i])){ // letra maiúscula
                stringentry[i] = stringentry[i] + (2*n); // de acordo com n dará o caracter
                if(stringentry[i] > 90) // uso da tabela ASCII, caso passe do alfabeto maiúscula para outros caracteres
                    stringentry[i] = stringentry[i] - 26; // subtrai 26 pois é o num de letras do alfabeto
            }
        }
        if(i%2 != 0 && isalpha(stringentry[i])){ // caso seja ímpar e uma letra do alfabeto
            if(islower(stringentry[i])){
                stringentry[i] = stringentry[i] - n;
                if(stringentry[i] < 97) // nesse caso temos uma subtração por isso <
                    stringentry[i] = stringentry[i] + 26; // aqui somamos 26 para chegar no correto
            }
            else if(isupper(stringentry[i])){
                stringentry[i] = stringentry[i] - (3*n);
                if(stringentry[i] < 65)
                    stringentry[i] = stringentry[i] + 26;
            }
        }
    }
    cout << stringentry << endl; // cout de resposta void
}
void descripto(char stringentry2[], int n){ // nessa função invertemos tudo, tanto os sinais com o ímpar e par
    int str = strlen(stringentry2);
    //aqui fazemos a lógica contrária, por já ter comentando a função de cima essa fica autoexplicada por ser reversa
    for(int j=0; j<str; j++){
        if(j%2 == 0 && isalpha(stringentry2[j])){
            if(islower(stringentry2[j])){
                stringentry2[j] = stringentry2[j] - n;
                if(stringentry2[j] < 97)
                    stringentry2[j] = stringentry2[j] + 26;
            }
            else if(isupper(stringentry2[j])){
                stringentry2[j] = stringentry2[j] - (2*n);
                if(stringentry2[j] < 65)
                    stringentry2[j] = stringentry2[j] + 26;
            }
        }
        if(j%2 != 0 && isalpha(stringentry2[j])){
            if(islower(stringentry2[j])){
                stringentry2[j] = stringentry2[j] + n;
                if(stringentry2[j] > 122)
                    stringentry2[j] = stringentry2[j] - 26;
            }
            else if(isupper(stringentry2[j])){
                stringentry2[j] = stringentry2[j] + (3*n);
                if(stringentry2[j] > 90)
                    stringentry2[j] = stringentry2[j] - 26;
            }
        }
    }
    cout << stringentry2 << endl;
}
int main(){
    int n;
    char stringentry[121], stringentry2[121];
    cin >> n;
    cin.ignore();
    cin.getline(stringentry, 121);
    cin.getline(stringentry2, 121);

    cout << stringentry << " => " << endl;
    cripto(stringentry, n);
    cout << stringentry2 << " => " << endl;
    descripto(stringentry2, n);

return 0;
}
