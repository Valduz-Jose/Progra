#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	char continuar;
	float Galones,valorLitros=3.785,litros,Factura;
	int precilitro=100;
	
	do{
		system("cls");
		cout<<"--Gasolinera Costales--"<<endl;
		cout<<"Ingrese los galones Consumidos ";
		cin>>Galones;
		litros=Galones*valorLitros;
		Factura=litros*precilitro;
		cout<<"Factura Total a pagar  "<<Factura<<" Bolivares"<<endl;
		cout<<" por "<<litros<<" litros consumidos"<<endl;
		cout<<"Desea Continuar con otro calculo: s=si";
		fflush(stdin);
		cin.get(continuar);
		
	}while(continuar=='s');
	getchar();
	return 0;
}
