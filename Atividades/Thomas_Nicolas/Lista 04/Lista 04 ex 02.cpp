/**********************************************************
- Autor:     Thomas Nicolas
- Descri��o: Lista 04 ex 02
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis

    int i = 0;
    int ivet[7];

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

   for (i=0;i<7;i++)
    {
        cout << "insira o " << i << " valor: ";
        cin >>ivet[i];
    }

    system("cls");

    cout << "os numeros multiplos de 2 sao: \n\n";

    for (i=0;i<7;i++)
    {
        if (ivet[i] % 2 == 0)
            {
            cout <<ivet[i] << "\t";
            }
    }

    cout << "\n\nos numeros multiplos de 3 sao: \n\n";

    for (i=0;i<7;i++)
    {
        if (ivet[i] % 3 == 0)
            {
            cout <<ivet[i] << "\t";
            }
    }
    cout << "\n\nos numeros multiplos de 2 e 3 sao: \n\n";

    for (i=0;i<7;i++)
    {
        if (ivet[i] % 2 == 0 && ivet[i] % 3 == 0)
            {
            cout <<ivet[i] << "\t";
            }
    }
    return 0;
}
