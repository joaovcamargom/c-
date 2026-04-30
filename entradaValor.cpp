#include <iostream>
#include <string>

using namespace std;


int main(){

    /*
        cout (c-out | c-saida) serve para exibir algo, mas permitir o usuário digitar um valor e armazenar ele, utiliza-se
        o cin (c-in |c-entrada).

        Lembre-se: cin guarda só o primeiro valor. Para guardar o valor por inteiro use a função getline()
    */

    //cin

    string nomeCompleto = "";

    cout << "Digite o seu nome completo: \n"; //Se a entrada for joao camargo
    //cin >> nomeCompleto; // somente vai guardar o joao
    getline(cin, nomeCompleto); // guarda o nome completo
    
    cout << nomeCompleto;

    return 0;
}