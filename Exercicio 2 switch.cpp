#include <iostream>
#include <locale.h>
using namespace std;

main ()
{
	char operacao, opcao;
	float n1, n2, resultado;
	
	do
	{
		setlocale(LC_ALL,"Portuguese");
		cout<<"Digite o primeiro valor da opera��o: ";
		cin>>n1;
		cout<<"Digite o segundo valor da opera��o: ";
		cin>>n2;
		cout<<"\nDigite a seguir (+) para somar, (-) para subtrair, (*) para multiplicar e (/) para dividir: ";
		cin>>operacao;
	
		switch(operacao)
		{
			case '+': 
				resultado = n1+n2;
				cout<<"\nO resultado da soma �: " <<resultado; 
				break;
			case '-':
				resultado = n1-n2;
				cout<<"\nO resultado da subtra��o �: " <<resultado;	
				break;
			case '*':
				resultado = n1*n2;
				cout<<"\nO resultado da multiplica��o �: " <<resultado;
				break;
			case '/':
				if (n2!=0)
				{
					resultado = n1/n2;
					cout<<"\nO resultado da divis�o �: " <<resultado;
				}
				else 
				{
					cout<<"\nNunca dividir�s por 0.";
				}	
				break;
			default: cout<<"\n" <<"Digite uma op��o v�lida.";
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
