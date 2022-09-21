#include <iostream>
using namespace std;

int main () {
int num, i, j=0;
cout << "Digite um numero para saber se ele eh primo ou nao: ";
cin >> num;

for (i = 1; i <= num; i++) {
    if (num % i == 0) {
        j++;
    }
}
if (j == 2) {
 cout << num << " Eh primo";
} else {
    cout<< num << " Nao eh primo";
}
return 0;
}
