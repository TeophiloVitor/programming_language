#include <iostream>
using namespace std;

int main(){
    int x, y, res, r1, r2;
    cin>>x>>y;

    if(x > y){
        r1 = x;
        r2 = y;
    }else {
        r1 = y;
        r2 = x;
    }
    res  = x%y;
    while(res != 0){
        x = y;
        y = res;
        res  = x%y; // o algortimo usado foi de Euclides, onde ele divide x por y e em seguida utilazará o y dividido por esse resto, quando o resto é 0 temos o MDC, por isso foi usado no while a condição != 0 e assim é impresso o ultimo resto que será o MDC.
    }
    cout<<"MDC("<<r1<<","<<r2<<") = "<<y<<endl;

return 0;
}


