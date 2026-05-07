#include <iostream>

using namespace std;

int main() {

    /*
        Exercícios simples para praticar IF e operadores lógicos

        1 - Criar uma variável do tipo INT chamada IDADE e armazenar o valor 25.
        2 - Verificar se idade é igual a 18.
        3 - Verificar se idade é maior que 18.
        4 - Verificar se idade é menor que 18.
        5 - Verificar se idade é diferente de 18.
        6 - Verificar se idade está entre 18 e 60 anos.
        7 - Verificar se idade é menor que 18 ou maior que 60.
        
    */

    //1 - Criar uma variável do tipo INT chamada IDADE e armazenar o valor 25.
    int idade = 25;

    //2 - Verificar se idade é igual a 18.
    if(idade == 18)
        cout << "Idade igual a 18" << endl;

    //3 - Verificar se idade é maior que 18.
    if(idade > 18)
        cout << "Idade maior que 18" << endl;

    //4 - Verificar se idade é menor que 18.
    if(idade < 18)
        cout << "Idade menor que 18" << endl;

    //5 - Verificar se idade é diferente de 18.
    if(idade != 18)
        cout << "Idade diferente de 18" << endl;

    //6 - Verificar se idade está entre 18 e 60 anos.
    if(idade >= 18 && idade <= 60)
        cout << "Idade entre 18 e 60" << endl;

    //7 - Verificar se idade é menor que 18 ou maior que 60.
    if(idade < 18 || idade > 60)
        cout << "Idade menor que 18 ou maior que 60" << endl;
        
    return 0;
}