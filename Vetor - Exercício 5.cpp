#include <iostream>
#include <locale.h>
using namespace std;

main ()
{
	int V[5]={2,2,2,2,2}, N[3]={4,4}, somaV=0, somaN=0, soma, i;
	
	setlocale(LC_ALL,"portuguese");
	
	for (i=0;i<5;i++)
	{
	somaV=somaV+V[i];
	}
	for (i=0;i<3;i++)
	{
	somaN=somaN+N[i];
	}
	soma=somaV+somaN;
	cout<<"A soma dos vetores V e N é "<<soma;	
}
