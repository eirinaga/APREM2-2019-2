
/**********************************************************
- Autor:     Willian Paixao da Silva
- Descrição: Média de notas
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
    //Declaração de variáveis
    float fNota1 = 0;
    float fNota2 = 0;
    float fNotafinal = 0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite a primeira nota ";
    cin >> fNota1 ;

    cout << "Digite a segunda nota ";
    cin >> fNota2 ;

    fNotafinal = (fNota1 + fNota2) /2;

    if (fNotafinal <= 3)
    {
        cout << "\nMédia final foi " <<fNotafinal << "\nAluno reprovado\n ";

    }
    else if (fNotafinal <= 7)
    {
        cout << "\nMédia final foi " <<fNotafinal << "\nAluno de exame\n ";
    }
    else
    {
        cout << "\nMédia final foi " <<fNotafinal << "\nAluno aprovado\n ";
    }

    cout << fixed << setprecision(2);





    return 0;
}
