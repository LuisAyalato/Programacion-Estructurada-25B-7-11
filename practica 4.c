
#include<stdio.h>

int main(){
	
	float calificacion;
	int edad;

	
	printf("Ingrese la calificacion de 0 a 100:"); scanf("%f",&calificacion);
	printf("Ingrese la la edad:\n"); scanf("%i",&edad);
	
	if(calificacion >= 60){
	
		
		printf("El alumno esta aprobado con: %.1f y tiene: %d años\n",calificacion,edad);
		
	}
	 else{
	 	printf("El alumno esta reprobado con: %.1f y tiene %d años\n",calificacion,edad);
	 }
	if(edad >= 18){
		
		printf("El alumno es mayor de edad\n");
	}
	else{
		printf("El alumno es menor de edad\n");
	
		}
	
	return 0;
}
