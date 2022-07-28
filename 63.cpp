#include <iostream>
using namespace std;

int peso(){
	int pesos;
	cout<<"Ingrese su peso: ";
	cin>>pesos;
	return pesos;
}
int dividir(int pso, int numeroPersonas){
	if(numeroPersonas==0){
		return 0;
	}else{
		return (pso/numeroPersonas);
	}
	
}

int main(){
	int c=1,nump=0,edad,inf=0,ado=0,aduTe=0,aduM=0,aduTa=0;
	int Pinf=0,Pado=0,PaduTe=0,PaduM=0,PaduTa=0;
	do{
		cout<<"Persona "<<(nump+1)<<endl;
		cout<<"Ingrese su edad: ";
		cin>>edad;
		if(edad>0&&edad<11){
			inf++;
			nump++;
			Pinf=Pinf+peso();
		}else if(edad>12&&edad<20){
			ado++;
			nump++;
			Pado=Pado+peso();
		}else if(edad>21&&edad<39){
			aduTe++;
			nump++;
			PaduTe=PaduTe+peso();
		}else if(edad>40&&edad<64){
			aduM++;
			nump++;
			PaduM=PaduM+peso();
		}else if(edad>65){
			aduTa++;
			nump++;
			PaduTa=PaduTa+peso();
		}else{
			cout<<"Edad no Valida"<<endl;
		}
		cout<<"Desea Ingresar otra persona? 1=si :";
		cin>>c;
	}while(c==1);
	
	cout<<endl<<"Cantidad de personas encuestadas: "<<nump<<endl;
	cout<<"Cantidad de Personas por categoria"<<endl;
	cout<<"Infantes: "<<inf<<endl;
	cout<<"Adolescentes: "<<ado<<endl;
	cout<<"Adultos de edad Temprana: "<<aduTe<<endl;
	cout<<"Adultos de edad Media : "<<aduM<<endl;
	cout<<"Adultos de edad Tardia: "<<aduTa<<endl;
	cout<<"Pesos Totales por categoria"<<endl;
	cout<<"Infantes: "<<Pinf<<endl;
	cout<<"Adolescentes: "<<Pado<<endl;
	cout<<"Adultos de edad Temprana: "<<PaduTe<<endl;
	cout<<"Adultos de edad Media : "<<PaduM<<endl;
	cout<<"Adultos de edad Tardia: "<<PaduTa<<endl;
	cout<<"Promedio de Pesos por categoria"<<endl;
	cout<<"Infantes: "<<dividir(Pinf,inf)<<endl;
	cout<<"Adolescentes: "<<dividir(Pado,ado)<<endl;
	cout<<"Adultos de edad Temprana: "<<dividir(PaduTe,aduTe)<<endl;
	cout<<"Adultos de edad Media : "<<dividir(PaduM,aduM)<<endl;
	cout<<"Adultos de edad Tardia: "<<dividir(PaduTa,aduTa)<<endl;
		
	
	return 0;
}

