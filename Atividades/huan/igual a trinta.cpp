**********************************************************
- Autor:     Huan oliveira
- Descri��o:  igual a 30
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int i = 0;
    int vet[15];
    int Num30 = 0;
    int quant30 = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
        for (i = 0; i < 15; i++)
    {
    cout << "Elemento " << i + 1 << ": ";
    cin >> vet[i];
    }

    cout << endl << "   ";
        for (i = 0; i < 15; i++)
    {

        if (vet[i] == 30)
        {

    cout << i + 1 << "  ";

            quant30++;
        }
    }
        if (quant30 == 0)
    {
    cout << "N�o h� elementos iguais a 30";
    }
        else
    {
    cout << " sao os elmentos iguais a 30";
    }

    cout << ".";
    cout << endl << endl;

    return 0;
}


