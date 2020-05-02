#include <stdio.h>
#include <iostream>

using namespace std;
float m;
int i, sp=0, j;
char band;

int main(){
	cout<<"Digite el numero limite: "; cin>>m;
	if(m>=1){
		sp+= 1;
		cout<<"\nNumero primo: "<<1<<endl;
		if(m>=2){
			sp+= 1;
			cout<<"Numero primo: "<<3<<endl;
		}
	}

	for(i=3;i<=m;i+= 2){
			band= 'v';
	        j= 3;
		do{
			if((i%j)== 0){
				band= 'f';
			}
			
			j+= 2;
		}while((j<(i/2))&&(band=='v'));
		
		if(band=='v'){
			cout<<"numero primo: "<<i<<endl;
			sp+= 1;
		}
		
	}
	cout<<"\nEntre el 1 y el "<<m<<" hay "<<sp<<" numeros primos";
	
	return 0;
}
