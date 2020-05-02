#include <stdio.h>
#include <iostream>

using namespace std;
int i, sumser=0, band='t';
int main(){
	cout<<"Los numeros son:"<<endl;
	for(i=2;i<=1800;){
		sumser+= 1;
		cout<<i<<endl;
		if(band=='t'){
			band='f';
			i+=3;
		}
		else{
			band='t';
			i+=2;
		}
	}
	cout<<"\nSuma de los terminos: "<<sumser;
	return 0;
}

