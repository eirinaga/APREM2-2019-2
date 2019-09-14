/**********************************************************
- Autor:     Renan Salvazzini Coelho
- Descri��o: Lista 4 Exerc�cio 1
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    int i = 0; // controla o la�o
    int vet[6]; // declara��o de vetor de 6 n�meros inteiros
    int iContpares = 0; // contagem de n�meros pares
    int iContimpares = 0; // contagem de n�meros impares

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");


    // entrada de dados
    for (i = 0; i < 6; i++)
    {
        cout << "Valor " << i + 1 << ": ";
        cin >> vet[i];
    }

     cout << "\nElementos do vetor: " << endl;
    // imprime o vetor
    for (i = 0; i < 6; i++)
    {
        cout << vet[i] << "\t";
    }

     // verifica exist�ncia de n�meros pares e mostra-los
      cout << "\n\nElementos pares: ";
    for (i = 0; i < 6; i++)
    {
        if (vet[i] % 2 == 0 )
        {
            cout << vet[i]<<"\t";
            iContpares++;
        }
    }
       // verificar exist�ncia de n�meros impares e mostr�-los
       cout << "\n\nElementos impares: ";
    for (i = 0; i < 6; i++)
    {
        if (vet[i] % 2 != 0 )
        {
            cout << vet[i]<<"\t";
            iContimpares++;
        }
    }


    cout << "\n\nTotal de pares = " << iContpares << endl;
    cout << "\n\nSoma de positivos = " << iContimpares << endl ;

    return 0;
}
