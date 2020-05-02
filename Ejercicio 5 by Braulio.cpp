#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;
float a, b, res;

int main(){
	cout<<"Digite un numero: "; cin>>a;
	cout<<"Digite un segundo numero: "; cin>>b;
	res=cbrt(pow(a+b,2));
	cout<<"\nEl resultado es: "<<res;
	return 0;
}
