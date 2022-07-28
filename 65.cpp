#include <iostream>
#include <cstdlib>
using namespace std;

void operaciones(){
	int opcion=0;
	do{
		cout<<"----Operaciones Matematicas----\n"<<endl;
		cout<<"1- Sumar dos Digitos "<<endl;
		cout<<"2- Restar dos Digitos "<<endl;
		cout<<"3- Multiplicar dos Digitos "<<endl;
		cout<<"4- Dividir dos Digitos "<<endl;
		cout<<"5- Calcular un porcentaje "<<endl;
		cout<<"6- Regresar al Menu Principal "<<endl;
		cin>>opcion;
		system("cls");
		if(opcion<1||opcion>6){
			cout<<"Error opcion invalida"<<endl;
		}
	}while(opcion!=6);
		
}
void areas(){
	int opcion=0;
	do{
		cout<<"----Calculo de Areas----\n"<<endl;
		cout<<"1- Area del Cuadrado "<<endl;
		cout<<"2- Area del Rectangulo "<<endl;
		cout<<"3- Area del Triangulo "<<endl;
		cout<<"4- Regresar al Menu Principal "<<endl;

		cin>>opcion;
		system("cls");
		if(opcion<1||opcion>4){
			cout<<"Error opcion invalida"<<endl;
		}
	}while(opcion!=4);
}
void calificaciones(){
	int opcion=0;
	do{
		cout<<"----Calculo de Calificaciones----\n"<<endl;
		cout<<"1- Registar Datos Basicos del estudiante "<<endl;
		cout<<"2- Registrar el resultado de la Calificacion N° 1"<<endl;
		cout<<"3- Registrar el resultado de la Calificacion N° 2"<<endl;
		cout<<"4- Registrar el resultado de la Calificacion N° 3 "<<endl;
		cout<<"5- Registrar el Resultado de la calificacion "<<endl;
		cout<<"6- Presentar el Reporte "<<endl;
		cout<<"7- Regresar al Menu Principal "<<endl;		
		cin>>opcion;
		system("cls");
		if(opcion<1||opcion>7){
			cout<<"Error opcion invalida"<<endl;
		}
		
	}while(opcion!=7);
	
}
void tablas(){
	int opcion=0;
	do{
		cout<<"----Calculo de Tablas----\n"<<endl;
		cout<<"1- Tablas de Sumar "<<endl;
		cout<<"2- Tablas de Restar "<<endl;
		cout<<"3- Tablas de Multiplicar "<<endl;
		cout<<"4- Tablas de Dividir "<<endl;
		cout<<"5- Regresar al Menu Principal "<<endl;

		cin>>opcion;
		system("cls");
		if(opcion<1||opcion>5){
			cout<<"Error opcion invalida"<<endl;
		}
	}while(opcion!=5);
}


int main(){
	system("color b0");
	int c=1,opcion=0,salir=0;
	do{
		cout<<"----Menu Principal----\n"<<endl;
		cout<<"1- Operaciones Matematicas "<<endl;
		cout<<"2- Calculo de Areas "<<endl;
		cout<<"3- Calculo de Califiaciones "<<endl;
		cout<<"4- Calculo de Tablas "<<endl;
		cout<<"5- Salir del Sistema "<<endl;
		cin>>opcion;
		if(opcion<1||opcion>5){
			system("cls");
			cout<<"Error opcion invalida"<<endl;
		}
		switch(opcion){
			case 1:
				system("cls");
				operaciones();
				break;
			case 2:
				system("cls");
				areas();
				break;
			case 3:
				system("cls");
				calificaciones();
				break;
			case 4:
				system("cls");
				tablas();
				break;
			case 5:
				system("cls");
				cout<<"------Hasta Luego--------"<<endl;
				salir=1;
				break;
		}
	}while(salir==0);
	return 0;
}
