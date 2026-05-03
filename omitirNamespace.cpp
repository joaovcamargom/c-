#include <iostream>
#include <string>

//using namespace std;


int main(){

    /*
        Omitindo o espaço de nomes
        Você pode encontrar alguns programas em C++ que são executados sem a biblioteca 
        de namespaces padrão. A using namespace stdlinha pode ser omitida e substituída pela 
        std palavra-chave `_`, seguida pelo ::operador `for` para objetos string`_` e `_`:cout 
    */

    std::string nome = "Joao Camargo";

    std::cout << nome;

    return 0;
}