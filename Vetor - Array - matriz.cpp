#include <iostream>
#include <locale.h>
using namespace std;

main()
{
	float val[2][2], soma;
	int linha, coluna;
	
	setlocale(LC_ALL,"Portuguese");
	
	soma=0.0;
	linha=0;
	while (linha<2)
	{
		coluna=0;
		while(coluna<2)
		{
			cout<<"Digite a linha "<<linha<<" e a coluna "<<coluna<<" = ";
			cin>>val[linha][coluna];
			soma=soma+val[linha][coluna];
			coluna++;	
		}
		linha++;
	}
	cout<<"O resultado da soma é: "<<soma<<"\n";
	
	for (linha=0;linha<2;linha++)
	{
		for (coluna=0;coluna<2;coluna++)
		{
			cout<<"val["<<linha<<"]["<<coluna<<"]="<<val[linha][coluna]<<"\n";
		}
	}
}
