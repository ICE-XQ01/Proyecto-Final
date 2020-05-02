#include <stdio.h>
#include <iostream>
#include <cstdlib>

using namespace std;
float v;
int i, n, chi=0, med=0, gra=0;

int main(){
	cout<<"Digite el numero de ventas: "; cin>>n;
	cout<<"\n";
	for(i=1;i<=n;i++){
		cout<<"Digite costo de la venta: "; cin>>v;
		if(v<=200){
			chi+= 1;
		}
		else{
			if(v<400){
				med+= 1;
			}
			else{
				gra+= 1;
			}
		}
	}
	system("cls");
	cout<<"\nTotal de ventas chicas: "<<chi<<endl;
	cout<<"Total de ventas medianas: "<<med<<endl;
	cout<<"Total de ventas grandes: "<<gra;
	return 0;
}
