#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n, num;
    float calc=0, media=0;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>num;
        calc += num;
    }
    media = calc/n;
    cout << fixed << setprecision(2);
    cout << media << endl;

return 0;
}
