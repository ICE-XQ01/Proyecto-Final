#include <stdio.h>
#include <iostream>

using namespace std;
float calif1, calif2, calif3, calif4, calif5, prom;
int mat;

int main(){
	cout<<"Digite su matricula: "; cin>>mat;
	cout<<"Digite su primera calificacion: "; cin>>calif1;
	cout<<"Digite su segunda calificacion: "; cin>>calif2;
	cout<<"Digite su tercera calificacion: "; cin>>calif3;
	cout<<"Digite su cuarta calificacion: "; cin>>calif4;
	cout<<"Digite su quinta calificacion: "; cin>>calif5;
	prom=(calif1+calif2+calif3+calif4+calif5)/5;
	cout<<"\nSu matricula es: "<<mat<<endl;
	cout<<"Su promedio es: "<<prom<<endl;
	return 0;
}
