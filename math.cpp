#include <iostream>
#include <cmath>

using namespace std;

int main(){

    /*
        Em c++, podemos utilizar a biblioteca cmath para poder trabalharmos com as principais funções matemáticas.
        - max (maior valor) (sem biblioteca)
        - min (menor valor) (sem biblioteca)
        - sqrt (raiz quadrada)
        - round (arredondamento de numeros)
        - log (logaritmo natual)

        Saiba mais: https://www.w3schools.com/CPP/cpp_math.asp
    */

    //Funcionalidade max(), ela retorna o maior valor. Recebe somente dua entradas, valor1 & valor2
    cout << "Maior valor: " << (max(32,26));

    cout << "\n";


    //Funcionalidade min(), ela retorna o menor valor. Recebe somente dua entradas, valor1 & valor2
    cout << "Menor valor: " << min(-2.67894, 2.34564);

    cout << "\n";


    //sqrt - vai retornar a raiz quadrada do valor inserido
    cout << sqrt(64);

    cout << "\n";


    //round - função utilizada para arredondar numero
    cout << round(2.99999);

    cout << "\n";


    // log - logaritmo natural
    cout << log(2);

    return 0;
}