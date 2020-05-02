#include <stdio.h>
#include <iostream>
#include <cstdlib>

using namespace std;
float arno=0, arce=0, arsu=0, mersu=50000, rno, rce, rsu, prorce;
int i, mes;

int main(){
	for(i=1;i<=12;i++){
		cout<<i<<") Cantidad de lluvias en el norte: "; cin>>rno;
		cout<<i<<") Cantidad de lluvias en el centro: "; cin>>rce;
		cout<<i<<") Cantidad de lluvias en el sur: "; cin>>rsu;
		arno+= rno;
		arce+= rce;
		arsu+= rsu;
		if(rsu<mersu){
			mersu= rsu;
			mes= i;
		}
		system("cls");
	}
	prorce = arce/12;
	cout<<"Promedio region centro: "<<prorce<<endl;
	cout<<"Mes con menor lluvias reg. sur: "<<mes<<endl;
	cout<<"Registro del mes: "<<mersu<<endl;
	if(arno>arce){
		if(arno>arsu){
			cout<<"La region con mayor lluvia es la region norte";
		}
		else{
			cout<<"La region con mayor lluvia es la region sur";
		}
	}
	else{
		if(arce>arsu){
			cout<<"La region con mayor lluvia es la region centro";
		}
		else{
			cout<<"La region con mayor lluvia es la region sur";
		}
	}
	return 0;
}
