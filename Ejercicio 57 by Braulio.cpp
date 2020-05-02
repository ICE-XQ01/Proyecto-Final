#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <iomanip>

using namespace std;
float maypro=0, totanu, mes;
int i, clave, j, n, fabrica;

int main(){
	setlocale(LC_ALL,"spanish");
	cout<<"Numero de fabricas: "; cin>>n;
	if(n<=100){
		for(i=1;i<=n;i++){
			cout<<"Clave de la fabrica: "; cin>>fabrica;
			cout<<"\n";
			totanu=0;
			for(j=1;j<=12;j++){
				cout<<j<<") Produccionde la fabrica: "; cin>>mes;
				totanu+= mes;
				if((j==7)&&(mes>3000000)){
					cout<<"Clave de fabbrica"<<fabrica;
				}
			}
			if(totanu>maypro){
				maypro= totanu;
				clave= fabrica;
			}
			cout<<"\nProduccion anual fabrica "<<fabrica;
			cout<<": $"<<setprecision(2)<<fixed<<totanu<<endl;
			system("pause");
			system("cls");
		}
		cout<<"Fabrica que mas produjo en el año: "<<clave<<endl;
		cout<<"Produccion: $"<<setprecision(2)<<fixed<<maypro;
		
	}
	else{
		cout<<"Error en numero de fabricas";
	}
	return 0;
}
