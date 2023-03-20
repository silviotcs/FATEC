#include <iostream>
using namespace std;
#define N 3

main()
{
    int V[N], i;

    for (i=0; i<N; i++)
	{
		cout<<"Digite um numero: ";
        cin>>V[i];
	}

    for (i=0; i<N; i++)
	{
    	if (i==0) 
		{
			cout<<"\n";
			cout<<"Nao existe!"<<"\n";
			cout<<"V["<<i<<"] = "<<V[i]<<"\n";
			cout<<"V["<<i+1<<"] = "<<V[i+1]<<"\n";
			cout<<"\n";
        }
		else if (i==2) 
		{
			cout<<"V["<<i-1<<"] = "<<V[i-1]<<"\n";
			cout<<"V["<<i<<"] = "<<V[i]<<"\n";
            cout<<"Nao existe!"<<"\n";
            cout<<"\n";
		}
		else 
		{
			cout<<"V["<<i-1<<"] = "<<V[i-1]<<"\n";
			cout<<"V["<<i<<"] = "<<V[i]<<"\n";
			cout<<"V["<<i+1<<"] = "<<V[i+1]<<"\n";
			cout<<"\n";
		}
	}
}
