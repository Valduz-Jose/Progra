#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	char continuar;
	float PrecioFinal,PrecioJusto,porcentaje;
	
	do{
		system("cls");
		cout<<"--Calculadora de Descuento--"<<endl;
		cout<<"Ingrese el precio Final: ";
		cin>>PrecioFinal;
		cout<<"Ingrese el precio Justo: ";
		cin>>PrecioJusto;
		//regla de tres 
		porcentaje=100-((PrecioFinal*100)/PrecioJusto);
		cout<<"Descuento "<<porcentaje<<"%"<<endl;
		cout<<"Desea Continuar con otro calculo: s=si";
		fflush(stdin);
		cin.get(continuar);
		
	}while(continuar=='s');
	getchar();
	return 0;
}
