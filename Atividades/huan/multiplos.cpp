/**********************************************************
- Autor:     Huan oliveira
- Descri��o: m�ltiplos
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int i = 0;
    int vet[7] = {1,2,3,4,5,6,7};
    int iMtp2 = 0;
    int iMtp3 = 0;
    int iMtp6 = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << "\n Elementos do ver: " << endl;
        for (i=0; i < 7; i++)
{
    cout << vet[i] << "\n";

        if (vet[i] % 2 == 0)
        {
            iMtp2++;
        }

        if (vet[i] % 3 == 0)
        {
            iMtp3++;
        }

        if (vet[i] % 2 == 0 && vet[i] % 3 == 0)
        {
            iMtp6++;
        }
        }

    cout << "\n\n\n Os n�meros m�ltiplos de 2 s�o:  " << endl;
    cout << "1; ";

        for (i = 0; i < 7; i++)
        {
        if (vet[i] % 2 == 0)
        {
    cout << vet[i] << "; ";
        }
        }
    cout << "\n\n Os n�meros m�ltiplos de 3 s�o:  " << endl;
    cout << "1; ";

        for (i = 0; i < 7; i++)
        {
        if (vet [i] % 3 == 0)
        {
    cout << vet[i] << "; ";
        }
        }

    cout << "\n\n Os n�meros m�ltiplos de 2 e de 3 s�o:  " << endl;
    cout << "1; ";

        for (i = 0; i < 7; i++)
        {
        if (vet[i] % 2 == 0 && vet[i] % 3 == 0)
        {
    cout << vet[i] << "; ";
        }

    }


    return 0;
}



