#include <stdio.h>
#include <iostream>

using namespace std;
float sumpos=0, sumotr=0, progen, propos;
int i, cuepos=0, n, num; 

int main(){
	cout<<"Digite la cantidad de datos: "; cin>>n;
	cout<<"\n";
	for(i=1;i<=n;i++){
		cout<<i<<") Digite el numero: "; cin>>num;
		if(num>0){
			sumpos+= num;
			cuepos+= 1;
		}
		else{
			sumotr+= num;
		}
    }
    progen=(sumpos+sumotr)/n;
    propos=sumpos/cuepos;
    cout<<"\nCantidad de numeros positivos: "<<cuepos<<endl;
    cout<<"Promedio de numeros positivos: "<<propos<<endl;
    cout<<"Promedio general: "<<progen;
    
    return 0;
}
