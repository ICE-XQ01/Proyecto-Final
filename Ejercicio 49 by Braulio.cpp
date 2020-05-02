#include <stdio.h>
#include <iostream>

using namespace std;
int i, pri=0, seg=1, sig, num;

int main(){
	cout<<"Digite la posicion del numero: "; cin>>num;

	for(i=3;i<=num;i++){
		sig= pri+seg;
		pri= seg;
		seg= sig;
	}
    cout<<"\nEl numero es: "<<sig;
	return 0;
}
