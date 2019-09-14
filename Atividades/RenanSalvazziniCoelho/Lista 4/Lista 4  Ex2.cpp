/**********************************************************
- Autor:     Renan Salvazzini Coelho
- Descri��o: Lista 4 Exerc�cio 2
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    int i = 0; // controla o la�o
    int vet[7]; // declara��o de vetor de 7 n�meros


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");


    // entrada de dados
    for (i = 0; i < 7; i++)
    {
        cout << "Valor " << i + 1 << ": ";
        cin >> vet[i];
    }

     cout << "\nElementos do vetor: " << endl;
    // imprime o vetor
    for (i = 0; i < 7; i++)
    {
        cout << vet[i] << "\t";
    }

     // verifica exist�ncia de n�meros multiplos de 2
      cout << "\n\nElementos multiplos de 2: ";
    for (i = 0; i < 7; i++)
    {
        if (vet[i] % 2 == 0 )
        {
            cout << vet[i]<<"\t";
        }
    }
       // verificar exist�ncia de n�meros multiplos de 3
       cout << "\n\nElementos multiplos de 3: ";
    for (i = 0; i < 7; i++)
    {
        if (vet[i] % 3 == 0 )
        {
            cout << vet[i]<<"\t";
        }
    }
           // verificar exist�ncia de n�meros multiplos de 2 e 3
       cout << "\n\nElementos multiplos de 2 e 3: ";
    for (i = 0; i < 7; i++)
    {
        if (vet[i] % 3 == 0 && vet[i] % 2 == 0 )
        {
            cout << vet[i]<<"\t";
        }
    }
    return 0;
}
