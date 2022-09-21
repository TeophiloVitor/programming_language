#include <iostream>
using namespace std;

int main(){
    int j=0, cont=0, cont2=0;
    char string1[30], string2[30];
    cin.getline(string1, 30);

    while(string1[cont] != '\0'){
        cont++;
    }
    cout << cont << endl;
    for(int i=cont; i>0; i--){
        string2[i-1] = string1[j];
        j++;
    }
    for(int i=0; i<cont; i++){
        if(string1[i] == string2[i])
            cont2++;
    }
    if(cont2 == cont)
        cout << string1 << " é um palíndromo";
    else
        cout << string1 << " não é um palíndromo";

return 0;
}
