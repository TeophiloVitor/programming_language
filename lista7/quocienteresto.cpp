#include <iostream>
using namespace std;

int main(){
    int n, m, arm=0, res=0, quo=0;
    cin>>n>>m;
    arm = m;

    while(m <= n){
        m += arm;
        quo++;
    }
    res = n - (quo*arm);

    cout << "Quociente: " << quo << endl;
    cout << "Resto: " << res << endl;

return 0;
}
