/**********************************************************
- Autor:     Huan oliveira
- Descri��o: par e impar
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int i = 0;
    int vet[6];
    int iContPar = 0;
    int iContImp = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
        for (i = 0; i < 6; i++)
    {
        cout << "Valor " << i << ": ";

        cin >> vet[i];
    }

    for (i = 0; i < 6; i++)
    {
        cout << vet[i]<<"\t";
        if (vet[i] % 2 == 0)
        {
            iContPar++;
        }

        if (vet[i] % 2 != 0)
        {
            iContImp++;
        }
    }

    cout << "\n\nTotal de numeros pares: " << iContPar << endl;
    cout << "\n\nTotal de numeros �mpares: "<< iContImp << endl;
}


