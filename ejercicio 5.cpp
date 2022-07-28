/*5. Obtener la edad de una persona en meses, si se ingresa su edad
 en años y meses. Por ejemplo: si se ingresan 3 años y 4 meses debe
  mostrar 40 meses.*/
  
#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int edad,meses,meses_totales=0,edad_en_meses=0;
	
	
	cout<<"Digite su edad: ";
	cin>>edad;
	cout<<"y los meses que han pasado desde su cumpleaños: ";
	cin>>meses;
	
	edad_en_meses = edad * 12;
	
	meses_totales = meses + edad_en_meses;
	
	cout<<"\nSu edad en meses es: "<<meses_totales<<endl;
	
	
	getch();
	return 0;
}
