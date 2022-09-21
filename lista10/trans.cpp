#include <iostream>
using namespace std;
int main ()
{
    int x,b[8];
    cin>>x;

    for(int i=0; i<=7 ; i++){
        if(x >= 1){
            b[i] = (x%2);
            x /= 2;
            cont++;
        }
    }
    for(i=7;i>=0;i--)
    {
        cout<<b[i];
    }

    return 0;
}
