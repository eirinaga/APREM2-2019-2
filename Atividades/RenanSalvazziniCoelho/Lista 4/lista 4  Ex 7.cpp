/**********************************************************
- Autor:     Renan Salvazzini Coelho
- Descri��o: Lista 4 Exerc�cio 7
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    int i = 0; // controla o la�o
    int vet[10]; // declara��o de vetor de 10 n�meros reias
    int iContneg = 0; // contagem de n�meros negativos
    int iContpos = 0; // soma dos n�meros positivos

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");


    // entrada de dados
    for (i = 0; i < 10; i++)
    {
        cout << "Valor " << i + 1 << ": ";
        cin >> vet[i];
    }

     cout << "\nElementos do vetor: " << endl;
    // imprime o vetor
    for (i = 0; i < 10; i++)
    {
        cout << vet[i] << "\t";

      // verifica exist�ncia de n�meros netativos e contar
        if (vet[i] < 0 )
        {
            iContneg++;
        }
       // verificar exist�ncia de n�meros positivos  e somar
        else
        {
            iContpos=iContpos + vet[i];
        }
    }
    cout << "\n\nTotal de negativos = " << iContneg << endl;
    cout << "\n\nSoma de positivos = " << iContpos << endl ;

    return 0;
}



