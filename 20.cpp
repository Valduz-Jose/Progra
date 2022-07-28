#include <iostream>
using namespace std;
int main(){
	float kilometros=0,PagoTotal=0;
	int continuar=0;
	do{
		system("cls");
		cout<<"Bienvenido al sistema de Control de Kilometraje"<<endl;
		cout<<"Por favor Ingrese el kilometraje recorrido: ";
		cin>>kilometros;
		cout<<"Ud Recorrio "<<kilometros<<"km "<<endl;
		if(kilometros<=300){
			PagoTotal=1000;
			cout<<"Menor a 300km"<<endl<<" Monto a Cobrar: "<<PagoTotal<<endl;
		}else if(kilometros>300&&kilometros<1000){
			PagoTotal=2000;
			cout<<"Mayor a 300km pero menor a 1000km"<<endl<<" Monto a Cobrar: "<<PagoTotal<<endl;
		}else if(kilometros>=1000&&kilometros<=1500){
			PagoTotal=(((kilometros)-1000)*70)+2000;//PbyJAVC
			/*kilometraje-1000=kilometros adicionales, 
			los multiplico por el precio de cada kilometro 
			y le sumo la base de 10000 kilometros*/
			cout<<"Mayor a 1000km ";
			cout<<"Son "<<((kilometros)-1000)<<"km extra a 70bs";
			cout<<" Monto a Cobrar: "<<PagoTotal<<endl;
		}else{
			cout<<"Kilometraje excede el limite indicado, Contacte al Administrador"<<endl;
		}
		cout<<"Desea Ingresar otro Vehiculo: 1=si";
		cin>>continuar;
	}while(continuar==1);
	return 0;
}
