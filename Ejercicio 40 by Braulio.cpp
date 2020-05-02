#include <stdio.h>
#include <iostream>
#include <math.h>
#include <conio.h>
#include <cstdlib>

using namespace std;
float sumpar=0, sumimp=0, propar;
int i, num,cuepar=0;

int main(){

	for(i=1;i<=270;i++){
		cout<<i;
	    cout<<") Digite un numero: "; cin>>num;
		if((num<0)||(num>0)){
			if((pow(-1,num))>0){
				sumpar=sumpar+num;
				cuepar=cuepar+1;
			}
			else{
				sumimp=sumimp+num;
			}
		}
	}
	
	propar=sumpar/cuepar;
	system("cls");	
	cout<<"\nPromedio de pares: "<<propar<<"\tSuma de numeros impares: "<<sumimp;
	return 0;
}
