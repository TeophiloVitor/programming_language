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

    void exibe(){ // função que exibe os produtos e suas características
        if(tipo == 0)
            cout << "{ código: " << codigo << " , nome: " << nome << " , preço: " << preco << " , tipo = Eletrodoméstico }" << endl;
        if(tipo == 1)
            cout << "{ código: " << codigo << " , nome: " << nome << " , preço: " << preco << " , tipo = Moda }" << endl;
        if(tipo == 2)
            cout << "{ código: " << codigo << " , nome: " << nome << " , preço: " << preco << " , tipo = Outro }" << endl;
    }
};

void maiscaro(struct Produto entrada[], int n){
    int aux = 0, aux2 = 0;
    for(int i=0; i<n; i++){
        if(entrada[i].preco > aux){
            aux = entrada[i].preco; // guarda o maior elemento
            aux2 = i; // índice do maior elemento
        }
    }
    cout << "Mais caro" << endl;
    entrada[aux2].exibe(); // chama a função exibe para mostrar qual está na posição aux2
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
        cout << "Não tem iPad" << endl;
}

void lucro(struct Produto entrada[], int n){
    float lucro = 0;
    for(int i=0; i<n; i++){
        if(entrada[i].tipo == 0) // selciona só os eletrodomésticos
            lucro += entrada[i].preco; // faz a soma dos eletrodomésticos
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
        entrada[j].exibe(); // função para exibir os produtos e suas especificações
    }
    // função que localiza o produto mais caro
    maiscaro(entrada, n);
    // função que localiza se há ou não iPad nos produtos
    temipad(entrada, n);
    // função lucro com eletrodomésticos
    lucro(entrada, n);

return 0;
}
