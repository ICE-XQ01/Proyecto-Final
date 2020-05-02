#include <stdio.h>
#include <iostream>
#include <cstdlib>

using namespace std;
float sue, masue=0;
int i, n, numemp, manum;

int main(){
	cout<<"Digite la cantidad de empleados: "; cin>>n;
	for(i=1;i<=n;i++){
		system("cls");
		cout<<"Numero de empleado: "; cin>>numemp;
		cout<<"Digite el sueldo: "; cin>>sue;
		if(sue>masue){
			masue = sue;
			manum = numemp;
		}
	}
	system("cls");
	cout<<"Mayor sueldo de emplado: "<<masue<<endl;
	cout<<"Numero de empleado con mayor sueldo : "<<manum;
	return 0;
}
