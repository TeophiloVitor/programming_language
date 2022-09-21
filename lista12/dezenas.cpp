#include <iostream>
#include <cmath>
using namespace std;

void casas(int num, int &d1, int &d2){
    d1 = num/100;
    d2 =  num%100;
}
bool dezena(int num){
    int versor = 0, multi = 1, d1 = 0, d2 = 0;
    casas(num, d1, d2);
    while(d2 >= 1){
    versor += ((d2%10) * pow(10, multi));
    d2 /= 10;
    multi --;
    }
    if(d1 == versor)
        return true;
    else
        return false;
}
int main(){
    int n, m;
    cin >> n >> m;

    for(int i=n; i<=m; i++){
        if(dezena(i)==true)
            cout<<i<<endl;
    }
return 0;
}
