#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <conio.h>

using namespace std;
float can1=0, can2=0, can3=0, can4=0, sumv, por1, por2, por3, por4;
int voto;

int main(){
	cout<<"Digite su voto: "; cin>>voto;
	do{
		switch(voto){
			case 1: can1+=1;break;
			case 2: can2+=1;break;
			case 3: can3+=1;break;
			case 4: can4+=1;break;
		}
		system("cls");
		cout<<"Digite su voto: "; cin>>voto;
	}while((voto>0)||(voto<0));
	system("cls");
	sumv= can1+can2+can3+can4;
	por1= (can1/sumv)*100;
	por2= (can2/sumv)*100;
	por3= (can3/sumv)*100;
	por4= (can4/sumv)*100;
	cout<<"\nVoto candidato 1: "<<can1<<"\tPorcentaje: "<<por1<<endl; 
	cout<<"Voto candidato 2: "<<can2<<"\tPorcentaje: "<<por2<<endl; 
	cout<<"Voto candidato 3: "<<can3<<"\tPorcentaje: "<<por3<<endl; 
	cout<<"Voto candidato 4: "<<can4<<"\tPorcentaje: "<<por4; 
	return 0;
}
