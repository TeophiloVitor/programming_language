#include <iostream>
#include <cctype>
using namespace std;

int main(){
    int n, cont=0;
    char cac;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>cac;
        if(isalpha(cac) && islower(cac))
           cont++;
    }
    cout<<cont<<endl;

return 0;
}
