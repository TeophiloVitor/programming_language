#include <iostream>
#include <cmath>

using namespace std;

struct comp {
	int real, imag;
	
	//Imprimir os complexos
	void imprime_comp () {
		int i;
		if(imag >= 0)
			cout << real << " + " << imag << "i";
		else
			//Embora o número seja negativo, a função abs tira o sinal que já está no cout e controlado pelo if
			cout << real << " - " << abs(imag) << "i";
	}
};

//Retorna o módulo do primeiro número complexo	
void modulo (struct comp vec[], int n) {//Caso fosse o módulo de outros números basta usar um for
	float mod;
	mod = sqrt(pow(vec[0].real, 2) + pow(vec[0].imag, 2));
	
	cout << "módulo = " << mod << endl;
}

//Verifica se dois números complexos são iguais
bool teste_igual(struct comp vec[], int n) {
	if(vec[0].real == vec[1].real && vec[0].imag == vec[1].imag)
		return true;
	else
		return false;
}

//Soma dois números complexos
void soma_comp(struct comp vec[], int n) {
	int i, soma_r = 0, soma_i = 0;
	
	for(i = 0; i < 2; i++){
		soma_r += vec[i].real;
		soma_i += vec[i].imag;
	}
	
	if(soma_i >= 0)
		cout << soma_r << " + " << soma_i << "i" << endl;
	else
		cout << soma_r << " - " << abs(soma_i) << "i" << endl;
}

//Calcula o conjugado de um número complexo e imprime
void conjug (struct comp vec[], int n) {//Caso fosse o conjugado de outros números basta usar um for
	if(vec[0].imag >= 0)
		cout << "conjugado = " << vec[0].real << " - " << vec[0].imag << "i" << endl;
	else
		cout << "conjugado = " << vec[0].real << " + " << abs(vec[0].imag) << "i" << endl;
}

//Calcula e imprime a soma dos complexos
void soma_tcomp(struct comp vec[], int n) {
	int i, soma_r = 0, soma_i = 0;
	for(i = 0; i < n; i++){
		soma_r += vec[i].real;
		soma_i += vec[i]. imag;
	}
	if(soma_i >= 0)
		cout << "a soma dos complexos é " << soma_r << " + " << soma_i << "i" << endl;
	else
		cout << "a soma dos complexos é " << soma_r << " - " << abs(soma_i) << "i" << endl;
}


int main () {
	int i, n;
	setlocale(LC_ALL, "Portuguese");
	
	cin >> n;//Tamanho do vetor vec
	
	comp vec[n];
	
	for(i = 0; i < n; i++){
		cin >> vec[i].real >> vec[i].imag;//Captura a parte real e a parte imaginária
	}
	
	//Imprime os número complexos
	for(i = 0; i < n; i++){
		vec[i].imprime_comp();
		cout << endl;
	}
	//Imprime o conjugado do primeiro número
	conjug(vec, n);
	
	//Imprime o modulo do primeiro número
	modulo(vec, n);
	
	//Imprime a comparação dos números
	vec[0].imprime_comp();	
	if(teste_igual(vec, n))
		cout << " é igual a ";
	else
		cout << " não é igual a ";
	vec[1].imprime_comp();
	cout << endl;//A função imprime_comp não pula  a linha
		
	//Imprime a soma de todos os complexos
	soma_tcomp(vec, n);
	
	return 0;
}