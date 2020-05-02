#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;
float val;
int var, num; 
int main(){
	cout<<"Digite un numero: "; cin>>num;
	cout<<"Digite una variable: "; cin>>var;
	switch(num){
		case 1:
			val=(100*var);
			cout<<"\nSu valor es: "<<val<<endl;break;

		case 2:
			val=pow(100,var);
			cout<<"\nSu valor es: "<<val<<endl;break;
			
		case 3:
			val=(100/var);
			cout<<"\nSu valor es: "<<val<<endl;break;
		default: printf ("\nSu valor es: 0");	
	}
	return 0;
}
