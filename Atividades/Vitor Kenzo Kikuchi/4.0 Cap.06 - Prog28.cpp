/**********************************************************
- Autor:     Vitor Kenzo Kikuchi
- Descri��o: Exerc�cio 06 - Este programa determina a materia em que 15 alunos est�o matriculados
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

main()
{
    int i = 0;
    int iOpcao[15];
    string snome[15];
    int iSomaLog = 0;
    int iSomaProg = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    while (i<15)
    {

        system("cls");
    cout << "\nQual � seu nome? ";
    cin  >> snome[i];

    cout << "Est� cursando qual mat�ria? Linguagem (1) ou L�gica (2) de programa��o? ";
    cin  >> iOpcao[i];

    if (iOpcao[i] == 1)
    {
    iSomaProg += 1;
    }
    else if (iOpcao[i] == 2)
    {
    iSomaLog += 1;
    }

    i+=1;

    }

    system("cls");

    cout << "\n\nOs alunos cursando linguagem de programa��o s�o: \n" << endl;

    for (i=0; i<15; i++)
    {
    if (iOpcao[i]==1)
    {
    cout << snome[i] << "\t";
    }
    }

    cout << "\n\nTotal: " << iSomaProg << endl;

    cout << "\n\nOs alunos em L�gica de programa��o s�o: \n" << endl;

    for (i=0; i<15; i++)
    {
    if (iOpcao[i]==2)
    {
    cout << snome[i] << "\t";
    }
    }

    cout << "\n\nTotal: " << iSomaLog << endl;


    return 0;
}
