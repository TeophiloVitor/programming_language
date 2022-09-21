#include <iostream>
using namespace std;

void divisao(int dividendo, int divisor, int &q, int &r){
	q = dividendo / divisor;
	r = dividendo % divisor;
}
int main(){
	int x, y, q, r;
	cin >> x >> y;

	divisao(x, y, q, r);
	cout << "Q = " << q << endl;
	cout << "R = " << r << endl;

return 0;
}
