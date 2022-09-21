#include <iostream>
using namespace std;

int main() {
    int dia;
    cin >> dia;

    switch(dia){
        case 1:
            cout<<"Domingo"<<endl;
            break;
        case 2:
            cout<<"Segunda-feira"<<endl;
            break;
        case 3:
            cout<<"Terca-feira"<<endl;
            break;
        case 4:
            cout<<"Quarta-feira"<<endl;
            break;
        case 5:
            cout<<"Quinta-feira"<<endl;
            break;
        case 6:
            cout<<"Sexta-feira"<<endl;
            break;
        case 7:
            cout<<"Sabado"<<endl;
            break;
        default:
            cout<<"Dia Invalido"<<endl;
    }
return 0;
}
