#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

const int MAX = 30;

struct Produto{
    char nome[MAX];
    int codigo;
    float preco;
    int tipo;

    void exibe(){ // fun��o que exibe os produtos e suas caracter�sticas
        if(tipo == 0)
            cout << "{ c�digo: " << codigo << " , nome: " << nome << " , pre�o: " << preco << " , tipo = Eletrodom�stico }" << endl;
        if(tipo == 1)
            cout << "{ c�digo: " << codigo << " , nome: " << nome << " , pre�o: " << preco << " , tipo = Moda }" << endl;
        if(tipo == 2)
            cout << "{ c�digo: " << codigo << " , nome: " << nome << " , pre�o: " << preco << " , tipo = Outro }" << endl;
    }
};

void maiscaro(struct Produto entrada[], int n){
    int aux = 0, aux2 = 0;
    for(int i=0; i<n; i++){
        if(entrada[i].preco > aux){
            aux = entrada[i].preco; // guarda o maior elemento
            aux2 = i; // �ndice do maior elemento
        }
    }
    cout << "Mais caro" << endl;
    entrada[aux2].exibe(); // chama a fun��o exibe para mostrar qual est� na posi��o aux2
}

void temipad(struct Produto entrada[], int n){
    bool resp = false;
    for(int i=0; i<n; i++){
        if(strcmp("iPad",entrada[i].nome) == 0) // uso da strmcp para localizar se existe iPad na struct
            resp = true; // se sim, retorna true
    }
    if(resp == true)
        cout << "Tem iPad" << endl;
    else
        cout << "N�o tem iPad" << endl;
}

void lucro(struct Produto entrada[], int n){
    float lucro = 0;
    for(int i=0; i<n; i++){
        if(entrada[i].tipo == 0) // selciona s� os eletrodom�sticos
            lucro += entrada[i].preco; // faz a soma dos eletrodom�sticos
    }
    cout << fixed << setprecision(2);
    cout << "Lucro: " << lucro << endl;
}

int main(){
    int n;
    cin >> n;
    Produto entrada[n];

    for(int i = 0; i < n; i++){
        cin.ignore();
        cin.getline(entrada[i].nome, MAX);
        cin >> entrada[i].codigo;
        cin >> entrada[i].preco;
        cin >> entrada[i].tipo;
    }
    for(int j = 0; j < n; j++){
        entrada[j].exibe(); // fun��o para exibir os produtos e suas especifica��es
    }
    // fun��o que localiza o produto mais caro
    maiscaro(entrada, n);
    // fun��o que localiza se h� ou n�o iPad nos produtos
    temipad(entrada, n);
    // fun��o lucro com eletrodom�sticos
    lucro(entrada, n);

return 0;
}
