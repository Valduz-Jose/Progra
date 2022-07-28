#include <iostream>
using namespace std;
int main(){
	int c=1,hora,min,seg;
	do{
		cout<<"Ingrese la hora: ";
		cin>>hora;
		cout<<"Ingrese los minutos: ";
		cin>>min;
		cout<<"Ingrese los segundos: ";
		cin>>seg;
		if(hora>0&&hora<24){
			if(min>0&&min<60){
				if(seg>0&&seg<60){
					cout<<hora<<":"<<min<<":"<<seg<<endl;
				}else{
					cout<<"El formato de segundos es de 0 a 59"<<endl;
				}
			}else{
				cout<<"El formato de minutos es de 0 a 59"<<endl;
			}
		}else{
			cout<<"El formato de Horas es de 0 a 23"<<endl;
		}
		cout<<"Desea Continuar? 1=si :";
		cin>>c;
		cout<<endl;
	}while(c==1);
	return 0;
}
