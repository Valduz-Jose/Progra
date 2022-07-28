#include <iostream>
using namespace std;
int main(){
	int continuar=1,cien,cincuenta,veinte,diez,cinco,dos,uno,cerocinco,cerodoscinco,cerodoce,cerouno;
	float bolivares;
	do{
		cout<<"Introdusca la cantidad en Bolivares";
		cin>>bolivares;
		//100 50 20 10 5 2 1 
		do{
		
			if((bolivares/100)>=1){
				cien=bolivares/100;
				cout<<bolivares<<endl;
				bolivares=bolivares-(100*cien);
				cout<<bolivares<<endl;
				cout<<cien<<" Billetes de Cien"<<endl;
			}
			if(bolivares/50>=1){
				cincuenta=bolivares/50;
				bolivares=bolivares-(50*cincuenta);
				cout<<bolivares<<endl;
				cout<<cincuenta<<" Billetes de Cincuenta"<<endl;
			}
			if(bolivares/20>=1){//PbyJAVC
				veinte=bolivares/20;
				bolivares=bolivares-(20*veinte);
				cout<<bolivares<<endl;
				cout<<veinte<<" Billetes de Veinte"<<endl;
			}
			if(bolivares/10>=1){
				diez=bolivares/10;
				bolivares=bolivares-(10*diez);
				cout<<bolivares<<endl;
				cout<<diez<<" Billetes de Diez"<<endl;
			}
			if(bolivares/5>=1){
				cinco=bolivares/5;
				bolivares=bolivares-(5*cinco);
				cout<<bolivares<<endl;
				cout<<cinco<<" Billetes de Cinco"<<endl;
			}
			if(bolivares/2>=1){
				dos=bolivares/2;
				bolivares=bolivares-(2*dos);
				cout<<bolivares<<endl;
				cout<<dos<<" Billetes de Dos"<<endl;
			}
			if(bolivares/1>=1){
				uno=bolivares/1;
				bolivares=bolivares-(1*uno);
				cout<<bolivares<<endl;
				cout<<uno<<" Billetes de uno"<<endl;
			}
		//0.5 0.250 0.125 0.1
			if(bolivares/0.5>=1){
				cerocinco=bolivares/0.5;
				bolivares=bolivares-(0.5*cerocinco);
				cout<<bolivares<<endl;
				cout<<cerocinco<<" Monedas de medio"<<endl;
			}
			if(bolivares/0.25>=1){
				cerodoscinco=bolivares/0.25;
				bolivares=bolivares-(0.25*cerodoscinco);
				cout<<bolivares<<endl;
				cout<<cerodoscinco<<" Monedas de Cuarto"<<endl;
			}
			if(bolivares/0.125>=1){
				cerodoce=bolivares/0.125;
				bolivares=bolivares-(0.125*cerodoce);
				cout<<bolivares<<endl;
				cout<<cerodoce<<" Monedas de 0.125"<<endl;
			}
			if(bolivares/0.1>=1){
				cerouno=bolivares/0.1;
				bolivares=bolivares-(0.1*cerouno);
				cout<<bolivares<<endl;
				cout<<cerouno<<" Monedas de 0.1"<<endl;
			}
		}while(bolivares>0.09);
	}while(continuar==1);
	return 0;
}
