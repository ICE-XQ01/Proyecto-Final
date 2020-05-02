#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

float ex;
int p, q;

int main(){
	cout<<"Digite un numero: "; cin>>p;
	cout<<"Digite un segundo numero: "; cin>>q;
	ex=pow(p,3)+pow(q,4)-2*pow(p,2);
	if(ex<680){
		cout<<"\nSon validos p: "<<p;
		cout<<"\ty q: "<<q;
	}
	return 0;
}
