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
		cout<<"Digite a nota do 1�. Bimestre: ";
		cin>>N1;
		cout<<"Digita a nota do 2�. Bimestre: ";
		cin>>N2;
	
		if((N1<0.0 || N1>10.0) || (N2<0.0 || N2>10.0))
		{
			cout<<"\n\nDigite a nota no intervalo de 0 a 10.";
		}
		else
		{
			media = (N1 + N2) / qtd_notas;
			cout<<"\n\nA m�dia do aluno ser�: "<<media;
			if(media>=6.0 && media<=10.0)
 			{
				cout<<"\n\nAprovado!";
			}
			else
			{
				cout<<"\n\nSubstitutiva - P3.";
			}
		}
		cout<<"\n\nDeseja contituar S/N? ";
		cin>>opcao;
		cout<<"\n";
	}
	while (opcao == 's' || opcao == 'S');
	
	if (opcao == 'n' || opcao == 'N')
	{
		cout<<"\nSe voc� foi aprovado, parab�ns!\n\nSe precisar� fazer a P3, boa sorte!\n";
	}
}
