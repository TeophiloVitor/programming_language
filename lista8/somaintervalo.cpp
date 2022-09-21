#include <iostream>
using namespace std;

int intervalo(int a, int b){
    int calc=0;
    for(int i=a; i<=b; i++){
        calc += i;
    }
    return calc;
}
int main(){
    int x, y;
    cin >>x>>y;

    cout<<intervalo(x,y)<<endl;

return 0;
}
