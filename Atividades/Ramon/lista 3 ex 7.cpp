/**********************************************************
- Autor:     Ramon Macedo
- Descri��o:  L3 Ex 7
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int i = 0;
    int iIdade = 0;
    float fAlt = 0;
    float fPeso = 0;
    int iMaior50 = 0;
    int iMed = 0;
    float fSAlt =0;
    int iPes40 = 0;
    int iPessoa = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

cout << " Quantas pessoas voc� ir� avaliar? ";
cin >> iPessoa;



    while ( i < iPessoa )

    {

        cout << " Qual a idade da pessoa " << i + 1 << "? ";
        cin >> iIdade;

        cout << " Qual � o peso? ";
        cin >> fPeso;

        cout << " E a altura? ";
        cin >> fAlt;

        i++;

        if ( iIdade > 9 && iIdade < 21)
        {
            iMed +=1;
            fSAlt += fAlt;
        }

        if (iIdade > 50)
        {
            iMaior50 += 1;
        }

        if (fPeso < 40)
        {
          iPes40 += 1;
        }
    }

    system ("cls");

    cout << "A quantidade de pessoas com mais de 50 anos � de "
         << iMaior50
         << endl;

    cout << "A m�dia das alturas das pessoas com idade entre 10 e 20 anos � de  "
         << fSAlt/iMed
         << " metros."
         << endl;

     cout << (iPes40 * 100)/iPessoa
          << " % das pessoas tem menos que 40 Kg."
          << endl;


    return 0;
}
