#include <stdio.h>
#include <iostream>

using namespace std;
int i, n, sum, j;

int main(){
	cout<<"Limite de numeros: "; cin>>n;
	cout<<"\n";
	for(i=1;i<=n;i++){
		sum= 0;
		for(j=1;j<=(i/2);j++){
			    if((i%j)==0){
			    	sum+= j;
			    }
		}
		if(sum==i){
			cout<<i<<" Es un numero perfecto"<<endl;
		}
	}
	return 0;
}

