#include <stdio.h>
#include <iostream>
#include <math.h>
#include <cstdlib>
#include <conio.h>

using namespace std;
float cub;
int num;

int main(){
	cout<<"Digite un numero: "; cin>>num;
	do{
		cub=pow(num,3);
		cout<<"\nSu cubo es: "<<cub;
        getch();
		system("cls");
		cout<<"Digite un numero: "; cin>>num;
	}while((num<-1)||(num>-1));
	
	return 0;
}
