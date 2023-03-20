//1o. bibliotecas
#include <iostream>
using namespace std;
#include <locale.h>
//3o. constantes
//4o. início do algoritmo
main()
{
	//4o. declaração de variáveis: é necessário criar os"pacotes"
    float vlremprestimo, resultado;
    int numerodesocios;
    //5o. impressão em tela (cout) e acesso via teclado (cin)
    setlocale(LC_ALL,"Portuguese");
    system("color 6");
    cout<<"Digite a seguir o valor do empréstimo: ";
    cin>>vlremprestimo;
    cout<<"Digite o número de sócios de sua empresa: ";
    cin>>numerodesocios;
    if (numerodesocios!=0) //igual -> == e diferente -> !=
    {
        //6o. cálculo e armazenamento do resultado
        resultado = vlremprestimo / numerodesocios;
        //7o. impressão em tela
        cout<<"O valor a ser pago por cada sócio será de "<<resultado << "\n";
    }
    else
    {
        cout << "Nunca dividirás por zero!";
    }
    
}



