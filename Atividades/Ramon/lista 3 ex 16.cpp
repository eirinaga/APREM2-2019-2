/**********************************************************
- Autor:     Ramon Macedo
- Descri��o:
**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis

    int i = 0;
    float idade = 1;
    float itotal = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    while (idade != 0)
    {
        idade = 0;
        cout << "Digite a idade: ";
        cin >> idade;

            if (idade != 0)
               {
                i+=1;
                itotal = idade+itotal;
               }
    } //fim do while

        cout << "A m�dia das idades �: " << (itotal)/i;

    return 0;
} //fim do programa
