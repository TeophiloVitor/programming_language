#include <iostream>
using namespace std;

int main(){
    int d, m, a, d1, m1, a1;
    cin >> d >> m >> a >> d1 >> m1 >> a1;

    if(d==d1 && m==m1 && a==a1){
        cout<<"As datas s�o iguais"<<endl;
    }else if(a > a1){
        cout<<"A segunda data � mais antiga"<<endl;
    }else if(a < a1){
        cout<<"A primeira data � mais antiga"<<endl;
    }else if(m > m1){
        cout<<"A segunda data � mais antiga"<<endl;
    }else if(m < m1){
        cout<<"A primeira data � mais antiga"<<endl;
    }else if(d > d1){
        cout<<"A segunda data � mais antiga"<<endl;
    }else if(d < d1){
        cout<<"A primeira data � mais antiga"<<endl;
    }
return 0;
}
