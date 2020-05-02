#include <stdio.h>
#include <iostream>
#include <cstdlib>
//Este prgrama no es igual al del diagrama de flujo, en el diagrama se tendria que progrmar// 
//70 s diferentes y 70 if diferentes, resultando en una cantidad exagerada de lineas de codigo//
using namespace std;
float ac=0, s, prom;
int i, cont, can;

int main(){
	cout<<"Cantidad de sueldos: "; cin>>can;
	cout<<"\n";
	for(i=1;i<=can;i++){
		cout<<i<<") Sueldo: "; cin>>s;
		ac+= s;
	}
	system("cls");
	prom= ac/can;
	for(i=1;i<=can;i++){
		cout<<i<<") Sueldo: "; cin>>s;
		if(s>prom){
			cont+= 1;
		}
	}
	cout<<"\nSueldos superiores al promedio: "<<cont<<endl;
	system("pause");
	return 0;
}
