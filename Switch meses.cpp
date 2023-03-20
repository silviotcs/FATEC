#include <iostream>
#include <locale.h>
using namespace std;

main (){
	int s;
	char opcao;
	
	do
	{
		setlocale(LC_ALL,"Portuguese");
		cout<<"Digite o mês do ano (1 a 12): ";
		cin>>s;
		switch (s)
		{
			case 1: cout<<"\nJaneiro."; break;
			case 2: cout<<"\nFevereiro."; break;
			case 3: cout<<"\nMarço."; break;
			case 4: cout<<"\nAbril."; break;
			case 5: cout<<"\nMaio."; break;
			case 6: cout<<"\nJunho."; break;
			case 7: cout<<"\nJulho."; break;
			case 8: cout<<"\nAgosto."; break;
			case 9: cout<<"\nSetembro."; break;
			case 10: cout<<"\nOutubro."; break;
			case 11: cout<<"\nNovembro."; break;
			case 12: cout<<"\nDezembro."; break;
			default: cout<<"\nInválido.";
		}
		do
		{
			cout<<"\n\nDeseja contituar S/N? ";
			cin>>opcao;
			cout<<"\n\n";
		}
		while (opcao != 's' && opcao != 'S' && opcao != 'n' && opcao != 'N');
	}
	while (opcao == 's' || opcao == 'S');
}
