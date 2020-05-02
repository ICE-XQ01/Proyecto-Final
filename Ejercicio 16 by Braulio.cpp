#include <stdio.h>
#include <iostream>

float sue, aum, nsue;

int main(){
	printf("Digite su sueldo: "); scanf("%f",&sue);
	if(sue<1000){
		aum=(sue*0.15);
		nsue=(sue+aum);
		printf("\nSu nuevo sueldo es: %f",nsue);
	}
	return 0;
}
