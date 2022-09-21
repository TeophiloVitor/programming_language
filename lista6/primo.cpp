#include <iostream>
using namespace std;

int main(){
    int num1, num2, cont=0, cont2=0, cont3=0;
    cin>>num1>>num2; //entrada do intervalo

    for(int j=num1; j<=num2; j++){ //for que impoe a variacao no intervalo
        for(int i=1; i<=j; i++){ //for que conta as div
            if(j%i==0)
                cont++;
        }
        for(int t=1; t<=(j+2); t++){ //for das div para n+2
            if((j+2)%t==0)
                cont2++;
        }
        if(cont==2 && cont2==2){ //verifica se so houve 2 div em ambos
            cout << j << " "; //imprime os n que sao primos gemeos
            cont3++;
        }
        cont = 0; //zeragem para inicio do proximo for
        cont2 = 0;
    }
    if(cont3==0){ // para o caso sem primos gemeos
        cout << "NAO HA";
    }
return 0;
}
