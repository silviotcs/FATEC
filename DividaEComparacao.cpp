//1o. bibliotecas
#include <iostream>
using namespace std;
#include <locale.h>
//3o. constantes
//4o. in�cio do algoritmo
main()
{
	//4o. declara��o de vari�veis: � necess�rio criar os"pacotes"
    float vlremprestimo, resultado;
    int numerodesocios;
    //5o. impress�o em tela (cout) e acesso via teclado (cin)
    setlocale(LC_ALL,"Portuguese");
    system("color 6");
    cout<<"Digite a seguir o valor do empr�stimo: ";
    cin>>vlremprestimo;
    cout<<"Digite o n�mero de s�cios de sua empresa: ";
    cin>>numerodesocios;
    if (numerodesocios!=0) //igual -> == e diferente -> !=
    {
        //6o. c�lculo e armazenamento do resultado
        resultado = vlremprestimo / numerodesocios;
        //7o. impress�o em tela
        cout<<"O valor a ser pago por cada s�cio ser� de "<<resultado << "\n";
    }
    else
    {
        cout << "Nunca dividir�s por zero!";
    }
    
}



