/**********************************************************
- Autor:      Lineu Lima
- Descri��o:  Fa�a um programa que preencha um vetor com sete n�meros inteiros, calcule e mostre:
os n�meros m�ltiplos de 2;
os n�meros m�ltiplos de 3;
os n�meros m�ltiplos de 2 e de 3.
**********************************************************/

#include <iostream>

using namespace std;

int main()

{
int i=0, vet[i];

for (i=0;i<7;i++)
{
    cout << "informe o " << i+1 << " numero" << endl;
cin >> vet[i];
}
cout << "Os numeros multiplos de 2 sao: "<< endl;

for (i=0;i<7;i++)
{
if (vet[i]%2==0)
{
cout << vet[i] << endl;
}
}
cout << "Os numeros multiplos de 3 sao: " << endl;
for (i=0;i<7;i++)
{
if (vet[i]%3==0)
{
cout << vet[i] << endl;
}
}
cout << "Os numeros multiplos de 2 e 3 sao: " << endl;
for (i=0;i<7;i++)
{
if (vet[i]%2==0 && vet[i]%3==0)
{
cout << vet[i] << endl;
}
}
}
