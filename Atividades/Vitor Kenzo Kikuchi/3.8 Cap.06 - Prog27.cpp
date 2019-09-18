/**********************************************************
- Autor:      Vitor Kenzo Kikuchi
- Descri��o:  Exerc�cio 06 - Programa que determina o valor que 10 vendedores recebem com a comiss�o. Al�m do total de todas as vendas.
**********************************************************/

#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <string>

using namespace std;

int main()
{

 int i = 0;
 string snome[10];
 int iVendas[10];
 int iComissao[10];
 float ftotal = 0;

 //configur��o da tela de sa�da

 setlocale (LC_ALL,"");
 system("color F1");

 //C�digo do programa

 for (i=0; i<10; i++)
 {

 cout << "\nQual � o nome do " << i+1 << "� vendedor? ";
 cin  >> snome[i];

 }

 system("cls");

 for (i=0; i<10; i++)
 {

 cout << "\nQual � o valor total das vendas do(a) " << snome[i] << "? ";
 cin  >> iVendas[i];

 }

 system ("cls");

 for (i=0; i<10; i++)
 {

 cout << "\nQual � o percentual de comiss�o do(a) " << snome[i] << "? ";
 cin  >> iComissao[i];

 }

 system ("cls");

 for (i=0; i<10; i++)
 {

 cout << "\n" << snome[i] << " tem direito a " << iVendas[i]*(iComissao[i]/100.0) << " a mais no sal�rio." << endl;

 }

 for (i=0; i<10; i++)
 {
 ftotal = ftotal + iVendas[i];
 }

 cout << "\n\nSomando todas as vendas, temos o valor total de " << ftotal << " reais." << endl;

 }
