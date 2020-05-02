#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;
float tipo1=0, tipo2=0, tipo3=0, tipo4=0, tipo5=0, mctipo2=0, totvin, v;
int i, ano, j, n;

int main(){
	setlocale(LC_ALL,"spanish");
	cout<<"Digite la cantidad de años: "; cin>>n;
	for(i=1;i<=n;i++){
		totvin=0;
		for(j=1;j<=5;j++){
			
			cout<<j<<") Cantidad de litros de vino: "; cin>>v;
			totvin+= v;
			switch(j){
				case 1:
					tipo1+= v; break;
				case 2:
					tipo2+= v; 
					if(v>mctipo2){
						mctipo2= v;
						ano= i;
					}break;
				case 3:
					tipo3+= v; 
					if(v=0){
						cout<<"El año: "<<i<<endl;
						cout<<"No se produjo vino tipo 3";
					}break;
				case 4:
					tipo4+= v; break;
				case 5:
					tipo5+= v; break;
			}
			
		}
		cout<<"\nTotal de litros producidos por año: "<<totvin<<endl;
		system("pause");
		system("cls");
	}
	system("cls");
	cout<<"\nTotal tipo1: "<<tipo1<<endl;
	cout<<"Total tipo2: "<<tipo2<<endl;
	cout<<"Total tipo3: "<<tipo3<<endl;
	cout<<"Total tipo4: "<<tipo4<<endl;
	cout<<"Total tipo5: "<<tipo5;
	cout<<"\nAño en que se produjo mayor cantidad vino tipo2: "<<ano<<endl;
	cout<<"Cantidad de litros: "<<mctipo2;
	return 0;
}
