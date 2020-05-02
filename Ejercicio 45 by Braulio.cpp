#include <stdio.h>
#include <iostream>

using namespace std;
int i, n, num, may=-100000, men=100000;

int main(){
	cout<<"Digite la cantidad de numeros: "; cin>>n;
	cout<<"\n";
	for(i=1;i<=n;i++){
		cout<<i<<") Digite el numero: "; cin>>num;
		if(num>may){
		may=num;
		}
		
		if(num<men){
			men=num;
		}
	}
	cout<<"\nValor maximo: "<<may<<endl;
	cout<<"Valor minimo: "<<men;
	return 0;
}
