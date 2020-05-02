#include <stdio.h>
#include <iostream>

float sueldo, nsue;

int main(){
	printf("Digite su sueldo: "); scanf("%f",&sueldo);
	if(sueldo<1000){
		nsue=(sueldo*1.15);
	}
	else{
		nsue=(sueldo*1.12);
	}
	printf("\nSu nuevo sueldo es: %f",nsue);
	return 0;
}
