/**********************************************************
- Autor:     ramon macedo
- Descri��o: 5. Fa�a um programa que mostre as tabuadas dos n�meros de 1 a 10.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
int i = 0;
int inum = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
cout << "digite o numero que quer saber a tabuada: ";
cin >> inum;


while ( i < 11)
{
    cout << inum << " x " << i << " = "<< inum*i<< endl;
    i +=1;
}

    return 0;
}
