#include <iostream>

using namespace std;

int main(){
    /*
    Este exercício é para aprender sobre:
    - operadores aritmético;
    - operador de atribuição;
    - operador lógico

    Operadores - Operadores são utilizados para realizar operações matemáticas comuns. São eles:

    + - Adição
    - - subtração
    * - multiplicação
    / - divisão
    % - modulo (restante)
    ++ - incremento 
    -- - decremento

    Obs: Tanto o inccremento quanto o decremento, podem ser antes ou depois. Ex.: ++valor1 ou valor1++ 

    Operador de atribuição:

    = - operador recebe
    += - adicione e receba
    -= - subtraia e receba
    *= - multiplique e receba
    /= divide e recebe
    %= módulo e receba
    &= AND receba
    |= OR receba
    ^= ao quadrado receba
    >>= maior receba
    << menor receba

    =>  Em vez de escrever x = x + 5;, você pode simplesmente escrever x += 5;

    Operadores de comparação:

    == - Igual
    != - not 
    >= - maior
    <= - menor
    >= - maior igual
    <= - menor igual
    */


// ==== Exercício 1

    int valor1 = 10, valor2 = 2;

    //Adição
    cout << "Adicao: " << valor1 << " + " << valor2 << " = " << valor1 + valor2 << "\n";

    //subtração
    cout << "Subtracao: " << valor1 << " - " << valor2 << " = " << valor1 - valor2 << "\n";
    
    //multiplicação
    cout << "Multiplicacao: " << valor1 << " * " << valor2 << " = " << valor1 * valor2 << "\n";
    
    //divisão
    cout << "Divisao: " << valor1 << " / " << valor2 << " = " << valor1 / valor2 << "\n";
    
    //módulo
    cout << "Modulo: " << valor1 << " % " << valor2 << " = " << valor1 % valor2 << "\n";
    
    //incremento
    cout << "Incremento ++[variavel]: " << ++valor1 << "\n";
    cout << "Incremento [variavel]++: " << valor1++ << "\n";
    
    //decremento
    cout << "Decremento --[variavel]: " << --valor1 << "\n";
    cout << "Decremento [variavel]--: " << valor1-- << "\n";

    
// ==== Exercício 2

    int valorX = 10, valorY = 5;
 
    //recebe
    cout << "= : " << valorX << " = " << valorY << " = " << (valorX = valorY) << "\n";
    cout << "+= : " << valorX << " += " << valorY << " = " << (valorX += valorY) << "\n";
    cout << "-= : " << valorX << " -= " << valorY << " = " << (valorX -= valorY) << "\n";
    cout << "*= : " << valorX << " *= " << valorY << " = " << (valorX *= valorY) << "\n";
    cout << "/= : " << valorX << " /= " << valorY << " = " << (valorX /= valorY) << "\n";
    cout << "%= : " << valorX << " %= " << valorY << " = " << (valorX %= valorY) << "\n";
    cout << ">>= : " << valorX << " >>= " << valorY << " = " << (valorX >>= valorY) << "\n";
    cout << "<<= : " << valorX << " <<= " << valorY << " = " << (valorX <<= valorY) << "\n";


// ==== Exercício 3

    int idade = 17, maiorIdade = 18;

    cout << (idade == maiorIdade); //idade não é IGUAL a maiorIdade, resultando em falso (0)
    cout << (idade != maiorIdade); //Idade é DIFERENTE de maiorIdade, resultando em true (1)
    cout << (idade > maiorIdade); //idade não é MAIOR a maiorIdade, resultando em falso (0)
    cout << (idade < maiorIdade); //idade é MENOR a maiorIdade, resultando em true (1)
    cout << (idade >= maiorIdade); //idade não é MAIOR OU IGUAL a maiorIdade, resultando em falso (0)
    cout << (idade <= maiorIdade); //idade é MENOR OU IGUAL a maiorIdade, resultando em true (1)



    
    return 0;
}