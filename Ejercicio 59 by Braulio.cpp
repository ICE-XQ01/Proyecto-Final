#include <stdio.h>
#include <iostream>
#include <cstdlib>

using namespace std;
float s, ac=0, prom;
int i, cont, c;

int main(){
	cout<<"Digite la cantidad de sueldos: "; cin>>c;
	cout<<"\n";
	for(i=1;i<=c;i++){
		cout<<i<<") Sueldo: "; cin>>s;
		ac+= s;
	}
	system("cls");
	prom = ac/c;
	cont=0;
	for(i=1;i<=c;i++){
		cout<<i<<") Sueldo: "; cin>>s;
		if(s>prom){
			cont+= 1;
		}
	}
	cout<<"\nSueldos superiores al promedio: "<<cont<<endl;
	system("pause");
	return 0;
}
