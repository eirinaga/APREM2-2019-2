/**********************************************************
- Autor:     Thomas Nicolas
- Descri��o: Lista 04 ex 07
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis

    int i = 0;
    int ivet[10];
    int somaposit = 0;
    int somaneg = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

   for (i=0;i<10;i++)
    {
        cout << "insira o " << i+1 << " valor: ";
        cin >>ivet[i];
    }

    system("cls");

    cout << "os numeros negativos sao: \n\n";

    for (i=0;i<10;i++)
    {
        if (ivet[i] < 0)
            {
            cout <<ivet[i] << "\t";
            somaneg++;
            }
    }
    cout << "totalizando " << somaneg << " valores negativos.\n";

    for (i=0;i<10;i++)
    {
        if (ivet[i] >= 0)
            {
            somaposit=somaposit+ivet[i];
            }
    }
    cout << "\n\nE a soma dos valores pares �: " << somaposit << ".\n\n";

return 0;
}
