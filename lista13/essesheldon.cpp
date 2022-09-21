#include <iostream>
#include <cmath>
using namespace std;

bool primo(int num){ // função que calcula se é ou não primo
    int cont = 0;
    for(int i=1; i<=num; i++){
        if(num%i==0){ // vai divir num pelos i do for
            cont++; // soma 1 no cont caso a divisão seja exata
        }
    }
    if(cont==2) // se o número só teve dois divisores ele é primo
        return true;
    else
        return false;
}
int posicao(int num){ // função que resulta a posição
    int cont = 0, posi = 0;
    for(int i=1; i<= num; i++){
        if(primo(i)==true) // utiliza a função primo como auxiliar
          posi++; // vai resultar a posição que desejamos
    }
    return posi;
}
int auxinverte(int num){ // função auxilar de invertido
    int quanti = 0;
    if(num==0){ // caso o número seja 0
        quanti++;
    }
    else{
        while(num != 0){
            num /= 10; // cindição do while funcionar
            quanti ++; // calcula a quantidade de digitos do número
        }
    }
    return quanti;
}
int invertido(int num){ // função inverter número
    int multi = (auxinverte(num) - 1) ; // usa a função auxiliar de contar digitos - 1
    int versor = 0;

    while(num >= 1){ // uso do while que faz sucessivas divisões e calculando o versor
    versor += ((num%10) * pow(10, multi)); // o versor resulta no número invertido
    num /= 10; // condição para while funcionar
    multi --; // é necessário diminuir o expoente a medida que o número também diminui
    }
    return versor;
}
int produto(int num){ // função que calcula o produto
    int multi = 1;
    if(num == 0) // caso o número seja 0
        multi = 0;
    while(num>=1){
        multi *= (num%10); // através do resto faz sucessivas multiplicações
        num /= 10;
    }
    return multi;
}
int binario(int num){ // função que calcula o binário de um número
    int cont = 0, resp = 0, calc = 0;
    // o binário pode ser obtido por sucessivos num%2, porém ao final é preciso inverter ele
    while(num > 0){
        calc = (calc * 10 ) + (num % 2); // faz a inversão dos termos
        num /= 2; // condição para o while funcionar
        cont++;
    }
    for(int i = cont; i > 0; i--){ // usa o contador anterior como referência
        resp  = (resp * 10) + (calc % 2); // a resposta virá invertida como desejamos
        calc = (calc - (calc % 2))/10;
    }
    return resp;
}
void armazena(int num){ // essa é função que concentra todos os resultados das outras funções
    // aqui se chama as funções em variáveis para melhorar a manipulação
    int contador = 0; // conta se as condições são atendidas para ser Sheldon
    int pos = posicao(num); //chama a função posicao
    int inver = invertido(num); // chama a funcao inverte num
    int posinver = posicao(inver); // chama a função posicao com o num invertido
    int produ = produto(num); // chama a função que realiza o produto
    int normalinver = invertido(posinver); // para verificar se as posições são iguais, inverte o num
    int numbinario = binario(num); // chama o binário do num
    int binarioinver = invertido(numbinario); // detecção se é ou não palíndromo, através da inversão

    if(primo(num)== true){
        cout << "É primo" << endl; // imprime com auxilio da função primo
        contador++; // soma 1 já que atendeu a condição
        cout << "Posição: " << pos << endl; // se for primo imprime a posição
    }
    else{
        cout << "Não é primo" << endl; // imprime com auxilio da função primo
        cout << "Posição: Não é primo, não ocupa posição" << endl; // como não é primo a posição é nula
    }

    cout << "Número invertido: " << inver << endl; // imprime o num invertido

    if(primo(inver)== true){
        cout << "Número invertido é primo" << endl; // imprime com auxilio da função primo
        contador++; // soma 1 já que atendeu a condição
        cout << "Posição número invertido: " << posinver << endl; // se for primo imprime a posição
    }
    else{
        cout << "Número invertido não é primo" << endl; // imprime com auxilio da função primo
        cout << "Posição número invertido: Não é primo, não ocupa posição" << endl; // como não é primo a posição é nula
    }

    if(pos == normalinver){
        cout << "Posições coincidem" << endl; // com o normal invertido verifica se pe igual ao invertido
        contador++; // soma 1 já que atendeu a condição
    }
    else{
        cout << "As posições não coincidem" << endl; // caso as posições não coincidam
    }

    cout << "Produto dos dígitos: " << produ << endl; // imprime o produto dos dígitos

    if(pos == produ){
        cout << "Produto e posição coincidem" << endl; // verifica se posição e produto coincidem
        contador++; // soma 1 já que atendeu a condição
    }
    else{
        cout << "Produto e posição não coincidem" << endl; // caso não coincida
    }

    cout << "Número em binário: " << numbinario << endl;  // imprime o número em binário

    if(numbinario == binarioinver){ // caso o binário seja igual a seu invertido será palíndromo
        cout << "Binário é palíndromo" << endl;
        contador++; // soma 1 já que atendeu a condição
    }
    else{
        cout << "Binário não é palíndromo" << endl; // caso não seja palíndromo
    }

    if(contador == 5){
        cout << "É Sheldon" << endl; // utiliza o contador, se ele resultou em 5, atendeu todas as condições
    }
    else{
        cout << "Não é Sheldon" << endl; // caso não seja Sheldon
    }
}
int main(){
    int num;
    cin >> num;

    armazena(num); // chama a função armazena que concentrou todos os resultados

return 0;
}
