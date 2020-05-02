#include <stdio.h>
#include <iostream>

using namespace std;

int tipoenf, edad, dias;
float costot;

int main(){
	cout<<"Digite su tipo de enfermedad: "; cin>>tipoenf;
	cout<<"Digite su edad: "; cin>>edad;
	cout<<"Digite los dias: "; cin>>dias;
	switch(tipoenf){
		case 1: costot=dias*25;break;
		case 2: costot=dias*16;break;
		case 3: costot=dias*20;break;
		case 4: costot=dias*32;break;
	}
	if(edad>=14&&edad<=22){
		costot=costot*1.10;
		cout<<"\nCosto total: "<<costot;
	}
	else{
		cout<<"\nCosto total: "<<costot;
	}
	return 0;
}
