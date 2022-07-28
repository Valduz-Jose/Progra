#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	char continuar;
	float velocidad,minutos,tiempo,distancia;
	
	do{
		system("cls");
		cout<<"--Calculadora de Distancia Recorrida--"<<endl;
		cout<<"Ingrese la velocidad en Km/h: ";
		cin>>velocidad;
		cout<<"Ingrese el tiempo en minutos: ";
		cin>>minutos;
		tiempo=minutos/60;//llevamos los minutos a horas
		distancia=velocidad*tiempo;
		cout<<"Recorrio "<<distancia<<" Metros"<<endl;
		cout<<"Desea Continuar con otro calculo: s=si";
		fflush(stdin);
		cin.get(continuar);
		
	}while(continuar=='s');
	getchar();
	return 0;
}
