#include <stdio.h>
#include <iostream>

using namespace std;
float sumgas=0, gasto;

int main(){
	cout<<"Digite el gasto: "; cin>>gasto;
	do{
		sumgas += gasto;
		cout<<"Digite el gasto: "; cin>>gasto;
	}while((gasto<-1)||(gasto>-1));
	cout<<"\nLa suma del gasto es: "<<sumgas;
	return 0;
}
