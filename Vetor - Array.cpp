#include <iostream>
#include <locale.h>
using namespace std;

main()
{
	float val[5], soma;
	int contagem;
	
	soma=0.0;
	contagem=0;
	
	setlocale(LC_ALL,"Portuguese");
	
	while (contagem<5)
	{
		cout<<"Digite o "<<contagem+1<<"o. n�mero: ";
		cin>>val[contagem];
		soma=soma+val[contagem];
		contagem++;
	}
	cout<<"O resultado da soma �: "<<soma<<"\n";
	
	for (contagem=0;contagem<5;contagem++)
	{
		cout<<"val["<<contagem<<"]="<<val[contagem]<<"\n";
	}
}
