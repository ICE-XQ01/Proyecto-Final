#include <stdio.h>
#include <iostream>

using namespace std;
float sue, nsue;
int cate;

int main(){
	cout<<"Digite su sueldo: "; cin>>sue;
	cout<<"Digite su categoria: "; cin>>cate;
	switch(cate){
		case 1:
			nsue=(sue*1.15);break;
		case 2:
			nsue=(sue*1.10);break;
		case 3:	
		    nsue=(sue*1.08);break;
		case 4:
			nsue=(sue*1.07);break;
	}
	cout<<("\nSu nuevo sueldo es: ")<<nsue<<endl;
	return 0;
}
