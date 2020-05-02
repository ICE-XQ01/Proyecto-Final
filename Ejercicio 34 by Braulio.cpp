#include <stdio.h>
#include <iostream>
#include <cstdlib>

using namespace std;
float prom;
int mat, sem;
char car;

int main(){
	cout<<"Digite su matricula: "; cin>>mat;
	cout<<"Digite su promedio: "; cin>>prom;
	cout<<"Digite su semestre: "; cin>>sem; 
	cout<<"\na) Economia"<<endl;
	cout<<"b) Computacion"<<endl;
	cout<<"c) Contabilidad"<<endl;
	cout<<"d) Administracion"<<endl;
	cout<<"\nDigite su carrera: "; cin>>car;
    system("cls");

	switch(car){
		case 'a':
			if(sem>=6&&prom>=8.8){
				cout<<"\n\n\tAceptado: "<<mat;
				cout<<"\tCarrera: Economia";break;
			}
		case 'b':
			if(sem>=6&&prom>=8.5){
			    cout<<"\n\n\tAceptado: "<<mat;
			    cout<<"\tCarrera: Computacion";break;
			}
		case 'c':
		    if(sem>=5&&prom>=8.5){
		    	cout<<"\n\n\tAceptado: "<<mat;
		        cout<<"\tCarrera: Contabilidad";break;
		    }
		case 'd':
		        if(sem>=5&&prom>=8.5){
		        cout<<"\n\n\tAceptado: "<<mat;
		        cout<<"\tCarrera: Contabilidad";break; 
		        }
    }
    return 0;
}
