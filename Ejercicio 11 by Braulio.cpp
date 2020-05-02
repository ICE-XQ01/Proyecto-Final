#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;
float rad, alt, area, vol;

int main(){
	cout<<"Digite una altura: "; cin>>alt;
	cout<<"Digite un radio: "; cin>>rad;
	vol=(3.141592*(pow(rad,2))*alt);
	area=(2*3.141592*rad*alt);
	cout<<"\nEl volumen es: "<<vol<<endl;
	cout<<"El area es: "<<area<<endl;
	return 0;	
}
