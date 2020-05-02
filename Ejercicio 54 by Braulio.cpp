#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <conio.h>

using namespace std;
float cuenta=0, costo;
int cl=0, dur;
char tipo;

int main(){
	cout<<"Tipo de llamada: "; cin>>tipo;
	cout<<"Duracionde la llamada: "; cin>>dur;
	do{
		switch(tipo){
			case 'i':
				if(dur>3){
					costo= 7.59+((dur-3)*3.03);
				}
				else{
					costo= 7.59;
				}
				break;
			case 'l':
				cl+= 1;
				if(cl>50){
					costo= 0.60;
				}
				else{
					costo= 0;
				}
				break;
			case 'n':
				if(dur>3){
					costo= 1.20+((dur-3)*0.48);
				}
				else{
					costo= 1.20;
				}
				break;
		}
		cuenta+= costo;
		system("cls");
		cout<<"Tipo de llamada: "; cin>>tipo;
	    cout<<"Duracionde la llamada: "; cin>>dur;
	    
	}while(((tipo<'x')||(tipo>'x')) && ((dur<-1)||(dur>-1)));
	getch();
	cout<<"\nLa cuenta es: "<<cuenta;
	return 0;
}
