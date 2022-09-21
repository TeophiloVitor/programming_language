#include <iostream>
using namespace std;

int main(){
    int num, fprimo, cont;
    cin>>num;

    for(int i=1; i<= num; i++){
        if(num%i==0){
            cont=0;
          for(int j=1; j<= i; j++){
            if(i%j==0)
                cont++;
            }
            if(cont==2)
                fprimo=i;
        }
    }
    cout<<fprimo<<endl;

return 0;
}
