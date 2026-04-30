#include <iostream>
#include <string>

using namespace std;

int main(){

    /*
        Variaveis do tipo string, são utilizadas para armazenar textos ou caracteres.
        Para poder utilizar variavel do tipo string, precisa incluir no cabeçalho a biblioteca <string>.

        <iostream> => para poder utilizar o cout (c-out //saida c);
        <string> => para poder utilizar variavel do tipo string;

        Concatenar, utilize o + ou o .append()
        comprimento da string, utiliza o length()
    */

    string frase = "Um homem forte defende a si mesmo. Um homem mais forte defende os outros - O Segredo dos Animais";

    // cout << frase;

    // CONCATENAÇÃO

        /*
            O operador + pode ser usado entre strings para somá-las e formar uma nova string, chamamos isso de concatenação.
            - Lembre-se de adicionar um espaço quando utilizar duas string, para elas não ficarem grudadas.

            Também, podemos adicionar o valor da variavel na outra utilizando append(), o efeito é o mesmo, quando se trata de strings.
        */

        string nome, sobrenome, ultimoSobrenome, nomeCompleto = "";

        nome = "Joao";
        sobrenome = "Victor";
        ultimoSobrenome = "Camargo";

        // cout << "Meu nome e: " + nome + " " + sobrenome;

        nomeCompleto = nome + " " + sobrenome;

        nomeCompleto.append(" " + ultimoSobrenome);

        // cout << nomeCompleto;



    //COMPRIMENTO | LENGTH ou SIZE

        /*
            Variaveis do tipo length possuim uma função chamada lenght(), utilizada para contar o tamanho dela. 
            ATENÇÃO: length(), ele contabiliza o espaço, e os caracteres com acentuação como 2; Ex.: Joao = 4, João = 5
        */

        string meuNome = "João";

        // cout << meuNome.length();



    //CADEIAS DE ACESSO

        /*
            A string, é como se fosse uma caixa com varias partições, quando exibimos o conteúdo, apenas é ignorado essas partições 
            e exibida ao todo, mas podemos acessar essas partições uma a uma. Isso é chamado de cadeia de acesso, ou, acessar o indice
            da string.

            string nome = "Joao"; => string armazena desse jeito: 0:j, 1:o, 2:a, 3:o;
        */

        /*
            A string carro fica assim:
            0:B, 1:M, 2:W, 3: , 4:3, 5:2, 6:0, 7:I

            também podemos alterar o indice
        */
        string carro = "BMW 320I";

        // cout << carro[1]; //Explicação:  Saida da string sera: M
        // cout << carro[carro.length() - 2]; //Explicação: saida sera: a string contem 8 indices - 2 que resulta no indice 6:0
        carro[7] = 'J'; //Alterar o I do 320I para J
        
        // cout << carro;

    return 0;
}




