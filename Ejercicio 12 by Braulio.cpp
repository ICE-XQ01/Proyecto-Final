#include <stdio.h>
#include <iostream>

using namespace std;

float seg;
int dias;

int main(){
	cout<<"Digite una cantidad de dias: "; cin>>dias;
	seg=(dias*24*60*60);
	cout<<"\nCantidad de dias: "<<dias<<endl;
	cout<<"Cantidad de segundos en dias: "<<seg<<endl;
	return 0;
}
