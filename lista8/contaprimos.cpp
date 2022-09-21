#include <iostream>
using namespace std;

bool ehprimo(int num){
    bool resp = false;
    int cont = 0;
    for(int i=1; i<= num; i++){
        if(num%i == 0)
          cont++;
    }
    if(cont == 2){
      resp = true;
    }else {
      resp = false;
    }
    return resp;
}
int contaprimos(int x, int y){
    int cc=0;
    for(int j=x; j<= y; j++){
        if(ehprimo(j)==true)
          cc++;
    }
    return cc;
}
int main(){
    int x, y;
    cin>>x>>y;

    cout<<contaprimos(x,y)<<endl;
return 0;
}
