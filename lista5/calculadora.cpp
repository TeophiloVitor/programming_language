#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double a, b, calc;
    char op;
    cin >>a>>b>>op;

    if(a==0 || b==0){
        cout<<"erro!"<<endl;
        return 0;
    }
    switch(op){
        case '+':
            calc= a + b;
            break;
        case '-':
            calc= a - b;
            break;
        case '*':
            calc= a * b;
            break;
        case '/':
            calc= a / b;
            break;
        default:
            cout<<"erro!"<<endl;
            return 0;
            break;
    }
    cout<<fixed<<setprecision(2);
    cout<<a<<" "<<op<<" "<<b<<" = "<<calc<<endl;
    return 0;
}
