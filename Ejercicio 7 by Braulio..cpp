#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;
float num, cubo, cuadro;

int main(){
	cout<<"Digite un numero: "; cin>>num;
	cuadro=pow(num,2);
	cubo=pow(num,3);
	cout<<"\nEl cuadrado es: "<<cuadro;
	cout<<"\tEl cubo es: "<<cubo;
	return 0;
}
	
