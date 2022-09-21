#include <iostream>
using namespace std;

int mdc(int x,int y){
    if(y==0){
        return x;
    }
    else{
            return mdc(y,x%y);
        }
}
int main(){
    int x,y;
    cin>>x>>y;
    cout<<"MDC("<<x<<" , "<<y<<")"<< " = "<<mdc(x,y);
    return 0;
}
