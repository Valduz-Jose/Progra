/*1. Dada una cantidad en Bol�vares, obtener la equivalencia en d�lares, 
asumiendo que la unidad cambiar�a es un dato desconocido. */

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	float bolivares,dato,dolares=0;
	
	cout<<"Digite la cantidad de Bolivares a cambiar: ";
	cin>>bolivares;
	
	cout<<endl;
	
	cout<<"digite a cuanto esta el cambio: ";
	cin>>dato;
	
	dolares = bolivares / dato;
	
	cout<<endl;
	
	cout.precision(4);
	cout<<"la equivalencia en dolares es: $"<<dolares<<endl;
	
	cout.precision(2);
	
	cout<<"Redondeando: $"<<dolares<<endl;
	
	getch();
	return 0;
}
