#include <iostream>
using namespace std;

const int MAX = 40; // valor MAX

struct Loja{ // estrutura loja
    char nome[MAX], endereco[MAX];
    int telefone;
};
struct Cliente{ // estrutura cliente
    char nomep[MAX], enderecop[MAX], email[MAX], cpf[MAX];
};
struct Produto{ // estrutura produtos
    char nomepp[MAX];
    int codigo, estoque;
    float preco;
};
struct Data{ // estrutura datas
    int dia, mes, ano;
};
void lojinha(struct Loja entrada[]){ // função auxiliar que mostra os dados da loja
    cout << "Loja: " << entrada[0].nome << endl;
    cout << "Endereço: " << entrada[0].endereco << endl;
    cout << "Telefone: " << entrada[0].telefone << endl;
}
void aniversario(struct Data entrada4[], struct Cliente entrada2[], int clien, int mesq){ // aniversariante do mês
    for(int i = 0; i < clien; i++){ // indica que cada índice equivale a um mês e seleciona o mês
        if(entrada4[i].mes == 1 && mesq == 1){
            cout << "Aniversariantes de janeiro:" << endl;
            break;
        }if(entrada4[i].mes == 2 && mesq == 2){
            cout << "Aniversariantes de fevereiro:" << endl;
            break;
        }if(entrada4[i].mes == 3 && mesq == 3){
            cout << "Aniversariantes de março:" << endl;
            break;
        }if(entrada4[i].mes == 4 && mesq == 4){
            cout << "Aniversariantes de abril:" << endl;
            break;
        }if(entrada4[i].mes == 5 && mesq == 5){
            cout << "Aniversariantes de maio:" << endl;
            break;
        }if(entrada4[i].mes == 6 && mesq == 6){
            cout << "Aniversariantes de junho:" << endl;
            break;
        }if(entrada4[i].mes == 7 && mesq == 7){
            cout << "Aniversariantes de julho:" << endl;
            break;
        }if(entrada4[i].mes == 8 && mesq == 8){
            cout << "Aniversariantes de agosto:" << endl;
            break;
        }if(entrada4[i].mes == 9 && mesq == 9){
            cout << "Aniversariantes de setembro:" << endl;
            break;
        }if(entrada4[i].mes == 10 && mesq == 10){
            cout << "Aniversariantes de outubro:" << endl;
            break;
        }if(entrada4[i].mes == 11 && mesq == 11){
            cout << "Aniversariantes de novembro:" << endl;
            break;
        }if(entrada4[i].mes == 12 && mesq == 12){
            cout << "Aniversariantes de dezembro:" << endl;
            break;
        }
    }
    for(int j = 0; j < clien; j++){
        if(entrada4[j].mes == mesq) // procura aniversariantes no mes em Data
        cout << entrada2[j].nomep << endl; // com o índice j localiza o clienete em nomep
    }
}
void estoquenum(struct Produto entrada3[], int prod){ // verificar estoque
    cout << "Produtos com estoque inferior a 10:" << endl;
    for(int i = 0; i < prod; i++){
        if(entrada3[i].estoque < 10) // verifica estoque menor em estoque
            cout << entrada3[i].nomepp << endl; // com o índice i localiza o produto em nomepp
    }
}
void clientepos(struct Cliente entrada2[], struct Data entrada4[], int n){ // localiza e imprime o cliente na posição n
    cout << "Cliente na posição " << n << ":" << endl; // localiza e imprime todas as informações do cliente
    cout << "Nome: " << entrada2[n].nomep << endl;
    cout << "Endereço: " << entrada2[n].enderecop << endl;
    cout << "Email: " << entrada2[n].email << endl;
    cout << "CPF: " << entrada2[n].cpf << endl;
    cout << "Data de nascimento: " << entrada4[n].dia << "/" << entrada4[n].mes << "/" << entrada4[n].ano << endl;
}
void produtopos(struct Produto entrada3[], int m){ // localiza e imprime o cliente na posição m
    cout << "Produto na posição: " << m << endl; // localiza e imprime todas as informações do produto
    cout << "Código: " << entrada3[m].codigo << endl;
    cout << "Nome: " << entrada3[m].nomepp << endl;
    cout << "Preço: " << entrada3[m].preco << endl;
    cout << "Estoque: " << entrada3[m].estoque << endl;
}
int main(){
    int clien, prod, n, m, mesq;
    cin >> clien >> prod;
    Loja entrada[3]; // struct Loja
    Cliente entrada2[clien]; // struct Cliente
    Produto entrada3[prod]; // struct Produto
    Data entrada4[3]; // struct Data

    cin.ignore(); // para consumir o cin pois temos um cin.getline a seguir
    cin.getline(entrada[0].nome, MAX); // Loja
    cin.getline(entrada[0].endereco, MAX); // Loja
    cin >> entrada[0].telefone; // Loja

    for(int i = 0; i < clien; i++){ // aqui temos as entrada da struct Cliente
        cin.ignore();
        cin.getline(entrada2[i].nomep, MAX);
        cin.getline(entrada2[i].enderecop, MAX);
        cin >> entrada2[i].email;
        cin >> entrada2[i].cpf;
        cin >> entrada4[i].dia; // aqui temos as entrada da struct Data, entrada 4
        cin >> entrada4[i].mes;
        cin >> entrada4[i].ano;
    }
    for(int j = 0; j < prod; j++){ // aqui temos as entrada da struct Produto
        cin >> entrada3[j].codigo;
        cin.ignore();
        cin.getline(entrada3[j].nomepp, MAX);
        cin >> entrada3[j].preco;
        cin >> entrada3[j].estoque;
    }
    cin >> mesq; // mês requerido
    cin >> n; // índice no vetor cliente
    cin >> m; // índice no vetor produto

    // função auxiliar que exibe as informações da loja
    lojinha(entrada);
    // função que exibe os aniversariantes do mês
    aniversario(entrada4, entrada2, clien, mesq);
    // função que mostra estoque abaixo de 10
    estoquenum(entrada3, prod);
    // mostra os dados do cliente na posição desejada
    clientepos(entrada2, entrada4, n);
    // mostra os dados do produto na posição desejada
    produtopos(entrada3, m);

return 0;
}
