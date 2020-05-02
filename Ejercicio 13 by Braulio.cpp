#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;
float l1, l2, l3, s, area;

int main(){
	cout<<"Digite el primer lado: "; cin>>l1;
	cout<<"Digite el segundo lado: "; cin>>l2;
	cout<<"Digite el tercer lado: "; cin>>l3;
	s=(l1+l2+l3)/2;
	area=sqrt(s*(s-l1)*(s-l2)*(s-l3));
	cout<<"\nEl area es: "<<area<<endl;
	return 0;	
}
