#include <iostream>
using namespace std;
int main(){
	int c=1,s,dd,mm,aaaa;
	do{
		cout<<endl<<"Ingrese la Fecha en el Formato S DD MM AAAA (todos los campos son numeros)"<<endl;
		cin>>s>>dd>>mm>>aaaa;
		if(s>0&&s<8){
			if(dd>0&&dd<=32){
				if(aaaa>999&&aaaa<=9999){
					switch(s){
						case 1:
							cout<<"Lunes";
							break;
						case 2:
							cout<<"Martes";
							break;
						case 3:
							cout<<"Miercoles";
							break;
						case 4:
							cout<<"Jueves";
							break;
						case 5:
							cout<<"Viernes";
							break;
						case 6:
							cout<<"Sabado";
							break;
						case 7:
							cout<<"Domingo";
							break;
						default:
							cout<<"No especificado";
					}
					cout<<", "<<dd<<" de ";
					switch(mm){
						case 1:
							cout<<"Enero";
							break;
						case 2:
							cout<<"Febrero";
							break;
						case 3:
							cout<<"Marzo";
							break;
						case 4:
							cout<<"Abril";
							break;
						case 5:
							cout<<"Mayo";
							break;
						case 6:
							cout<<"Junio";
							break;
						case 7:
							cout<<"Julio";
							break;
						case 8:
							cout<<"Agosto";
							break;
						case 9:
							cout<<"Septiembre";
							break;
						case 10:
							cout<<"Octubre";
							break;
						case 11:
							cout<<"Noviembre";
							break;
						case 12:
							cout<<"Diciembre";
							break;
						default:
							cout<<"No especificado";
					}
					
					cout<<" de "<<aaaa<<endl;			
				}else{
					cout<<"Deben ser Cuatro Digitos que representan el anio";
				}
			}else{
				cout<<"Los meses deben ir del 1 al 31";
			}
		}else{
			cout<<"Los dias van del 1 al 7";
		}
		cout<<"Desea Continuar? 1=si :";
		cin>>c;
	}while(c==1);
	return 0;
}
