#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;
float nomin, sue;

int main(){
	for(int i=1;i<=10;i++){
		cout<<i<<") Digite el sueldo: "; cin>>sue;
		nomin=nomin+sue;
	}
	cout<<"\nLa nomina es: "<<nomin;
	
	getch();
	return 0; 
}
