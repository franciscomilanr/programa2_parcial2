/* 
Autor: Franciscomilan
Fecha: 24/03/2022
Escuela: Universidad uvm
Materia: Programacion estructurada
Profesor: Armando Cruz
Ciclo: 01/2022
Descripcion: Programa 2 del parcial 2 que esta basado en 2_1, ahora con 
arreglos, calculara imprimir, media, varianza, desviacion estandar, 
mediana, ordenar por edad para la materia programacion estructurada 
*/

//Librerias	
#include<stdio.h>
#include<math.h>
// Definciones
#define MAX 5 
//Principal
int main() {
	//Variables
	unsigned char edades[MAX], aux;
	unsigned int centro, suma=0;	
	float media, sumaV=0, var, desviacion, mediana;	
	//Leer datos del teclado para llenar el arreglo
	for (int i=0;i<MAX;i++) {
		printf(" Introduce la edad del alumno #%d ",i);
		scanf("%d",&edades[i]);
	}
	//Imprimir el arreglo
	printf(" Listado de Alumnos \n");
	for (int i=0;i<MAX;i++) {
		printf(" Edad del alumno #%d: %d\n", i, edades[i]);
	}
	//Calcular la media
	for (int i=0; i<MAX; i++) {
		suma=suma+edades[i];
	}
	media=(float)suma/MAX; 
	printf(" La media es %.2f\n", media);
	//Calcular varianza
	sumaV=0; 
	for (int i=0;i<MAX;i++) {
		sumaV=sumaV+pow(edades[i]-media, 2);
	}
	var=suma/MAX;
	printf(" La varianza es %.2f\n", var);
	//Desviacion estandar
	desviacion=sqrt(var);
	printf(" La desviacion estandar es %.2f\n",desviacion);
	//Ordenamiento del arreglo por el metodo de la burbuja
	for(int z=1; z<MAX; ++z) {
		for (int v=0; v<(MAX - z); v++) {
			if(edades[v]>edades[v+1]) {
				aux=edades[v];
				edades[v]=edades[v+1];
				edades[v+1]=aux;
			}
		}
	}
	//Imprimir el arreglo ordenado
	printf(" Listado de Alumnos ordenado \n");
	for (int i=0;i<MAX;i++) {
		printf(" Edad del alumno #%d: %d\n", i, edades[i]);
	}
	// Calcular la mediana (centro)
	if (MAX%2==0) {
		centro=MAX/2;
		mediana=(edades[centro] + edades[centro-1])/2.0;
	} else {
		centro=MAX/2;
		mediana=edades[centro];
	}
	printf(" La mediana es %.2f \n", mediana);
	//Retorno
	return 0;
}
