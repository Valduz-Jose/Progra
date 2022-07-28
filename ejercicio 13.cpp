#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	char continuar;
	int minutos=0, meses=0,semanas=0,dias=0,horas=0;
	
	do{
		system("cls");
		cout<<"--Calculadora de Tiempo--"<<endl;
		cout<<"Ingrese los minutos corridos en el año: ";
		cin>>minutos;
		if(minutos>=43800){
			meses=minutos/43800;//minutos en un mes
			minutos=minutos-(meses*43800);	
		}
		if(minutos>=10080){
			semanas=minutos/10080;
			minutos=minutos-(semanas*10080);
		}
		if(minutos>=1440){
			dias=minutos/1440;
			minutos=minutos-(dias*1440);
		}
		if(minutos>=60){
			horas=minutos/60;
			minutos=minutos-(horas*60);
		}
		
		cout<<"Son "<<meses<<" meses "<<semanas<<" semanas "<<dias<<" dias "<<horas<<" horas "<<minutos<<" minutos"<<endl;
		cout<<"Desea Continuar con otro calculo: s=si ";
		fflush(stdin);
		cin.get(continuar);
		
	}while(continuar=='s');
	getchar();
	return 0;
}
