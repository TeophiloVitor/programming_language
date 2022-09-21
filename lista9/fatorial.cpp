#include <iostream>
using namespace std;

int fatorial(int num){
     int calc=1;
     for(int i=1; i<= num; i++){
        for(int j=1; j<i; i++){
            calc = calc * (i*j);
        }
     }
     return calc;
}
int main(){
    int num;
    cin >> num;

    cout << fatorial(num) << endl;

return 0;
}
