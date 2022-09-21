#include <iostream>
using namespace std;

void recebeX(int vendasX[], int n){
    for(int i=0; i<n; i++){
        cin >> vendasX[i]; // recebe as vendas do vendedor X e armazena no vetor
    }
}
void vendedorX(int vendasX[], int n){
    cout << "Vendas 1." << endl;
    cout << "[ "; // com a utilização de cout's para imprimir os colchetes e vírgula
    for(int i=0; i<n; i++){
        vendasX[i]; // apresenta as vendas de X no formato de vetor pedido

        if(i < (n - 1))
            cout << vendasX[i] << " , ";
        else
            cout << vendasX[i];
    }
    cout << " ]" << endl;
}
void recebeY(int vendasY[], int n1){
    for(int i=0; i<n1; i++){
        cin >> vendasY[i]; // recebe as vendas do vendedor Y e armazena no vetor
    }
}
void vendedorY(int vendasY[], int n1){
    cout << "Vendas 2." << endl;
    cout << "[ "; // com a utilização de cout's para imprimir os colchetes e vírgula
    for(int i=0; i<n1; i++){
        vendasY[i]; // apresenta as vendas de Y no formato de vetor pedido

        if(i < (n1 - 1))
            cout << vendasY[i] << " , ";
        else
            cout << vendasY[i];
    }
    cout << " ]" << endl;
}
bool verificaX(int vendasX[], int n, int x1){
    int cont = 0;
    for(int i=0; i<n; i++){
        if(vendasX[i] == x1) // verifica se dentre as vendas de X houve alguma com o valor de x1
            cont++;
    }
    if(cont > 0)
        return true;
    else
        return false;
}
bool verificaY(int vendasY[], int n1, int x2){
    int cont = 0;
    for(int i=0; i<n1; i++){
        if(vendasY[i] == x2) // verifica se dentre as vendas de Y houve alguma com o valor de x2
            cont++;
    }
    if(cont > 0)
        return true;
    else
        return false;
}
void repetidosX(int vendasX[], int n){
    int cont = 0;
    for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){ // começamos em i+1 para comparar posições diferentes
			if(vendasX[i] == vendasX[j]) // comparação
				cont++;
		} // através de for aninhados verificará se houve vendas com o mesmo valor em X
	}
	if(cont != 0)
		cout << "Sim, funcionário 1 vendeu dois produtos com o mesmo valor" << endl;
	else
		cout << "Não, funcionário 1 não vendeu dois produtos com o mesmo valor" << endl;
}
void repetidosY(int vendasY[], int n1){
    int cont = 0;
    for(int i=0; i<n1; i++){
		for(int j=i+1; j<n1; j++){ // começamos em i+1 para comparar posições diferentes
			if(vendasY[i] == vendasY[j]) // comparação
				cont++;
		} // através de for aninhados verificará se houve vendas com o mesmo valor em Y
	}
	if(cont != 0)
		cout << "Sim, funcionário 2 vendeu dois produtos com o mesmo valor" << endl;
	else
		cout << "Não, funcionário 2 não vendeu dois produtos com o mesmo valor" << endl;
}
int somaX(int vendasX[], int n){
    int calc = 0;
    for(int i=0; i<n; i++){
        calc += vendasX[i]; // somará os elementos do vetor X para ver a venda total
    }
    return calc;
}
int somaY(int vendasY[], int n1){
    int calc1 = 0;
    for(int i=0; i<n1; i++){
        calc1 += vendasY[i]; // somará os elementos do vetor Y para ver a venda total
    }
    return calc1;
}
bool comparavendas(int vendasX[], int n, int vendasY[], int n1){
    for(int i=0; i<n; i++){
        for(int j=0; j<n1; j++){
            if(vendasX[i] <= vendasY[j]) // comparação entre um vetor e outro
                return false;
        } // nessa função é usado for aninhado para poder percorrer ambos os vetores e comparar
    }
        return true;
}
int main(){
    int n;
    cin >> n; // tamanho do vetor X
    int vendasX[n]; // cria o vetor vendasX
    recebeX(vendasX, n); // chama a função que receberá os valores de  no vetor X
    int n1;
    cin >> n1; // tamanho do vetor Y
    int vendasY[n1]; // cria o vetor vendasY
    recebeY(vendasY, n1); // chama a função que receberá os valores de  no vetor Y
    int x1, x2;
    cin >> x1 >> x2; // entra com x1 e x2 que serão usados na função verifica

    vendedorX(vendasX, n); // apresenta os valores de venda de X em formato de vetor

    vendedorY(vendasY, n1); // apresenta os valores de venda de Y em formato de vetor

    if(verificaX(vendasX, n, x1) == true) // verifica se houve alguma venda no valor de x1 no vetor X
        cout << "Sim, funcionário 1 vendeu um produto cujo valor foi " << x1 << endl;
    else
        cout << "Não, funcionário 1 não vendeu um produto cujo valor foi " << x1 << endl;

    if(verificaY(vendasY, n1, x2) == true) // verifica se houve alguma venda no valor de x2 no vetor Y
        cout << "Sim, funcionário 2 vendeu um produto cujo valor foi " << x2 << endl;
    else
        cout << "Não, funcionário 2 não vendeu um produto cujo valor foi " << x2 << endl;

    repetidosX(vendasX, n); // verifica se houve vendas com o mesmo valor no vetor X

    repetidosY(vendasY, n1); // verifica se houve vendas com o mesmo valor no vetor Y

    if(somaX(vendasX, n) > somaY(vendasY, n1)) // verifica o melhor vendedor mediante as somas das vendas de X e Y
        cout << "O melhor vendedor foi 1" << endl;
    else if(somaX(vendasX, n) == somaY(vendasY, n1))
        cout << "Empate" << endl;
    else if(somaX(vendasX, n) < somaY(vendasY, n1))
        cout << "O melhor vendedor foi 2" << endl;

    if(comparavendas(vendasX, n, vendasY, n1) == true)
        cout << "Sim, todos os produtos vendidos por 1 foram mais caros que os produtos vendidos por 2" <<endl;
    else
        cout << "Não, os produtos vendidos por 1 não foram todos mais caros que os produtos vendidos por 2" << endl;

    if(comparavendas(vendasX, n, vendasY, n1) == true)
        cout << "Sim, todos os produtos vendidos por 2 foram mais caros que os produtos vendidos por 1" << endl;
    else
        cout << "Não, os produtos vendidos por 2 não foram todos mais caros que os produtos vendidos por 1" << endl;

    // compara se todas as vendas de um foram ou não superiores ao do outro, com uso de uma função bool
return 0;
}
