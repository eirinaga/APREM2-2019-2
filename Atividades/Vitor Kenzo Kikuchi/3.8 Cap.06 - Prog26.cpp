/**********************************************************
- Autor:      Vitor Kenzo Kikuchi
- Descri��o:  Exerc�cio
**********************************************************/

#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

int main()
{
    int i = 0;
    int inum[10];


    setlocale(LC_ALL,"");
    system ("Color F1");

    for (i=0; i<10; i+=1)
    {
    cout << "\nDigite o " << i+1 << "� n�mero: ";
    cin  >> inum[i];
    }

    system("cls");

    cout << "\n\n\t\tN�meros pares: \n" << endl;

    for (i=0; i<10; i++)
    {
        if (inum[i]%2 == 0)
        cout << inum[i] << "\t";
    }

    cout << "\n\n\t\tN�meros impares: \n" << endl;

    for (i=0; i<10; i++)
    {
        if (inum[i]%2 != 0)
        cout << inum[i] << "\t";
    }

    cout << "\n\n" << endl;

    return 0;

}



