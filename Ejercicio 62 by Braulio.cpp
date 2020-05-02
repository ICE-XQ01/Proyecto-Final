#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <cstdlib>

using namespace std;
int n, i, vec[500], k, j;

int main(){
	cout<<"Ingrese numero de elementos del arreglo: "; cin>>n;
	cout<<"\n";
	
	if((1<=n)||(n<=500)){
		for(i=1;i<=n;i++){
			cout<<i<<") Ingrese valor: "; cin>>vec[i];
		}
		i=1;
		while(i<=n){
			j= i+1;
			while(j<=n){
				if(vec[i]==vec[j]){
					for(k=j;k<=(n-1);k++){
						vec[k]=vec[k+1];
					}
					n--;
				}
				else{
				    j++;	
				}
			}
			i++;
		}	
		getch();
		system("cls");
		cout<<"Arreglo sin repeticiones: ";
		cout<<"\n";
		for(i=1;i<=n;i++){
			cout<<"\t"<<vec[i]<<endl;
		}
	}
	else{
		cout<<"\nEl numero de elementos del arreglo es incorrecto";
	}
	getch();
	return 0;
}
