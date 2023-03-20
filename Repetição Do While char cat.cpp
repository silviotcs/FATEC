#include <iostream>
using namespace std;

main()
{
	char cat;
	do
	{
		cout<<"Digite a categoria: ";
		cin>>cat;
		if(cat!='F' && cat!='f' && cat!='M' && cat!='m')
		{
			cout<<"Categoria incorreta, digite F/M\n";
		}
	}
	while(cat!='F' && cat!='f' && cat!='M' && cat!='m');
	if(cat=='F'||cat=='f')
	{
		cout<<"Feminino";
	}
	else
	{
		cout<<"Masculino";
	}
}
