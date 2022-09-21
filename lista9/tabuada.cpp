#include <iostream>
using namespace std;

void tabuada(int res){
    for(int i=1; i<=10; i++){
        for(int j=1; j<=10; j++){
            cout<<i<<" x "<<j<<" = "<<i*j<<endl;
        }
    }
}
int main( ){
    int res=0;
    tabuada(res);

return 0;
}
