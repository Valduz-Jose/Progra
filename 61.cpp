#include <iostream>
using namespace std;
int main(){
	int c=1;
	do{
		int num[20],neutros=0,positivos=0,negativos=0,numN[15],negaCont=15;
		cout<<"Ingrese 20 numeros a Evaluar: "<<endl;
		for(int i=1;i<=20;i++){
			cout<<"Valor "<<i<<" =";
			cin>>num[i];
			if(num[i]==0){
				neutros++;
			}else if(num[i]>0){
				positivos++;
			}else if(num[i]<0){
				negativos++;
			}
		}
		cout<<"Positivos: "<<positivos<<" Negativos: "<<negativos<<" Neutros:"<<neutros<<endl;
		cout<<"Ahora ingrese 15 negativos: "<<endl;
		int e=0;
		do{
			cout<<"Valor "<<e+1<<" =";
			cin>>numN[e];
			if(numN[e]<0){
				e++;
				negaCont--;
			}
		}while(negaCont>0);
		cout<<"Listado:"<<endl;
		for(int o=0;o<15;o++){
			cout<<numN[o]<<" "<<(numN[o]*(-1))<<endl;
		}
		
		
		cout<<"Desea Continuar? 1=si :";
		cin>>c;
	}while(c==1);
	return 0;
}
