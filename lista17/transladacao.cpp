#include <iostream>
#include <iomanip>
#include <cmath>
#include <cctype>

#define M_PI 3.14159265358979323846

using namespace std;

const int MAX = 5;

void transladacao(double &x, double &y, double dx, double dy){
    x = x + dx; //faz incrementos ou decrementos mediante o dx e dy serem negativos ou positivos
    y = y + dy;

    cout << fixed << setprecision(2);
    cout << " -> ";
    cout << "( " << x << " , " << y << " )";
}
void rotacao(double &x, double &y, double teta){
    double x2, seno, cosseno, radiano;
    x2 = x; // usado na matriz
    radiano = (teta * M_PI)/180; // convers�o para radianos

    seno = sin(radiano); // uso das fun��es trigonom�tricas para converter para rad
    cosseno = cos(radiano);

    x = (cosseno * x) + (seno * y); // matriz rota��o
    y = (-seno * x2)+ (cosseno * y ); // uso do x2 no lugar do x, pois o x j� mudou de valor

    cout << fixed << setprecision(2);
    cout << " -> ";
    cout << "( " << x << " , " << y << " )";
}
void resultado(char entrada[], double transrot[][MAX], int i , double x , double y){
    for(int j=0; j < i; j++){ // vieram em linhas fixas e difenrentes para variarmos s� as colunas
        if(entrada[j] == 't') // se a entrada for t chama a fun��o translada��o
        transladacao(x, y, transrot[0][j], transrot[1][j]);
        else if(entrada[j] == 'r') // se a entrada for r chama a fun��o rota��o
        rotacao(x, y, transrot[2][j]);
    }// x e y sempre voltam por refer�ncia pois s�o usados modificados em seguida
}
int main(){
    double x, y;
    double transrot[MAX][MAX]; // matriz que ir� receber os valores
    char entrada[MAX];
    int i = 0;
    cin >> x >> y; // entrada dos valores iniciais
    cin >> entrada[i]; // entrada dos caracteres alfab�ticos

    if(isalpha(entrada[i])){ // identifica se � uma letra do alfabeto
        while(entrada[i] == 't' || entrada[i] == 'r'){
            if(entrada[i] == 't'){ // armazena os valores de t
                cin >> transrot[0][i] >> transrot[1][i];
            } // a entrada acontece em linhas diferentes para sua manipul��o na fun��o resultado
            if(entrada[i] == 'r'){ // armazena os valores de r
                cin >> transrot[2][i];
            } // a entrada foi na terceira para separar de alguma forma dos valores de t
            i++; // conta tanto para a atual entrada como para a fun��o resultado
            cin >> entrada[i]; // enquanto n�o for digitado um caractere diferente entram mais valores
        }
    }
    cout << fixed << setprecision(2);
    cout << "( " << x << " , " << y << " )";

    resultado(entrada, transrot, i, x, y); // chama a fun��o

return 0;
}
