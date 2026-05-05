#include <iostream>

using namespace std;

int main(){
    /* 
        Variavel do tipo bool ou boleano, são variaveis que só tem dois tipos de saida, as formas representadas são:
        - 0 ou 1
        - true (verdadeiro, representado pelo valor 1) ou false (falso, representado pelo 0)

        Obs: tem saida que exibe o número outros que exibem texto.
        -- caso queira exibir por extenso ao invés de 0 ou 1, para exibir o true ou false, utilize o cout << boolalpha
    */

    cout << boolalpha;

    //cout << (5 > 7); // 0 - false

    //cout << "\n";

    //cout << (5 > 0) << "\n"; // 1 - true


    //Expressoes Booleana

    int idade = 17;
    int maiorIdade = 18;

    // > 17 MAIOR q 18 - false
    cout << idade << " MAIOR Q " << maiorIdade << " = " << (idade > maiorIdade) << "\n\n";

    // < 17 MENOR q 18 - true
    cout << idade << " MENOR Q " << maiorIdade << " = " << (idade < maiorIdade) << "\n\n";

    // ==  17 IGUAL a 18 - false
    cout << idade << " IGUAL A " << maiorIdade << " = " << (idade == maiorIdade) << "\n\n";

    // >=
    cout << idade << " MAIOR IGUAL A " << maiorIdade << " = " << (idade >= maiorIdade) << "\n\n";
    
    //<= 
    cout << idade << " MENOR IGUAL A " << maiorIdade << " = " << (idade <= maiorIdade) << "\n\n";

    

    return 0;
}
