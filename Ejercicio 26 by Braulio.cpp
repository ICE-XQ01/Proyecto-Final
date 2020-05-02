#include <stdio.h>
#include <iostream>

using namespace std;
int num;

int main(){
	cout<<"Digite un numero: "; cin>>num;
	if(num>0){
		cout<<"\nPositivo";
	}
	else{
		if(num==0){
			cout<<"\nNulo";
		}
		else{
			cout<<"\nNegativo";
		}
	}
	return 0;
}
