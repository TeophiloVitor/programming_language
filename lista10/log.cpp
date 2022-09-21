#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double taylor(double z){
    double calc, ln;
    int i=2;

    ln = z-1;
    calc = abs(ln);

    while(calc > 0.001){
        calc = abs(pow(z-1, i)/i);
        if(i%2==0){
            ln = ln - (pow(z-1, i)/i);
        }else{
            ln = ln + (pow(z-1, i)/i);
        }
        i++;
    }
    return ln;
}
int main(){
    int z;
    cin >> z;

    while(z != 0){
        cout<<fixed<<setprecision(4);
        cout<<"Meu ln: "<<taylor(z)<<" C++: "<<log(z)<<endl;
        cout<<"Diferença: "<<abs(taylor(z) - log(z))<<endl;

        cin >> z;
    }
return 0;
}
