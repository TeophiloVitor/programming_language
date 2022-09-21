#include <iostream>
#include <fstream>

using namespace std;

const int tam = 51;

struct Pessoa {
	int cpf;
	char nome[tam], snome[tam], endereco[tam], telefone[tam]; 
}; 

int main () {
	int i, n;//Número de pessoas
	ofstream arq;
	
	cin >> n;
	
	Pessoa vec[n];
	//Criar o arquivo
	arq.open("L29Q1.csv");//ios::app permite que os dados não sejam sobrescritos
	
	//Verifica se foi aberto corretamente
	if(!arq.is_open()){
		cout << "O arquivo não pode ser criado" << endl;
		exit(0);
	}
	
	//Entrada dos dados
	for(i = 0; i < n; i++){
		cin >> vec[i].cpf;
		cin.ignore();
		cin.getline(vec[i].nome, tam);
		cin.getline(vec[i].snome, tam);
		cin.getline(vec[i].endereco, tam);
		cin.getline(vec[i].telefone, tam);
	}
	
	//Armazena os dados
	for(i = 0; i < n; i++){
		arq << vec[i].cpf << " ;";
		arq << vec[i].nome << " ; ";
		arq << vec[i].snome << " ; ";
		arq << vec[i].endereco << " ; ";
		arq << vec[i].telefone;
		arq << "\n";
	}
	
	//Fecha o arquivo
	arq.close();
	
	ifstream arq1;//Cria um arquivo para abrir L29Q1.csv e imprimir na tela
	string str1;//Armazena os dados de cada linha
	
	arq1.open("L29Q1.csv");
	
	//Abre o arquivo
	if(arq1.is_open()){
		while(getline(arq1, str1)){//Lê o arq1 e passa o conteudo linha a linha para a string str1;
			cout << str1 << endl;
		}
	}
	//Imprime erro se não foi possir abrir o arquivo
	else{
		cout << "Não foi possivel abrir o arquivo";
		exit(0);
	}
	
	//Fecha o arquivo após a execução
		arq1.close();
	
	if(remove ("L29Q1.csv") == 0)//Apaga o arquivo após toda execução
		cout << "\nArquivo removido com sucesso";
	else
		cout << "\nFalha ao remover o arquivo";
	
	return 0;
}