

/*4. Un trabajador tiene un número determinado de horas laboradas
en el día y en la noche por cada día de la semana (de lunes a viernes).
Presentar en pantalla un listado que indique la cantidad de horas 
diurnas y nocturnas trabajadas cada día, el total de horas trabajadas
por día, el total de horas diurnas trabajadas en la semana, el total
de horas nocturnas trabajadas en la semana, el total general de horas 
trabajadas en la semana, el promedio de horas diurnas, el promedio de 
horas nocturnas y el promedio general de horas laboradas.*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int dialunes,diamartes,diamiercoles,diajueves,diaviernes,nochelunes,nochemartes,
		nochemiercoles,nochejueves,nocheviernes;
	int lunes=0,martes=0,miercoles=0,jueves=0,viernes=0;
	int semana_dia=0,semana_noche=0,semana=0;
	float promedio_dia=0,promedio_noche=0,promedio_semana=0;
	
	cout<<"Digite la cantidad de horas trabajadas en el dia del Lunes: ";cin>>dialunes;
	cout<<"Digite la cantidad de horas trabajadas en la noche del Lunes: ";cin>>nochelunes;
	cout<<"Digite la cantidad de horas trabajadas en el dia del Martes: ";cin>>diamartes;
	cout<<"Digite la cantidad de horas trabajadas en la noche del Martes: ";cin>>nochemartes;
	cout<<"Digite la cantidad de horas trabajadas en el dia del Miercoles: ";cin>>diamiercoles;
	cout<<"Digite la cantidad de horas trabajadas en la noche del Miercoles: ";cin>>nochemiercoles;
	cout<<"Digite la cantidad de horas trabajadas en el dia del Jueves: ";cin>>diajueves;
	cout<<"Digite la cantidad de horas trabajadas en la noche del Jueves: ";cin>>nochejueves;
	cout<<"Digite la cantidad de horas trabajadas en el dia del Viernes: ";cin>>diaviernes;
	cout<<"Digite la cantidad de horas trabajadas en la noche del Viernes: ";cin>>nocheviernes;
	
	lunes = dialunes + nochelunes;
	martes = diamartes + nochemartes;
	miercoles = diamiercoles + nochemiercoles;
	jueves = diajueves + nochejueves;
	viernes = diaviernes + nocheviernes;
	
	semana_dia = dialunes + diamartes + diamiercoles + diajueves + diaviernes;
	semana_noche = nochelunes + nochemartes + nochemiercoles + nochejueves + nocheviernes;
	
	semana = semana_dia + semana_noche;
	
	promedio_dia = (float) semana_dia/5;
	promedio_noche = (float) semana_noche/5;
	
	promedio_semana = (float) semana/5;
	
	cout<<endl;
	cout<<"\tLa cantidad de horas diurnas trabajadas cada dia"<<endl;
	printf("\nLunes: %i. Martes: %i. Miercoles: %i. Jueves: %i. Viernes: %i\n",dialunes,
	diamartes,diamiercoles,diajueves,diaviernes);
	
	cout<<"\n\tLa cantidad de horas nocturnas trabajadas cada dia"<<endl;
	printf("\nLunes: %i. Martes: %i. Miercoles: %i. Jueves: %i. Viernes: %i\n",nochelunes,
	nochemartes,nochemiercoles,nochejueves,nocheviernes);
	
	cout<<"\n\tEl total de horas trabajadas por dia"<<endl;
	printf("\nLunes: %i. Martes: %i. Miercoles: %i. Jueves: %i. Viernes: %i\n",lunes,martes,miercoles,
	jueves,viernes);
	
	cout<<"\nTotal de horas diurnas trabajadas en la semana: "<<semana_dia<<endl;
	cout<<"Total de horas nocturnas trabajadas en la semana: "<<semana_noche<<endl;
	
	cout<<"\nTotal de horas trabajadas en la semana: "<<semana<<endl;
	
	printf("\nPromedio de horas diurnas: %.1f\n",promedio_dia);
	printf("\nPromedio de horas nocturnas: %.1f\n",promedio_noche);
	
	printf("\nPromedio general de horas laboradas: %.2f\n",promedio_semana);
	
	getch();
	return 0;
}

