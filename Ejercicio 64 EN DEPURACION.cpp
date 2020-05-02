#include <stdio.h>
#include <iostream>

using namespace std;
int primo[1], k, num, divi, band;

int main(){
	primo[1]=2;
	k=2;
	num=3;
	while(k<=30){
		divi=3;
		band='v';
		while((divi<(num/2))&&(band=='v')){
			if((num%divi)==0){
				band='f';
			}
			divi+= 2;
		}
		if(band=='v'){
			primo[k]=num;
			k+=1;
		}
		num+= 2;
		
	}
	cout<<"Los primeros 30 numeros primos son: ";
	cout<<"\n";
	for(k=1;k<=30;k++){
		cout<<k<<")\t"<<primo[k]<<endl;
	}
	return 0;
}
