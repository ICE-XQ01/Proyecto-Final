#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;
int num, cuadrado, cubo;

int main(){
	cout<<"Digite un numero: "; cin>>num;
	cuadrado=pow(num,2);
	cubo=pow(num,3);
	cout<<"\nSu cuadrado es: "<<cuadrado<<endl;
	cout<<"Su cubo es: "<<cubo<<endl;
	return 0;
}
