/**********************************************************
- Autor:      Lineu Lima
- Descri��o:  Fa�a um programa que preencha um vetor com quinze elementos inteiros e verifique a exist�ncia de elementos
iguais a 30, mostrando as posi��es em que apareceram.
**********************************************************/

#include <iostream>

using namespace std;

int main()
{
int i=0,vet[i];
for (i=0;i<15;i++)
{
cout << "Digite o " << i+1 << " numero" << endl;
cin >> vet[i];
}
    cout << "As posicoes dos numeros iguais a 30 sao: ";
for (i=0;i<15;i++)
{

    if (vet[i]==30)
       {
           cout << i+1 << ";";
       }
}
}
