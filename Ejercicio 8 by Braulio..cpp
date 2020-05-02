#include <stdio.h>
#include <iostream>

using namespace std;
float altura, base, area;

int main(){
	cout<<"Digite una altura: "; cin>>altura;
	cout<<"Digite una base: "; cin>>base;
	area=((base*altura)/2);
	cout<<"\nLa superficie del triangulo es: "<<area<<endl;
	return 0;
}
