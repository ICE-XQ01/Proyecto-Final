#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;
float x, xx, y, yy, dis;


int main(){
	cout<<"Digite X1: "; cin>>x;
	cout<<"DIGITE Y1: "; cin>>y;
	cout<<"Digite X2: "; cin>>xx;
	cout<<"Digite Y2: "; cin>>yy;
	dis=sqrt(pow(x-xx,2)+pow(y-yy,2));
	cout<<"\nLa distancia es: "<<dis<<endl;
	return 0;
}
