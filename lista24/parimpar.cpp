#include <iostream>
using namespace std;

bool parimpar(int x){
    if(x == 0)
        return true;
    if(x == 1)
        return false;

    parimpar(x-2);
}
int main(){
    int x;
    cin >> x;

    if(parimpar(x))
        cout << x << " é par" << endl;
    else
        cout << x << " é ímpar" << endl;

return 0;
}
