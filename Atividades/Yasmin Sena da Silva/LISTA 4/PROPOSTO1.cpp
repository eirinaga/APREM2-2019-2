/**********************************************************
- Autor:     Yasmin Sena da Silva
- Descri��o: proposto 1
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
    int icontpar=0;
    int icontimpar=0;
    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Informe 6 n�meros:  " <<endl;

   for (i = 0; i < 6; i++)
    {
        cout << "O " << i + 1 << "� valor: ";
        cin >> vet[i];
    }

    cout << "os elementos do vetor s�o: \n";

    for (i = 0; i < 6; i++)
    {
        cout << vet[i] <<"\t";

    }

    cout << "\n\nOs n�meros pares s�o:\n ";
    for (i = 0; i < 6; i++)
    {
    if (vet[i]%2==0)
    {
      cout << vet[i] <<"\t";
      icontpar++;
    }
    }
    cout<< "\nExistem "<< icontpar << " elementos pares.\n";

    cout << "\nOs n�meros �mpares s�o: \n";
    for (i = 0; i < 6; i++)
    {
    if (vet[i]%2!=0)
    {
      cout << vet[i]<<"\t";
      icontimpar++;
    }
    }
    cout<< "\nExistem "<< icontimpar << " elementos �mpares.";

    return 0;
}
