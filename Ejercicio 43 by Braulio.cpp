#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <conio.h>

using namespace std;
float nom=0, sue, nsue;

int main(){
    cout<<"Digite el sueldo: ";
	cin>>sue;
	
	do{
		if(sue<1000){
			nsue= sue*1.15;
		}
		else{
			nsue= sue*1.12;
		}
		nom+= nsue;
		cout<<"\nEl nuevo sueldo es: "<<nsue;
		getch();
		system("cls");
		cout<<"Digite el sueldo: "; cin>>sue;
		
	}while((sue<-1)||(sue>-1));
	
	cout<<"\nLa nomina es: "<<nom;
	getch();
	return 0;
}
