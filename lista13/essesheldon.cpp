#include <iostream>
#include <cmath>
using namespace std;

bool primo(int num){ // fun��o que calcula se � ou n�o primo
    int cont = 0;
    for(int i=1; i<=num; i++){
        if(num%i==0){ // vai divir num pelos i do for
            cont++; // soma 1 no cont caso a divis�o seja exata
        }
    }
    if(cont==2) // se o n�mero s� teve dois divisores ele � primo
        return true;
    else
        return false;
}
int posicao(int num){ // fun��o que resulta a posi��o
    int cont = 0, posi = 0;
    for(int i=1; i<= num; i++){
        if(primo(i)==true) // utiliza a fun��o primo como auxiliar
          posi++; // vai resultar a posi��o que desejamos
    }
    return posi;
}
int auxinverte(int num){ // fun��o auxilar de invertido
    int quanti = 0;
    if(num==0){ // caso o n�mero seja 0
        quanti++;
    }
    else{
        while(num != 0){
            num /= 10; // cindi��o do while funcionar
            quanti ++; // calcula a quantidade de digitos do n�mero
        }
    }
    return quanti;
}
int invertido(int num){ // fun��o inverter n�mero
    int multi = (auxinverte(num) - 1) ; // usa a fun��o auxiliar de contar digitos - 1
    int versor = 0;

    while(num >= 1){ // uso do while que faz sucessivas divis�es e calculando o versor
    versor += ((num%10) * pow(10, multi)); // o versor resulta no n�mero invertido
    num /= 10; // condi��o para while funcionar
    multi --; // � necess�rio diminuir o expoente a medida que o n�mero tamb�m diminui
    }
    return versor;
}
int produto(int num){ // fun��o que calcula o produto
    int multi = 1;
    if(num == 0) // caso o n�mero seja 0
        multi = 0;
    while(num>=1){
        multi *= (num%10); // atrav�s do resto faz sucessivas multiplica��es
        num /= 10;
    }
    return multi;
}
int binario(int num){ // fun��o que calcula o bin�rio de um n�mero
    int cont = 0, resp = 0, calc = 0;
    // o bin�rio pode ser obtido por sucessivos num%2, por�m ao final � preciso inverter ele
    while(num > 0){
        calc = (calc * 10 ) + (num % 2); // faz a invers�o dos termos
        num /= 2; // condi��o para o while funcionar
        cont++;
    }
    for(int i = cont; i > 0; i--){ // usa o contador anterior como refer�ncia
        resp  = (resp * 10) + (calc % 2); // a resposta vir� invertida como desejamos
        calc = (calc - (calc % 2))/10;
    }
    return resp;
}
void armazena(int num){ // essa � fun��o que concentra todos os resultados das outras fun��es
    // aqui se chama as fun��es em vari�veis para melhorar a manipula��o
    int contador = 0; // conta se as condi��es s�o atendidas para ser Sheldon
    int pos = posicao(num); //chama a fun��o posicao
    int inver = invertido(num); // chama a funcao inverte num
    int posinver = posicao(inver); // chama a fun��o posicao com o num invertido
    int produ = produto(num); // chama a fun��o que realiza o produto
    int normalinver = invertido(posinver); // para verificar se as posi��es s�o iguais, inverte o num
    int numbinario = binario(num); // chama o bin�rio do num
    int binarioinver = invertido(numbinario); // detec��o se � ou n�o pal�ndromo, atrav�s da invers�o

    if(primo(num)== true){
        cout << "� primo" << endl; // imprime com auxilio da fun��o primo
        contador++; // soma 1 j� que atendeu a condi��o
        cout << "Posi��o: " << pos << endl; // se for primo imprime a posi��o
    }
    else{
        cout << "N�o � primo" << endl; // imprime com auxilio da fun��o primo
        cout << "Posi��o: N�o � primo, n�o ocupa posi��o" << endl; // como n�o � primo a posi��o � nula
    }

    cout << "N�mero invertido: " << inver << endl; // imprime o num invertido

    if(primo(inver)== true){
        cout << "N�mero invertido � primo" << endl; // imprime com auxilio da fun��o primo
        contador++; // soma 1 j� que atendeu a condi��o
        cout << "Posi��o n�mero invertido: " << posinver << endl; // se for primo imprime a posi��o
    }
    else{
        cout << "N�mero invertido n�o � primo" << endl; // imprime com auxilio da fun��o primo
        cout << "Posi��o n�mero invertido: N�o � primo, n�o ocupa posi��o" << endl; // como n�o � primo a posi��o � nula
    }

    if(pos == normalinver){
        cout << "Posi��es coincidem" << endl; // com o normal invertido verifica se pe igual ao invertido
        contador++; // soma 1 j� que atendeu a condi��o
    }
    else{
        cout << "As posi��es n�o coincidem" << endl; // caso as posi��es n�o coincidam
    }

    cout << "Produto dos d�gitos: " << produ << endl; // imprime o produto dos d�gitos

    if(pos == produ){
        cout << "Produto e posi��o coincidem" << endl; // verifica se posi��o e produto coincidem
        contador++; // soma 1 j� que atendeu a condi��o
    }
    else{
        cout << "Produto e posi��o n�o coincidem" << endl; // caso n�o coincida
    }

    cout << "N�mero em bin�rio: " << numbinario << endl;  // imprime o n�mero em bin�rio

    if(numbinario == binarioinver){ // caso o bin�rio seja igual a seu invertido ser� pal�ndromo
        cout << "Bin�rio � pal�ndromo" << endl;
        contador++; // soma 1 j� que atendeu a condi��o
    }
    else{
        cout << "Bin�rio n�o � pal�ndromo" << endl; // caso n�o seja pal�ndromo
    }

    if(contador == 5){
        cout << "� Sheldon" << endl; // utiliza o contador, se ele resultou em 5, atendeu todas as condi��es
    }
    else{
        cout << "N�o � Sheldon" << endl; // caso n�o seja Sheldon
    }
}
int main(){
    int num;
    cin >> num;

    armazena(num); // chama a fun��o armazena que concentrou todos os resultados

return 0;
}
