#include <iostream>
using namespace std;

main ()
{
	int op;
	
	do 
	{
		cout<<"1 - Saque, ";
		cout<<"2 - Saldo ou ";
		cout<<"3 - Extrato: ";
		cin>>op;
		if(op<1||op>3)
		{
			cout<<"\nOpcao invalida! Informe opcao de 1 a 3.\n\n";
		}
	}
	while(op<1||op>3);
}
