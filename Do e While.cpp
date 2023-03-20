#include <iostream>
#include <locale.h>
using namespace std;
#define qtd_notas 2

main()
{
	float N1, N2, media;
	char opcao;
	
	do 
	{
		setlocale (LC_ALL,"Portuguese");
		do
		{
			cout<<"Digite a nota do 1º. Bimestre: ";
			cin>>N1;
		}
		while (N1<0.0 || N1>10.0);
		do
		{
			cout<<"Digita a nota do 2º. Bimestre: ";
			cin>>N2;
		}
		while (N2<0.0 || N2>10.0);	
	
		media = (N1 + N2) / qtd_notas;
		cout<<"\n\nA média do aluno será: "<<media;
		if(media>=6.0)
 		{
			cout<<"\n\nAprovado!";
		}
		else
		{
			cout<<"\n\nSubstitutiva - P3.";
		}
		do
		{
			cout<<"\n\nDeseja contituar S/N? ";
			cin>>opcao;
			cout<<"\n";
		}
		while (opcao != 's' && opcao != 'S' && opcao != 'n' && opcao != 'N');
	}
	while (opcao == 's' || opcao == 'S');
}
