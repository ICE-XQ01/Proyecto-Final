#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;
int a;

int main(){
	cout<<"Digite un numero: "; cin>>a;
	if(a==0){
		cout<<"\nNulo";
	} 
	else{
		if(pow(-1,a)>0){
			cout<<"\nPar";
		}
		else{
			cout<<"\nImpar";
		}
	}
	return 0;
}
