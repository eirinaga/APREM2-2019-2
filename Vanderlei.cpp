/**********************************************************
- Autor:   vanderlei natanael 
- Descrição: subtração de números
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

    int iNumero1 = 0;
    int iNumero2 = 0;
    int iSub = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "digite o número 1: ";
    cin >> iNumero1;

    cout << "digite o número 2: ";
    cin >> iNumero2;

    cout << "resultado: " << iNumero1 - iNumero2;
    return 0;
}
