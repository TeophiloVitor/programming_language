#include <iostream>
#include <iomanip>
using namespace std;

void ordena(float &n1, float &n2, float &n3){
    float a, b, c;
    if(n1>n2 && n1>n3 && n2>n3){
        a=n1;
        b=n2;
        c=n3;
    }else if(n1>n2 && n1>n3 && n3>n2){
        a=n1;
        b=n3;
        c=n2;
    }else if(n2>n1 && n2>n3 && n1>n3){
        a=n2;
        b=n1;
        c=n3;
    }else if(n2>n3 && n2>n1 && n3>n2){
        a=n2;
        b=n3;
        c=n1;
    }else if(n3>n1 && n3>n2 && n1>n2){
        a=n3;
        b=n1;
        c=n2;
    }else{
        a=n3;
        b=n2;
        c=n1;
    }
    n1 = a;
    n2 = b;
    n3 = c;
}
float reposicao(float n1, float n2, float n3){
    float calc = 0;
    ordena(n1, n2, n3);
    calc = 15 - n1 - n2;
    return calc;
}
int main(){
    float n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    cout << fixed << setprecision(2);
    cout << reposicao(n1, n2, n3) << endl;

return 0;
}
