# include <iostream>
#include <iomanip>  

using namespace std;

int main()
{
	float salario, imposto;
	cin >> salario;
	if(salario <= 2000.00){
		cout <<"Isento"<< endl;
	}

	if(salario >= 2000.01 && salario <= 3000.00){
		salario = salario - 2000.00;
		imposto = salario*0.08;
		cout << fixed;
    	cout.precision(2);
		cout <<"R$"<<" "<<imposto<< endl;		
	}

	if(salario >= 3000.01 && salario <= 4500.00){
		salario = salario - 3000.00;
		
		imposto = (1000.00*0.08) + (salario*0.18);
		 cout << fixed;
    	cout.precision(2);
		cout <<"R$"<<" "<<imposto<< endl;		
	}

	if(salario > 4500.00){
		salario = salario - 4500.00;
		
		imposto = (1000.00*0.08) + (1500.00*0.18) + (salario*0.28);
		std::cout.precision(2);
		std::cout <<"R$"<<" "<<std::fixed<<imposto<< endl;		
	}

}
