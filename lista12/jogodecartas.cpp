#include <iostream>
#include <cctype>
using namespace std;

int resultado(char r, char c1){
    int pontos = 0;

    if(tolower(c1) == tolower(r))
            pontos += 3;

    else if(islower(c1) && islower(r)){
            pontos += 1;
    }
    else if(isupper(c1) && isupper(r)){
            pontos += 1;
    }
    return pontos;
}
int pontos(int r, int a, int b, int c, int d, int e){
    int ax, ax2, ax3, ax4, ax5, soma=0;

    ax = resultado(r,a);
    ax2 = resultado(r,b);
    ax3 = resultado(r,c);
    ax4 = resultado(r,d);
    ax5 = resultado(r,e);
    soma = ax + ax2 + ax3 + ax4 + ax5;
    return soma;
}
int pontos2(int r, int a1, int b1, int c1, int d1, int e1){
    int ax, ax2, ax3, ax4, ax5, soma=0;

    ax = resultado(r,a1);
    ax2 = resultado(r,b1);
    ax3 = resultado(r,c1);
    ax4 = resultado(r,d1);
    ax5 = resultado(r,e1);
    soma = ax + ax2 + ax3 + ax4 + ax5;
    return soma;
}
int main(){
    char r, a, b, c, d, e, a1, b1, c1, d1, e1, resp;
    cin >>r>>a>>b>>c>>d>>e>>a1>>b1>>c1>>d1>>e1;


    if(pontos(r, a, b, c, d, e) == pontos2(r, a1, b1, c1, d1, e1))
        cout<<"Pontos A: "<<pontos(r, a, b, c, d, e)<<" Pontos B: "<<pontos2(r, a1, b1, c1, d1, e1)<<" Empate";
    if(pontos(r, a, b, c, d, e) > pontos2(r, a1, b1, c1, d1, e1))
        cout<<"Pontos A: "<<pontos(r, a, b, c, d, e)<<" Pontos B: "<<pontos2(r, a1, b1, c1, d1, e1)<<" Vencedor A";
    if(pontos(r, a, b, c, d, e) < pontos2(r, a1, b1, c1, d1, e1))
        cout<<"Pontos A: "<<pontos(r, a, b, c, d, e)<<" Pontos B: "<<pontos2(r, a1, b1, c1, d1, e1)<<" Vencedor B";

return 0;
}
