#include <stdio.h>
#include <iostream>

using namespace std;

char nom;
float lon, pes, peskil, longmet;


int main( ){
	cout<<"Digite un nombre de dinosaurio: "; cin>>nom;
	cout<<"Digite el peso en toneladas: "; cin>>pes;
	cout<<"Digite el altura en pies: "; cin>>lon;
	peskil=(pes*1000);
	longmet=(lon*0.3047);
	cout<<"\nEl nombre del dinosaurio es: "<<nom<<endl;
	cout<<"El peso en kg: "<<peskil<<endl;
	cout<<"La altura en metros: "<<longmet<<endl;
	return 0;
}
