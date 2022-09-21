#include <iostream>
#include <cctype>
using namespace std;

int main(){
    int i = 0;
    bool resp = true;
    char string[25];
    cin.getline(string, 25);

    while(string[i] != '\0'){

        if(isalpha(string[i]))
            resp = false;
        if(i > 0 && ispunct(string[i]))
            resp = false;
    i++;
    }
    if(resp == true)
        cout << string << " representa um número";
    else
        cout << string << " não representa um número";

return 0;
}
