#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
const int MAX = 10;
void rotacao(double &x , double &y , double angulo){
    double seno , coss , aux = x ;
    double radianos = (angulo * M_PI)/180 ;
    seno = sin(radianos);
    coss = cos(radianos);
    x = (coss* aux) + (seno*y) ;
    y = (coss * y ) - (seno * aux);
    cout << " -> ";
    cout << fixed << setprecision(2);
    cout << "( " << x << " , " << y << " )" ;
}
void t(double &x , double &y , double dx , double dy){
    x+= dx ;
    y+= dy;
    cout << " -> ";
    cout << fixed << setprecision(2);
    cout << "( " << x << " , " << y << " )" ;
}
void imprimir(char *comandos , double numericos[][MAX] , int tamanho , double x , double y){
    int i ;
    double auxx = x , auxy = y;
    for(i = 0 ; i < tamanho ; i++){
        if(comandos[i] == 't'){
            t(auxx,auxy,numericos[0][i] , numericos[1][i]);
        }
        else {
            rotacao(auxx,auxy , numericos[0][i]);
        }
    }
}
int main(){
    double angulo , x , y , dx , dy  , auxx , auxy;
    char comandos[MAX];
    double numericos[2][MAX];
    int i = 0 , tamanho , j;
    cin >> x >> y ;
    cin >> comandos[i];
    while(comandos[i] == 't' || comandos[i] == 'r'){
        if(comandos[i] == 't'){
            cin >> numericos[0][i] >> numericos[1][i] ;
        }
        else{
            cin >> numericos[0][i];
        }
        i++;
        cin >> comandos[i];
    }
    tamanho = i;
    cout << "( " << x << " , " << y << " )" ;
    imprimir(comandos , numericos , tamanho , x , y);
    return 0;
}
