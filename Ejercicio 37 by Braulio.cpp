#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;
int i, n, num, cuecer=0;

int main(){
	cout<<"Digite la cantidad de datos: "; cin>>n;
	for(i=1;i<=n;i++){
		cout<<i<<") Digite el numero: "; cin>>num;
		if(num==0){
			cuecer=cuecer+1;
		}
	}
	cout<<"\nCantidad de ceros: "<<cuecer;
	getch();
	return 0;
}
