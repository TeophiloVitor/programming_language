#include <iostream>
using namespace std;

int seque(int num){
    int a0=5, a1=7, an , aux=a1 , aux2=a0;
    if( num >= 2){
        for(int i = 0 ; i <= (num - 2) ; i++){
            an = (3* aux) + (2* aux2);
            aux2 = aux ;
            aux = an ;
        }
    }else{
        if(num==0)
            an = 5 ;
        if(num==1)
            an = 7;
    }
    return an;
}
int soma(int n){
    int soma = 0 ;
    for(int i = 0 ; i <= n ; i++){
        soma += seque(i);
    }
    return soma;
}
int main(){
    int n;
    cin >> n ;
    cout << soma(n) << endl;

return 0;
}
