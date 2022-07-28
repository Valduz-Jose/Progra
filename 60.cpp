#include <iostream>
using namespace std;
int main(){
	int c=1;
	int resultado,dividendo,divisor,cociente;
	do{
		cout<<"Restas Sucesivas: Ingresa el numero a dividir: ";
		cin>>dividendo;
		cout<<"Ahora el divisor: ";
		cin>>divisor;
		cociente=dividendo/divisor;
		for(int i=0;i<cociente;i++){
			resultado=dividendo-divisor;
			cout<<dividendo<<" - "<<divisor<<" = "<<resultado<<endl;
			dividendo=dividendo-divisor;
		}
		cout<<"Desea Continuar? 1=si :";
		cin>>c;
		cout<<endl;
	}while(c==1);
	return 0;
}
