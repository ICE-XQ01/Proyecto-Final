#include <stdio.h>
#include <iostream>

using namespace std;

float gal, total;

int main(){
	cout<<"Cantidad de galones: "; cin>>gal;
	total=(gal*3.785*8.20);
	cout<<"\nCosto total al cliente: "<<total<<endl;
	return 0;
}
