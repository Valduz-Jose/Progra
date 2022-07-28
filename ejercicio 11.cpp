#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	char continuar;
	float presion, volumen, temperatura,masa;
	
	do{
		system("cls");
		cout<<"--Calculadora de Masa-- "<<endl;
		cout<<"Introdusca La Presion: ";
		cin>>presion;
		cout<<"Introdusca el Volumen: ";
		cin>>volumen;
		cout<<"Introdusca La Temperatura: ";
		cin>>temperatura;
		masa=(presion*volumen)/(0.37 * (temperatura+460));
		cout<<"La Masa es: "<<masa<<endl;
		cout<<"Presione 's' para calcular con nuevos valores: ";
		fflush(stdin);
		cin.get(continuar);
		
	}while(continuar=='s');
	getchar();
	return 0;
}
