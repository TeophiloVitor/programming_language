#include <iostream>
using namespace std;

bool ehprimo(int t){
    int cont = 0;
    for(int i=1; i<= t; i++){
        if(t%i == 0)
          cont++;
    }
    if(cont == 2)
      return true;
    else
      return false;
}
int main(){
    int cont = 0, cont2 = 0, num;
    cin >> num;
    for(int i=1; i<= num; i++){
        if(ehprimo(i)==true)
          cont2++;
    }
    cout << cont2;
return 0;
}
