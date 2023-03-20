#include <iostream>
#include <locale.h>
using namespace std;

main()
{
	float nota;
	char opcao;
	do
	{
		setlocale (LC_ALL,"Portuguese");
		do
		{
			cout<<"Digite sua nota: ";
			cin>>nota;
		}
		while (nota<0.0 || nota>10.0);
	
		if(nota>=0.0 && nota<=2.9)
 		{
			cout<<"\nConceito: E";
		}
		else if(nota>=3.0 && nota<=4.9)
		{
			cout<<"\nConceito: D";
		}
		else if(nota>=5.0 && nota<=6.9)
		{
			cout<<"\nConceito: C";
		}
		else if(nota>=7.0 && nota<=8.9)
		{
			cout<<"\nConceito: B";
		}
		else if(nota>=9.0 && nota<=10.0)
		{
			cout<<"\nConceito: A\n";
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
