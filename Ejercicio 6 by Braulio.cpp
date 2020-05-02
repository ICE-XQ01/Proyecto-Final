#include <stdio.h>
#include <iostream>

using namespace std;
float cal1, cal2, cal3, cal4, cal5, prom;
int mat;
 
int main(){
	cout<<"Digite su matricula: "; cin>>mat;
	cout<<"Digite la primera calificacion: "; cin>>cal1;
	cout<<"Digite la segunda calificacion: "; cin>>cal2;
	cout<<"Digite la tercera calificacion: "; cin>>cal3;
	cout<<"Digite la cuarta calificacion: "; cin>>cal4;
	cout<<"Digite la quinta calificacion: "; cin>>cal5;
	prom=(cal1+cal2+cal3+cal4+cal5)/5;
	cout<<"\nSu matricula es: "<<mat;
	cout<<"\tSu promedio es: "<<prom;
	return 0;
}
