#include <iostream>
#include <locale.h>
using namespace std;

main ()
{
	int V[5]={2,2,2,2,2}, soma=0, i;
	
	setlocale(LC_ALL,"portuguese");
	
	for (i=0;i<5;i++)
	{
	soma=soma+V[i];
	}
	cout<<"A soma dos elementos do vetor é "<<soma;		
}
