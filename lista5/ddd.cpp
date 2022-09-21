#include <iostream>
using namespace std;

int main() {
    int ddd;
    cin >> ddd;

switch(ddd){
    case 61:
        cout<<"Distrito Federal"<<endl;
        break;
    case 71:
        cout<<"Bahia"<<endl;
        break;
    case 11:
        cout<<"São Paulo"<<endl;
        break;
    case 84:
        cout<<"Rio Grande do Norte"<<endl;
        break;
    case 21:
        cout<<"Rio de Janeiro"<<endl;
        break;
    case 81:
        cout<<"Pernambuco"<<endl;
        break;
    case 92:
        cout<<"Amazonas"<<endl;
        break;
    case 68:
        cout<<"Acre"<<endl;
        break;
    default:
        cout<<"DDD não cadastrado"<<endl;
        break;
}
return 0;
}
