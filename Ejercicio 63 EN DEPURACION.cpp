#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;
int i, votos[12], candidato, ganador, maxvot, totalvot;

int main(){
	for(i=1;i<=12;i++){
		votos[i]=0;
	}
	cout<<"Ingrese el primer voto: "; cin>>candidato;
	while(candidato!=-1){
		votos[candidato]+= 1;
		cout<<"sigiente voto?: "; cin>>candidato;
	}
	getch();
	cout<<"Total de votos por candidato: ";
	cout<<"\n";
	for(i=1;i<=12;i++){
		cout<<"Candidato: "<<i;
		cout<<"\tTotal votos: "<<votos[i]<<endl;
	}
	ganador=1;
	maxvot= votos[1];
	totalvot= votos[1];
	for(i=2;i<=12;i++){
		while(votos[i]>maxvot){
			ganador=i;
			maxvot=votos[i];
		}
		totalvot+= votos[i];
	}
	cout<<"Candidato ganador: "<<ganador<<endl;
	cout<<"Total de votos obtenidos: "<<maxvot<<endl;
	cout<<"Porcentaje de votos obtenidos: "<<((float(maxvot)/float(totalvot))*100)<<"%";
	return 0;
}
