#include <stdio.h>
#include <iostream>

using namespace std;
float cost;
int clave, numin;

int main(){
	cout<<"Dmae la clave: "; cin>>clave;
	cout<<"Dame la duracion de la llamada: "; cin>>numin;
	switch(clave){
		case 12:break;
			cost=numin*2;break;
		case 15:
			cost=numin*2.2;break;
		case 18:
			cost=numin*4.5;break;
		case 19:
			cost=numin*3.5;break;
		case 23: case 25:
			cost=numin*6;break;
		case 29:
		    cost=numin*5;break;	
	}
	cout<<"\nCosto total de la llamada: "<<cost;
	return 0;
}
