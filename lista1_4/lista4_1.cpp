#include <iostream>
using namespace std;

int main () {
    float a, b, c, d, p1, p2, calc1, calc2;
    cin >> a >> b >> c >> d >> p1 >> p2;

    calc1 = a + c;
    calc2 = b + d;

    if(p1 > calc1 || p1 < a || p2 > calc2 || p2 < b) {
        cout << "fora" << endl;
    }
    else {
        cout << "dentro" << endl;
    }
return 0;
}
