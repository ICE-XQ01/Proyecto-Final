#include <stdio.h>
#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;
double serie=0;
int i, n;

int main(){
	cout<<"Digite la cantidad de terminos: "; cin>>n;
	for(i=1;i<=n;i++){
		serie= serie+(pow(i,i));
	}
	cout<<"\nLa suma de la series es: "<<setprecision(1)<<fixed<<serie;
	return 0;
}
