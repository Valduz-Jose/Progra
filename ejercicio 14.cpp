#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	char continuar;
	float largo=4,ancho=1.5,total,porpieza=0.5,sobrante;
	int piezas;
	
	do{
		system("cls");
		cout<<"--Empresa Hiero Gomez--"<<endl;
		cout<<"La laminda mide 4 metros de Largo por 1.5 de ancho y las piezas son de 0.5"<<endl;
		total=largo*ancho;
		piezas= total/porpieza;
		sobrante=total-(piezas*porpieza);
		cout<<"Esto nos da "<<piezas<<" piezas y "<<sobrante<<" sobrante"<<endl;
		
		cout<<"Desea Continuar con otro calculo: s=si";
		fflush(stdin);
		cin.get(continuar);
		
	}while(continuar=='s');
	getchar();
	return 0;
}
