#include <iostream>
#include <string>

using namespace std;


int main() {

    /*
        Estrutura if e else, elseif

        Criar uma variavel chamado marcaCarro, para armazenar a marca do carro, verificar se a marca é igual a:
        - Volvo

    */

    string marcaCarro = "";

    cout << "Digite uma marca de carro:" << endl;
    getline(cin, marcaCarro);

    
    //Verificação 1
    if(marcaCarro == "volvo")
        cout << "A marca digitada e igual a Volvo" << endl;
    else 
        cout << "Marca de carro nao correspondente" << endl;

    
    //verificação 2
    if(marcaCarro == "toyota")
        cout << "A marca digitada e igual a Toyota" << endl;
    else if(marcaCarro == "mazda")
        cout << "Marca de carro mAZDA" << endl;
    else
        cout << "Nenhuma";


    
    return 0;
}