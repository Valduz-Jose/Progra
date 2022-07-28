#include <iostream>
using namespace std;
int main(){
	double metros,hectareas,pPinos,Pinos,pOyamel,Oyamel,pCedro,Cedro;
	cout<<"Reforestación Mexico"<<endl;
	cout<<"Ingrese la superficie del terreno en hectareas: ";
	cin>>hectareas;
	metros=hectareas*10000;
	if(metros>1000000){
		pPinos=metros*0.7;//Espacio para los Pinos
		Pinos=(pPinos/10)*8;
		pOyamel=metros*0.2;//Espacio para los Oyamel
		Oyamel=(pOyamel/15)*15;
		pCedro=metros*0.1;//Espacio para los Cedros
		Cedro=(pCedro/18)*10;//PbyJAVC
	}else{
		pPinos=metros*0.5;
		Pinos=(pPinos/10)*8;
		pOyamel=metros*0.3;
		Oyamel=(pOyamel/15)*15;
		pCedro=metros*0.2;
		Cedro=(pCedro/18)*10;
	}
	cout<<Pinos <<" Pinos \n"<<Oyamel<<" Oyamels\n"<<Cedro<<" Cedros \n"<<endl;
	return 0;
}
