/**********************************************************
- Autor: Augusto N Almeida
- Descri��o: exercicio 1 lista 4
**********************************************************/

#include <iostream>

using namespace std;

int main()
{
    int i = 0; // controla o la�o

    int vet[6]; // declara��o de vetor de 5 posi��es

    int iSoma = 0; // soma os elementos do vetor

    int iContPar = 0; // contagem de n�meros pares

    int iContimpar = 0;  // contagem de n�meros impares




    cout << "\nElementos do vetor: " << endl;
    // imprime o vetor
    for (i = 0; i < 6; i++)
    {
        cout<< "valor :"<<i+1<< endl;
        cin >> vet[i];
    }

    // vetores par

 for (i = 0; i < 6; i++)
 {
     if  (vet[i] % 2 == 0)
    {
     cout << "\nElementos par : " << vet[i] << "\t";
    }

     if  (vet[i] % 2 != 0)
    {
     cout << "\nElementos impar : " << vet[i] << "\t";
    }


 }


    // verifica exist�ncia de n�meros pares no vetor
    for (i = 0; i < 6; i++)
    {
        if (vet[i] % 2 == 0)
        {
            iContPar++;
        }

         if (vet[i] % 2 != 0)
        {
            iContimpar++;
        }
    }

    cout << "\n\nTotal de pares = " << iContPar << endl;
    cout << "\n\nTotal de impar = " << iContimpar << endl;



    return 0;
}
