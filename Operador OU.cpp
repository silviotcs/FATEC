#include <iostream>
#include <locale.h>
using namespace std;

main() {
	float salario, aumento, novo;
	
	setlocale (LC_ALL,"Portuguese");
	cout << "Qual o seu sal�rio? ";
	cin >> salario;
	cout << "Qual o percentual de aumento? ";
	cin >> aumento;
	
	if (salario <= 0.0 or aumento <=0.0)
	{
		cout<< "Erro! Informe valores v�lidos";
	}
	else
	{
		novo= salario + (salario*(aumento/100));
		cout<< "O novo sal�rio ser� de " <<novo<<"\n";
	}
}
