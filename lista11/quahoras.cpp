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
        cout << "Manh�" << endl;
    }if(h >= 12 && h <= 17){
        cout << "Tarde" << endl;
    }if(h >= 18 && h <= 23){
        cout << "Noite" << endl;
    }
}
    /* professor, nessa quest�o deixei comentado o #include <iomanip> e um cout que apresenta as horas,
    pois na quest�o deu a entender que devia ter esse resultado na fun��o, por�m para a compara��o no
    if s� � preciso da passagem por refer�ncia das horas, ent�o por isso deixei comentado, para n�o colocar
    no c�digo em si algo desnecess�rio, pq na sa�da final tamb�m s� pede o status de tarde, noite...mas para
    todos os fins est� comentado */
int main(){
    int seg;
    cin >> seg;

    periodo(seg);

return 0;
}
