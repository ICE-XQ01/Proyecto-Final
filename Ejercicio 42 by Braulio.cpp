#include <stdio.h>
#include <iostream>

using namespace std;
int i, n;
float serie=0;
char band='t';

int main(){
	cout<<"Digite el numero de terminos: "; cin>>n;
	
	for(i=1;i<=n;i++){
		if(band='t'){
			serie= serie+(1/float(i));
			band='f';
		}
		else{
			serie= serie-(1/float(i));
			band='t';
		}
	}
	cout<<"\nLa serie es: "<<serie;
	return 0;
}	
