#include <stdio.h>
#include <iostream>
#include <math.h>
#include <cstdlib>

using namespace std;
int num;

int main(){
	cout<<"Digite un numero: "; cin>>num;
	if(num>0){
		system("cls");
		cout<<"Los numero son: "<<endl;
		cout<<"\n";
		do{
			cout<<"\t"<<num<<endl;
			if((pow(-1,num))>0){
				num= num/2;
			}
			else{
				num=(num*3)+1;
			}
		}while((num<1)||(num>1));
	}
	else{
		cout<<"El numero tiene que ser positivo";
	}
	
	cout<<"\t"<<num<<endl;
	system("pause");
	return 0;
}
