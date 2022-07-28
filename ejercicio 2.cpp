/*2. Calcular el nuevo salario de un obrero si obtuvo un 
incremento del 35,75 % sobre su salario anterior. */

#include<iostream>
#include<conio.h>

using namespace std;
													//este ejercicio contiene
int main(){											//funciones de c y c++ para
	float salario, aumento=0,salario_n=0;			//probar si funcinan sin
													//inconvenientes :D
	cout<<"Digite su salario: ";
	scanf("%f",&salario);
	
	aumento = salario * 0.3575;
	
	salario_n = salario + aumento;
	
	printf("El salario actual con aumento es: %.2f\n",salario_n);
	
	getch();
	return 0;
}
