#include <iostream>
#include <math.h>
using namespace std;
int main(){
	float a,b,c,x1,x2,d;
	cout<<"Ingrese A: ";
	cin>>a;
	cout<<"Ingrese B: ";
	cin>>b;
	cout<<"Ingrese C: ";
	cin>>c;
	cout<<"\n"<<a<<"X^2+"<<b<<"X+"<<c<<"=0"<<endl;
	d=pow(b,2)-(4*a*c);//Discriminante
	cout<<"D= "<<d<<endl;
	if(d==0){
		x1=((-b)/(2*a));
		x2=x1;
		cout<<"X1= X2= "<<x1<<endl;
	}else if(d>0){
		x1=(((-b)+sqrt((pow(b,2))-(4*a*c)))/(2*a));
		x2=(((-b)-sqrt((pow(b,2))-(4*a*c)))/(2*a));
		cout<<"X1= "<<x1<<" X2= "<<x2<<endl;
	}else if(d<0){
		cout<<"No tiene Solucion en los Reales"<<endl;
	}
	
	return 0;
}
