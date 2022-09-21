#include <iostream>

using namespace std;

//Dado um valor x, determinar (retornando true/false) se o vendedor Y vendeu um produto cujo valor foi x
bool vendY1(int val1, int vend1[], int n1){
	int i;

	for(i = 0; i < n1; i++){
		if(vend1[i] == val1)//Compara se o preço de um produto é igual a um certo preço x
			return true;
	}
		return false;
}

//Vendedor vendeu dois produtos com o mesmo valor
bool vendY2(int vend2[], int n2){
	int i, j, aux = 0;

	for(i = 0; i < n2; i++){
		for(j = i + 1; j < n2; j++){//Evite comparar o mesmo termo com ele mesmo
			if(vend2[i] == vend2[j]){//Compara se o preço de um produto é igual a outro no vetor
				aux++;
			}
		}
	}

	if(aux != 0)
		return true;
	else
		return false;
}

//Qual dos dois gerou mais lucro
int vendXY(int vend3[], int n3, int vend4[], int n4){
	int soma1 = 0, soma2 = 0, i;

	//Lucro do vendedor 1
	for(i = 0; i < n3; i++){
		soma1 += vend3[i];
	}

	//Lucro do vendedor 2
	for(i = 0; i < n4; i++){
		soma2 += vend4[i];
	}

	//Retorna quem teve mais lucro
	if(soma1 > soma2)
		//Vendedor 1 vendeu mais
		return 1;
	else if(soma1 == soma2)
		//Empate nos lucros
		return 0;
	else
		//Vendedor 2 vendeu mais
		return -1;
}

//Compara quem vendeu produtos mais caros
bool compara(int vend5[], int n5, int vend6[], int n6){
	int i, j;

		for(i = 0; i < n5; i++){//Os dois for comparam os preços
			for(j = 0; j < n6; j++){
				if(vend5[i] <= vend6[j])
					return false;
			}
		}

	return true;
}

int main () {
	setlocale(LC_ALL,"Portuguese");

	int n1, n2, x1, x2, i, j;

	//Número de produto vendidos por 1
	cin >> n1;
	int vend1[n1] = {};

	//Valores dos produtos vendidos por 1
	for(i = 0; i < n1; i++){
		cin >> vend1[i];
	}

	//Número de produto vendidos por 2
	cin >> n2;
	int vend2[n2] = {};

	//Valores dos produtos vendidos por 2
	for(i = 0; i < n2; i++){
		cin >> vend2[i];
	}

	//Dois valores inteiros x1 e x2
	cin >> x1 >> x2;

	//Vendas 1
	cout << "Vendas 1.\n[ ";

	for(j = 0; j < n1; j++){
        if(j < (n1 - 1))
        	cout << vend1[j] << " , ";
        else
        	cout << vend1[j];
    }

    cout << " ]" << endl;

    //Vendas 2
	cout << "Vendas 2.\n[ ";

	for(j = 0; j < n2; j++){
        if(j < (n2 - 1))
        	cout << vend2[j] << " , ";
        else
        	cout << vend2[j];
    }

    cout << " ]" << endl;

    //Segunda parte da impressão(FUNC 1)
    if(vendY1(x1, vend1, n1))
    	cout << "Sim, funcionário 1 vendeu um produto cujo valor foi " << x1 << endl;
    else
    	cout << "Não, funcionário 1 não vendeu um produto cujo valor foi " << x1 << endl;

    //Segunda parte da impressão(FUNC 2)
    if(vendY1(x2, vend2, n2))
    	cout << "Sim, funcionário 2 vendeu um produto cujo valor foi " << x2 << endl;
    else
    	cout << "Não, funcionário 2 não vendeu um produto cujo valor foi " << x2 << endl;

    //Terceira parte da impressão(FUNC 1)
    if(vendY2(vend1, n1))
    	cout << "Sim, funcionário 1 vendeu dois produtos com o mesmo valor" << endl;
    else
    	cout << "Não, funcionário 1 não vendeu dois produtos com o mesmo valor" << endl;

    //Terceira parte da impressão(FUNC 2)
    if(vendY2(vend2, n2))
    	cout << "Sim, funcionário 2 vendeu dois produtos com o mesmo valor" << endl;
    else
    	cout << "Não, funcionário 2 não vendeu dois produtos com o mesmo valor" << endl;

    //Quarta parte da impressão
    if(vendXY(vend1, n1, vend2, n2) == 1)
    	cout << "O melhor vendedor foi 1" << endl;
    else if(vendXY(vend1, n1, vend2, n2) == 0)
    	cout << "Empate" << endl;
    else
    	cout << "O melhor vendedor foi 2" << endl;

    //Quinta parte da impressão(FUNC 1)
    if(compara(vend1, n1, vend2, n2)){
    	cout << "Sim, todos os produtos vendidos por 1 foram mais caros que os produtos vendidos por 2" << endl;
    }
    else{
    	cout << "Não, os produtos vendidos por 1 não foram todos mais caros que os produtos vendidos por 2" << endl;
	}

	//Quinta parte da impressão(FUNC 2)
	if(compara(vend2, n2, vend1, n1)){
		cout << "Sim, todos os produtos vendidos por 2 foram mais caros que os produtos vendidos por 1" << endl;
	}
    else{
    	cout << "Não, os produtos vendidos por 2 não foram todos mais caros que os produtos vendidos por 1" << endl;
    }

	return 0;
}
