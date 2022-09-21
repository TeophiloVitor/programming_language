#include <iostream>
using namespace std;

void triangular(int num){
    int tri = 0, cont;
    for(int i=1; i<= num+1; i++){
        tri = (i * (i + 1))/2;
        cont = 0;
        for(int j=1; j<tri; j++){
            if(tri%j==0){
                cont++;
            }
        }
        if(cont >= num){
                cout<<"O primeiro número triangular com mais de "<<num<<" divisores é: "<<tri<<endl;
                break;
        }
    }
}
int main(){
    int num;
    cin>>num;
    triangular(num);

return 0;
}
