/**********************************************************
- Autor:     ramon macedo
- Descri��o: 22. Fa�a um programa que receba a idade e a altura de v�rias pessoas, calcule e mostre a m�dia das alturas
daquelas com mais de 50 anos. Para encerrar a entrada de dados, digite idade menor ou igual a zero
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int i = 0;
    int idade=1;
    int ialt=1;
    int isomaalt=0;
    int ia=0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout<< "para encerrar o programa digite 0 na idade \n";

    while ( idade!=0)
    {
        i++;
        cout << "digite a " << i << "� idade: ";
        cin >> idade;

        if( idade !=0)
            {
            cout << "digite a "<< i << "� altura em centimetros: ";
            cin >> ialt;
        if (idade> 50)
            {
                ia++;
                isomaalt = isomaalt + ialt;

}
}
}
    cout<< "a media das alturas das pessoas com mais de 50 anos �: "<< isomaalt/ia << " centimetro";

    return 0;
}
