#include <iostream>
using namespace std;
#define N 5

main() 
{
	int X[N], A, i, contA=0;
	
	cout<<"Digite o valor de A: ";
	cin>>A;
	cout<<"\n";
	
	for (i=0;i<N;i++)
	{
		cout<<"Digite um numero: ";
        cin>>X[i];
	}
	for (i=0;i<N;i++)
	{
		if (A==X[i])
		{
			contA++;
		}
	}
	if (contA)
	{
		cout<<"\n"<<contA<<" valores iguais a "<<A<<" estao no vetor.";
	}
	else
	{			
		cout<<"\nO valor "<<A<<" nao esta no vetor.";
	}
}
