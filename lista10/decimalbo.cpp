#include <iostream>
using namespace std;

int convert(int n){
    int cont = 0, resp = 0, calc = 0;

    while(n > 0){
        calc = (calc * 10 ) + (n % 2);
        n /= 2 ;
        cont++;
    }
    while(cont > 0){
        resp  = (resp * 10) + (calc % 2);
        calc = (calc - (calc % 2))/10 ;
        cont--;
    }
    return resp;
}
int main(){
    int n;
    cin >> n;
    cout << convert(n) << endl;

return 0 ;
}
