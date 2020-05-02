#include <stdio.h>
#include <iostream>
#include <cstdlib>

using namespace std;
float sue, phe, nsue;
int cate,he;

int main(){
	cout<<"Digite sueldo: "; cin>>sue;
	cout<<"Digite su categoria: "; cin>>cate;
	cout<<"Digite horas extra: "; cin>>he;
	system("cls");
	switch(he){
		case 1:
			phe=30;break;
		case 2:
			phe-38;break;
		case 3:
			phe=50;break;
		case 4:
			phe=70;break;
		default:
			phe=0;break;
	}
	if(he>30){
		nsue=sue+(30*phe);
	}
	else{
		nsue=sue+(he*phe);
	}
	cout<<"\nSu nuevo sueldo es: "<<nsue;
	return 0;
}
