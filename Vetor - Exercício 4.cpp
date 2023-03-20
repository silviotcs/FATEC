#include <iostream>
#include <locale.h>
using namespace std;

main ()
{
	int V[]={2,18,3,-4,5}, maior=0, i;
	
	setlocale(LC_ALL,"portuguese");
	
	for (i=0;i<5;i++)
	{
		if (V[i]>maior)
		maior=V[i];
	}
	cout<<"O maior valor é "<<maior;		
}
