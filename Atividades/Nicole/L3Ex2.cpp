/**********************************************************
- Autor:    Nicole Oska
- Descrição: L3 Ex 2
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;

main()
{
    int i = 0;
    float fPreco = 5.00;
    int iIngressos = 120;

    setlocale(LC_ALL,"");
    system("color F1");

    while (i < 9)
    {
        system("cls");
    cout << "\nCom o preço do ingresso em R$"
         << fPreco
         << ", \no total de ingressos que devem ser vendidos é de "
         << iIngressos
         << ". \nO lucro seria de R$"
         << ( fPreco * iIngressos ) - 200
         << ".\n\n"
         << endl;

         i += 1;
         fPreco -= 0.50;
         iIngressos += 26;

         system("pause");
    } // fim do laço
} // fim do main
