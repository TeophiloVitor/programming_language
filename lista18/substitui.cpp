#include <iostream>
using namespace std;

int main(){
    int i=0;
    char string[50], n, m;
    cin.getline(string, 50);
    cin >> n >> m;

    cout << string << " =>" << endl;

    while(string[i] != '\0'){
        if(string[i] == n){
            string[i] = m;
        }else if(string[i] == m){
            string[i] = n;
        }
        i++;
    }
    cout << string << endl;

return 0;
}
