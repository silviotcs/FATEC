#include <iostream>
using namespace std;
#define x 2
#define y 4

main ()
{
	int V[]={2,6,8,3,10,9,1,21,33,14}, result;
	
	result=V[x + 2];
	cout<<"a)"<<result;
	cout<<"\n";
	
	result=V[V[x + y]];
	cout<<"b)"<<result;
	cout<<"\n";
	
	result=V[V[5]];
	cout<<"c)"<<result;
	cout<<"\n";
	
	result=V[V[0] * V[3]];
	cout<<"d)"<<result;
	cout<<"\n";
	
	result=V[V[V[6]]];
	cout<<"e)"<<result;
	cout<<"\n";
	
	result=V[8-V[3]];
	cout<<"f)"<<result;
	cout<<"\n";
}
