#include <iostream>
#include <climits>
using namespace std;

int main(){
    int num, menor;
    menor=INT_MAX;

    while(num!=0){
        cin>>num;
        if(num < menor && num != 0)
           menor=num;
    }
    cout<<menor<<endl;

return 0;
}
