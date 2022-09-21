#include <iostream>
using namespace std;

int main(){
    int num, calc;
    cin>>num;

    for(int i=2; i<=num; i++){
            calc=0;
        for(int j=1; j<i; j++){
            if(i%j==0)
                calc += j;
        }
        if(calc==i)
            cout<<i<<endl;
    }
return 0;
}
