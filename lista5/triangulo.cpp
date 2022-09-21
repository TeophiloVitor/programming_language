#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float x, y, z, a, b, c, calc;
    cin >>x>>y>>z;

    if(x==y && x==z && y==z)
        cout<<"TRIANGULO EQUILATERO"<<endl;
    if(x>y && x>z && y>z){
        a=x;
        b=y;
        c=z;
    }else if(x>y && x>z && z>y){
        a=x;
        b=z;
        c=y;
    }else if(y>x && y>z && x>z){
        a=y;
        b=x;
        c=z;
    }else if(y>z && y>x && z>x){
        a=y;
        b=z;
        c=x;
    }else if(z>x && z>y && x>y){
        a=z;
        b=x;
        c=y;
    }else if(z>y && z>x && y>x){
        a=z;
        b=y;
        c=x;
    }
    calc = pow(a,2);

    if(a >= (b+c))
        cout<<"NAO FORMA TRIANGULO"<<endl;
    else if(calc == (pow(b,2) + pow(c,2)))
        cout<<"TRIANGULO RETANGULO"<<endl;
    else if(calc > (pow(b,2) + pow(c,2)))
        cout<<"TRIANGULO OBTUSANGULO"<<endl;
    else if(calc < (pow(b,2) + pow(c,2)))
        cout<<"TRIANGULO ACUTANGULO"<<endl;
    if(a==b && a==c && b==c)
        cout<<"TRIANGULO EQUILATERO"<<endl;
    if((a==b && a!=c) || (c==b && c!=a) || (a==c && c!=b))
        cout<<"TRIANGULO ISOSCELES"<<endl;
    return 0;
}

return 0;
}
