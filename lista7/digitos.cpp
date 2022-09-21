#include <iostream>
using namespace std;

int main(){

    int num, divi=10, cont=0;
    cin>>num;

    while(num!=0){
        num /= divi;
        cont++;
    }
    cout<<cont<<endl;

return 0;
}

