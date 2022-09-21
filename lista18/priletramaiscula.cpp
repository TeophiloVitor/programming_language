#include <iostream>
#include <cctype>
using namespace std;

int main(){
    int i = 0;
    char string[60];
    cin.getline(string, 60);

    while(string[i] != '\0'){

        if(string[i] == ' ') // se identificar o espaço na proxima pos. aplica
            string[i+1] = toupper(string[i+1]);
        if(string[0] != ' ') // para o inicio da frase
            string[0] = toupper(string[0]);

    i++;
    }
    cout << string << endl;

return 0;
}
