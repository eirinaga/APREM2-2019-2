/**********************************************************
- Autor:     Thomas Nicolas
- Descri��o: Lista 04 ex 01
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis

    int i = 0;
    int ivet[6];
    int somapar = 0;
    int somaimpar = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

   for (i=0;i<6;i++)
    {
        cout << "insira o " << i << " valor: ";
        cin >>ivet[i];
    }

    system("cls");

    cout << "os numeros pares sao: \n\n";

    for (i=0;i<6;i++)
    {
        if (ivet[i] % 2 == 0)
            {
            cout <<ivet[i] << "\t";
            somapar++;
            }
    }
    cout << "\n\ntotalizando " << somapar << "  valores pares.\n\n";

    cout << "os numeros impares sao: \n\n";

    for (i=0;i<6;i++)
    {
        if (ivet[i] % 2 != 0)
            {
            cout <<ivet[i] << "\t";
            somaimpar++;
            }
    }
    cout << "\n\ntotalizando " << somaimpar << " valores impares.\n\n";

    return 0;
}
