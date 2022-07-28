#include <iostream>
using namespace std;
int main(){
	int a=0,b=0,c=0,continuar=0;
	do{
		cout<<"\nDetector de Sumas"<<endl;
		cout<<"Ingrese el Primer Numero: ";
		cin>>a;
		cout<<"Ingrese el Segundo Numero: ";
		cin>>b;
		cout<<"Ingrese el Tercer Numero: ";
		cin>>c;
		if(a+b==c){//PbyJAVC
			cout<<c<<" es Sumatoria de "<<a<<"+"<<b<<endl;
		}else if(b+c==a){
			cout<<a<<" es Sumatoria de "<<b<<"+"<<c<<endl;
		}else if(a+c==b){
			cout<<b<<" es Sumatoria de "<<a<<"+"<<c<<endl;
		}else{
			cout<<"Ninguno es Sumatoria de los otros dos"<<endl;
		}
		cout<<"Continuar = 1 :";
		cin>>continuar;
	}while(continuar==1);
	return 0;
}
