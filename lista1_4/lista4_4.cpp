#include <iostream>
using namespace std;

int main() {
    float a, b, c, media;
    cin >> a >> b >> c;

    media = (a+b+c)/3;

    if(media >= 5.0 && a >= 3 && b >= 3 && c >= 3){
        cout<<"Aprovado"<<endl;
    }
    else if(media >= 3){
        cout<<"Final"<<endl;
    }
    else {
        cout<<"Reprovado"<<endl;
    }
return 0;
}
