#include <iostream>
using namespace std;

int potencia(int a, int b){
    int calc=a;
    if(b==0){
            calc = 1;
    }else{
        for(int i=1; i<b; i++){
            calc *= a;
        }
    }
    return calc;
}
int main(){
    int x, y;
    cin >>x>>y;

    cout<<potencia(x,y)<<endl;

return 0;
}
