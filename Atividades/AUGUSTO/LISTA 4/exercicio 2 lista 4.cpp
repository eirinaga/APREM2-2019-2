/**********************************************************
- Autor: Augusto N Almeida
- Descri��o: exercicio 2 lista 4
**********************************************************/

#include <iostream>

using namespace std;

int main()
{
    int i = 0; // controla o la�o

    int vet[7]; // declara��o de vetor de 5 posi��es

    int iSoma = 0; // soma os elementos do vetor



    cout << "\nElementos do vetor: " << endl;
    // imprime o vetor
    for (i = 0; i < 7; i++)
    {
        cout<< "valor :"<<i+1<< endl;
        cin >> vet[i];
    }

    // vetores par

 for (i = 0; i < 7; i++)
 {
     if  (vet[i] % 2 == 0)
    {
     cout << "\nElementos multiplos de 2 : \n" << vet[i] << "\t" <<endl;
    }

     if  (vet[i] % 3 == 0)
    {
     cout << "\nElementos multiplos de 3 : \n " << vet[i] << "\t"<<endl;
    }
  if  (vet[i] % 3 == 0 && vet[i] % 2 == 0)
    {
     cout << "\nElementos multiplos de 2 e 3 : \n " << vet[i] << "\t"<<endl;
    }


 }



    return 0;
}
