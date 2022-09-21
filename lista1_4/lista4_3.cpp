#include <iostream>
using namespace std;

int main(){
    int a, b, c, c1, c2, c3;
    cin >> a >> b >> c;

    if(a>b && a>c){
        c1=a;
    }if(b>a && b>c){
        c1=b;
    }if(c>a && c>b){
        c1=c;
    }if(a>b && a<c){
        c2=a;
    }if(a>c && a<b){
        c2=a;
    }if(b>a && b<c){
        c2=b;
    }if(b>c && b<a){
        c2=b;
    }if(c>a && c<b){
        c2=c;
    }if(c>b && c<a){
        c2=c;
    }if(a<b && a<c){
        c3=a;
    }if(b<a && b<c){
        c3=b;
    }if(c<a && c<b){
        c3=c;
    }
    cout << c1 << " " << c2 << " " << c3 << endl;

return 0;
}
