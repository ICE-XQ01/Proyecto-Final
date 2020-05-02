#include <stdio.h>
#include <iostream>
#include <cstdlib>

using namespace std;
float recau=0, p1, p2, p3, p4, p5, pre;
int ap1=0, ap2=0, ap3=0, ap4=0, ap5=0, clave, cant;

int main(){
	cout<<"Digite precio de localidad 1: "; cin>>p1;
	cout<<"Digite precio de localidad 2: "; cin>>p2;
	cout<<"Digite precio de localidad 3: "; cin>>p3;
	cout<<"Digite precio de localidad 4: "; cin>>p4;
	cout<<"Digite precio de localidad 5: "; cin>>p5;

	do{
		system("cls");
		cout<<"Digite la clave: "; cin>>clave;
	    cout<<"Cantidad de voletos: "; cin>>cant;
		switch(clave){
			case 1:
				pre= p1*cant;
				ap1= ap1+cant;break;
			case 2:
				pre= p2*cant;
				ap2= ap2+cant;break;
			case 3:
				pre= p3*cant;
				ap3= ap3+cant;break;
			case 4:
				pre= p4*cant;
				ap4= ap4+cant;break;
			case 5:	
			    pre= p5*cant;
				ap5= ap5+cant;break;
		}
		
		cout<<"Clave: "<<clave<<endl;
		cout<<"Cantidad de boletos: "<<cant<<endl;
		cout<<"Total vendido: "<<pre<<endl;
		recau+= pre;
			    
	}while(((clave<0)||(clave>0)) && ((cant<0)||(cant>0)));
	
	
	system("cls");
	cout<<"Cantidad boletos tipo 1: "<<ap1<<endl;
	cout<<"Cantidad boletos tipo 2: "<<ap2<<endl;
	cout<<"Cantidad boletos tipo 3: "<<ap3<<endl;
	cout<<"Cantidad boletos tipo 4: "<<ap4<<endl;
	cout<<"Recadaucion del estado: "<<recau;
	return 0;
}
