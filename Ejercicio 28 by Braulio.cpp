#include <stdio.h>
#include <iostream>

using namespace std;
int a, b ,c;

int main(){
	cout<<"Digite el primer numero: "; cin>>a;
	cout<<"Digite el segundo numero: "; cin>>b;
	cout<<"Digite el tercer numero: "; cin>>c;
	if(a<b){
		if(b<c){
			cout<<"\nLos numeros estan en orden creciente";
		}
		else{
			cout<<"\nLos numeros no estan en orden creciente";
		}
	}
	else{
		cout<<"\nLos numeros no estan en orden creciente";
	}
	return 0;
}
