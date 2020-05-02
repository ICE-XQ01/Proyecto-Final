#include <stdio.h>
#include <iostream>

using namespace std;
double tem;
int n;

int main(){
	cout<<"Digite una cantidad de sonidos: "; cin>>n;
	if(n>0){
		tem=((float(n))/4)+40;
		cout<<"\nTemperatura: "<<tem;
	}
	return 0;
}
