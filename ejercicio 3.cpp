/*3. Desarrolle un algoritmo/programa que permita leer cuatro
 dígitos enteros, posteriormente desarrollar las siguientes
  operaciones básicas: 
  
  (a) Sumar todos los dígitos leídos. 
  (b) Restar el cuarto digito menos el segundo. 
  (c) Multiplicar el primer digito por el tercero y luego por el segundo. 
  (d) dividir el resultado de la multiplicación entre el cuarto digito. 
  (e) Calcular el porcentaje al resultado de la multiplicación, 
  	  tomando como valor de porcentaje el monto del segundo digito. */
  	  
#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int n1,n2,n3,n4, suma=0,resta=0,mult=0;
	float div=0,porcentaje=0,porcentaje_mult=0;
	
	cout<<"Digite cuatro numeros: ";
	cin>>n1>>n2>>n3>>n4;
	
	suma = n1+n2+n3+n4;
	resta = n4-n2;
	mult = n1 * n3 * n2;
	div = (float) mult / n4;
	porcentaje = (float) n2/100;
	porcentaje_mult = (float) porcentaje * mult;
	
	cout<<endl;
	
	cout<<"a.) la suma de todos los numeros leidos es: "<<suma<<endl;
	cout<<"b.) la resta de "<<n4<<" - "<<n2<<" es: "<<resta<<endl;
	cout<<"c.) la multiplicacion de "<<n1<<" * "<<n3<<" * "<<n2<<" es: "<<mult<<endl;
	printf("d.) el resultado de la division de %i / %i es: %.2f\n",mult,n4,div);
	printf("e.) el porcentaje de la multiplicacion es: %.2f\n",porcentaje_mult);
	
	getch();
	return 0;
}
