#include <stdio.h>
#include <iostream>

using namespace std;
float base, altura, area, perimetro;

int main() {
	cout<<"Digite una altura: "; cin>>altura;
	cout<<"Digite una base: "; cin>>base;
	area=(base*altura);
	perimetro=(base+base+altura+altura);
	cout<<"\nSu area es: "<<area<<endl;
	cout<<"Su perimetro es: "<<perimetro<<endl;
	return 0;	
}
