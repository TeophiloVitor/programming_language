#include <iostream>
using namespace std;

int main(){
    char string1[80], string2[80];

    cin.getline(string1,50);
    cin.getline(string2,50);

    cout << string1 << " ++ " << string2 << " = " << string1 << string2;

return 0;
}
