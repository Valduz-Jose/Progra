#include <iostream>
using namespace std;
int main(){
	float precio,devaluacion,incremento,automovil,terreno;
	//devaluacion en tres a�os
	//incremento del terreno
	cout<<"Precio del Terreno y el carro hoy: ";
	cin>>precio;
	automovil=precio;
	terreno=precio;
	cout<<"Los siguientes valores seran porcentajes, ingrese numeros Enteros positivos"<<endl;
	cout<<"Devaluacion en tres a�os: ";
	cin>>devaluacion;
	cout<<"Incremento en Tres a�os: ";
	cin>>incremento;
	devaluacion=devaluacion/100;
	incremento=incremento/100;
	automovil=automovil-(automovil*devaluacion);
	terreno=terreno+(terreno*incremento);//PbyJAVC
	cout<<"En tres a�os el Automovil tendra un valor de "<<automovil<<endl;
	cout<<"En tres a�os el Terreno tendra un valor de "<<terreno<<endl;
	if((automovil*devaluacion)>((terreno*incremento)/2)){
		cout<<"Mejor Compra el terreno"<<endl;
	}else{
		cout<<"Compra el Carro, la devaluacion de este es "<<(automovil*devaluacion)<<" Mientras que la mitad del incremento del tereno es "<<((terreno*incremento)/2)<<endl;
	}
	return 0;
}
