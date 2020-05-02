#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;
float a, b, c, dis, x, xx;

int main(){
	cout<<"Digite la variable a:"; cin>>a;
	cout<<"Digite la variablea b:"; cin>>b;
	cout<<"Digite la variable c:"; cin>>c;
	dis=pow(b,2)-4*(a*c);
	if(dis>=0){
		x=((-b)+sqrt(dis))/2*a;
		xx=((-b)-sqrt(dis))/2*a;
		cout<<"\nLas raices reales son x1"<<x;
		cout<<"\ty x2"<<xx;
	}
	return 0;
}
