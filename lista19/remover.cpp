#include <iostream>
using namespace std;

void elimina(char stringh[], char n){
    int i=0;
    while(stringh[i] != '\0'){
        i++;
    }
    for(int j=0; j<i; j++){
        if(stringh[j] == n)
            for(int k=j; k<i; k++)
                stringh[k] = stringh[k+1];
    }
    cout << stringh << endl;
}
int main(){
    char stringh[50], n;
    cin.getline(stringh, 50);
    cin >> n;

    cout << stringh << " =>" << endl;
    elimina(stringh, n);

return 0;
}
