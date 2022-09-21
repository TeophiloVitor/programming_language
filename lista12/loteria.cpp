#include <iostream>
#include <cstdlib>
using namespace std;

void sorteio(int s,int &r1, int &r2, int &r3){
    srand(s);

    r1 =  (1 + rand()%20);
    r2 =  (1 + rand()%20);
    r3 =  (1 + rand()%20);
}
int result(int s, int x, int y, int z, int &p1, int &p2, int&p3){
    int pontos = 0, r1 = 0, r2 = 0, r3 = 0;
    sorteio(s, r1, r2, r3);

    p1 = r1;
    p2 = r2;
    p3 = r3;

    if(x == r1 || x == r2 || x == r3){
        pontos++;
    }
    if(y == r1 || y == r2 || y == r3){
        pontos++;
    }
    if(z == r1 || z == r2 || z == r3){
        pontos++;
    }
return pontos;
}
int main(){
    int s, a, b, c, d, e, f, p1, p2, p3;
    cin >>s>>a>>b>>c>>d>>e>>f;

    result(s,a,b,c,p1,p2,p3);
    cout << "sorteio: " << p1 <<" "<< p2 <<" "<< p3 << endl;

    if(result(s,a,b,c,p1,p2,p3) == result(s,d,e,f,p1,p2,p3)){
        cout << "Empate" << endl;
    }
    if(result(s,a,b,c,p1,p2,p3) > result(s,d,e,f,p1,p2,p3)){
        cout << "Antonio marcou mais pontos" << endl;
    }
    if(result(s,a,b,c,p1,p2,p3) < result(s,d,e,f,p1,p2,p3)){
        cout << "João marcou mais pontos" << endl;
    }

return 0;
}
