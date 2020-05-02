#include <stdio.h>
#include <iostream>

using namespace std;
float prebas, imp, pretot;

int main(){
	cout<<"Digite un precio: "; cin >>prebas;
	if(prebas>500){
		imp=20*0.30+((prebas-40)*0.50);
	}
	else{
		if(prebas>40){
			imp=20*0.30+((prebas-40)*0.40);
		}
		else{
			if(prebas>20){
				imp=(prebas-20)*0.30;
			}
			else{
				imp=0;
			}
		}
	}
	pretot=prebas+imp;
	cout<<"\nEl precio basico del ariculo es: "<<prebas<<endl;
	cout<<"Costo total del producto: "<<pretot;
	return 0;
}
