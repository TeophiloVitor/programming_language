#include <iostream>
using namespace std;
bool pali(char *str , int tam , int i){
    if(str[i] == str[tam - 1 ]){
        i++;
        tam--;
        if(i < (tam - 1 )){
            return pali( str , tam , i);
        }
        else{
            return true;
        }
    }
    else{
        return false;
    }
}
int main(){
    int i , tam = 0 , j = 0 ;
    char palavra[30] = {};
    cin.getline(palavra , 30);
    for(i = 0 ; palavra[i] != '\0' ; i++){
        tam++;
    }
    if(pali(palavra , tam , i )){
        cout << palavra << " é palíndromo";
    }
    else{
        cout << palavra << " não é palíndromo";
    }
    return 0;
}
