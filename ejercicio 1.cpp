/*1. Dada una cantidad en Bolívares, obtener la equivalencia en dólares, 
asumiendo que la unidad cambiaría es un dato desconocido. */

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
