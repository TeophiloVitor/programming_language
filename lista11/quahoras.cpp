#include <iostream>
//#include <iomanip>
using namespace std;

int transforma(int seg, int &h, int &m, int &s){
    h = seg/3600;
    m = (seg%3600)/60;
    s = (seg%3600)%60;
}
void periodo(int seg){
    int h=0, m=0, s=0;
    transforma(seg, h, m, s);

     //cout<<setfill('0')<<setw(2)<<h<<":"<<setfill('0')<<setw(2)<<m<<":"<<setfill('0')<<setw(2)<<s<<endl;

    if(h >= 0 && h <= 5){
        cout << "Madrugada" << endl;
    }if(h >= 6 && h <= 11){
        cout << "Manhã" << endl;
    }if(h >= 12 && h <= 17){
        cout << "Tarde" << endl;
    }if(h >= 18 && h <= 23){
        cout << "Noite" << endl;
    }
}
    /* professor, nessa questão deixei comentado o #include <iomanip> e um cout que apresenta as horas,
    pois na questão deu a entender que devia ter esse resultado na função, porém para a comparação no
    if só é preciso da passagem por referência das horas, então por isso deixei comentado, para não colocar
    no código em si algo desnecessário, pq na saída final também só pede o status de tarde, noite...mas para
    todos os fins está comentado */
int main(){
    int seg;
    cin >> seg;

    periodo(seg);

return 0;
}
