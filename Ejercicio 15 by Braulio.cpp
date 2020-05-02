#include <stdio.h>
#include <iostream>

float cal;

int main(){
	printf("Digite la calificacion: "); scanf("%f",&cal);
	if(cal>8){
		printf("APROBADO");
	}
	return 0;
}
