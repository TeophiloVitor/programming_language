#include <iostream>
#include <cstring>
using namespace std;

void embaralha(char stringx[], char stringy[]){
    int i=0, j=0;
    char stringz[50] = {};
    int strt = strlen(stringx) + strlen(stringy);

    for(int v=0; v<strt; v++){
        if(v%2 == 0 && i < strlen(stringx)){
            stringz[v] = stringx[i];
            i++;
        }
        else if(j >= strlen(stringy)){
            stringz[v] = stringx[i];
            i++;
        }
        else{
            stringz[v] = stringy[j];
            j++;
        }
    }
    cout << stringz << endl;
}
int main(){
    char stringx[50], stringy[50];
    cin.getline(stringx, 50);
    cin.getline(stringy, 50);

    cout << stringx << " + " << stringy << " = ";
    embaralha(stringx, stringy);

return 0;
}
