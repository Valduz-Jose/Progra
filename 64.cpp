#include <iostream>
#include <string.h>
using namespace std;

int promedio(int a, int b){
	if(b==0){
		return 0;
	}else{
		return (a/b);
	}
}
int main(){
	int c=1,alum=0,edad,mujeres=0,edadmujeres=0,mujeradulta=0,hombres=0,edadhombres=0,solteros=0,casados=0,viudos=0,electronica=0;
	string sexo;
	int ecv,especialidad,mecanica=0,agro=0,alimentos=0,construccion=0,informatica=0,mujeressolteras=0,hombresjovenes=0,hombressolteros=0;
	cout<<"---Datos On-Line---"<<endl;
	do{
		alum++;
		cout<<"Alumno "<<alum<<endl;
		cout<<"Edad: ";
		cin>>edad;
		cout<<"Sexo (mujer/hombre): ";
		cin>>sexo;
		fflush(stdin);
		cout<<"Estado Civil (1=soltero/2=casado/3=viudo): ";
		cin>>ecv;
		cout<<"Especialidad (1=informatica/2=electronica/3=mecanica/4=agroindustrial/5=Alimentos/6=Construccion Civil): ";
		cin>>especialidad;
		if(sexo=="mujer"){
			mujeres++;
			edadmujeres=edadmujeres+edad;
			if(edad>21){
				mujeradulta=mujeradulta+1;
			}
			if(ecv==1){
				mujeressolteras++;
			}
			
		}else if(sexo=="hombre"){
			hombres++;
			edadhombres=edadhombres+edad;
			if(edad>17&&edad<21){
				hombresjovenes=hombresjovenes+1;
			}
			if(ecv==1){
				hombressolteros++;
			}
		}else{
			cout<<"No se tomara en cuenta tu edad ya que el sexo ingresado no es hombre o mujer"<<endl;
		}
		switch(ecv){
			case 1:
				solteros=solteros+1;
				break;
			case 2:
				casados=casados+1;
				break;
			case 3:
				viudos=viudos+1;
				break;
			default:
				cout<<"Su estado civil no sera Tomado en cuenta";
		}
		switch(especialidad){
			case 1:
				informatica=informatica+1;
				break;
			case 2:
				electronica=electronica+1;
				break;
			case 3:
				mecanica=mecanica+1;
				break;
			case 4:
				agro=agro+1;
				break;
			case 5:
				alimentos=alimentos+1;
				break;
			case 6:
				construccion=construccion+1;
				break;
			default:
				cout<<"Su estado civil no sera Tomado en cuenta";
		}
		
		
		
		cout<<"Desea Agregar otro alumno? 1=si :";
		cin>>c;
	}while(c==1);
	cout<<endl<<"Promedio de edad de las Mujeres: "<<promedio(edadmujeres,mujeres)<<endl;
	cout<<"Promedio de edad de los Hombress: "<<promedio(edadhombres,hombres)<<endl;
	cout<<"Hombres encuestados: "<<hombres<<" Mujeres encuestadas: "<<mujeres<<" Total encuestados: "<<alum<<endl;
	cout<<((solteros*100)/alum)<<"% solteros "<<((casados*100)/alum)<<"% casados "<<((viudos*100)/alum)<<"% viudos"<<endl;
	cout<<"Alumnos por especialidad"<<endl;
	cout<<"Informatica "<<informatica<<" "<<((informatica*100)/alum)<<"%"<<endl;
	cout<<"Electronica "<<electronica<<" "<<((electronica*100)/alum)<<"%"<<endl;
	cout<<"Mecanica "<<mecanica<<" "<<((mecanica*100)/alum)<<"%"<<endl;
	cout<<"Agroindustrial "<<agro<<" "<<((agro*100)/alum)<<"%"<<endl;
	cout<<"Alimentos "<<alimentos<<" "<<((alimentos*100)/alum)<<"%"<<endl;
	cout<<"Construccion Civil "<<construccion<<" "<<((construccion*100)/alum)<<"%"<<endl;
	cout<<((mujeradulta*100)/mujeres)<<"% Mujeres Adultas"<<endl;
	cout<<((hombresjovenes*100)/hombres)<<"% Hombres Jovenes"<<endl;
	cout<<"Hombres Solteros: "<<hombressolteros<<endl;
	cout<<"Mujeres Solteras: "<<mujeressolteras<<endl;
	
	return 0;
}
