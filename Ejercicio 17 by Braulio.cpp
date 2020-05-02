#include <stdio.h>
#include <iostream>

float cal;

int main(){
	printf("Digite su calificacion: "); scanf("%f",&cal);
	if(cal>=8){
		puts("Aprobado");
	}
	else{
		puts("Reprobado");
	}
	return 0;
}
