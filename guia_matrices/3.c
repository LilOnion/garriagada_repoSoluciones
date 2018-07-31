//Cree una matriz cuadrada A de NxN
//luego pida al usuario rellenarla.
//Al final del proceso, entregue al usuario un resumen con:
// La matriz, la sumatoria de los valores de sus filas 
// y luego la sumatoria de los valores de toda la matriz.

#include <stdio.h>
#include <stdlib.h>

void llenar_matriz(int tamanio, int a[tamanio][tamanio]){
	
	for(int i=0; i<tamanio; i++){
		for(int j=0; j<tamanio; j++){
			printf("Ingrese los valores de la ubicacion (%d,%d)", i, j);
			scanf("%d",&a[i][j]);
		}
	}
	system("clear");
}

void imprimir_matriz(int tamanio, int a[tamanio][tamanio]){

	for(int i=0; i<tamanio; i++){
		for(int j=0; j<tamanio; j++){
			printf("%d   ", a[i][j]);
		}
		printf("\n\n");
	}
}
void sumar_columnas(int tamanio, int a[tamanio][tamanio]){
}
void sumar_filas(int tamanio, int a[tamanio][tamanio]){
	int sumatoria=0;
	for(int i=0; i<tamanio; i++){
		for(int j=0; j<tamanio; j++){
			sumatoria+=a[i][j];
		}
		printf("suma fila %d:  %d\n",i,sumatoria);
		sumatoria=0;
	}
}
void sumar_matriz(int tamanio, int a[tamanio][tamanio]){
	int sumatoria=0;
	for(int i=0; i<tamanio; i++){
		for(int j=0; j<tamanio; j++){
			sumatoria+=a[i][j];
		}
	}
	printf("\nsuma matriz:  %d\n",sumatoria);
}
int main(){
	
	int tamanio;
	
	printf("Ingrese el tamaño del tablero: ");
	scanf("%d",&tamanio);
	
	//matriz
	int a[tamanio][tamanio];
	// llenar la matriz con valores
	llenar_matriz(tamanio, a);
	// imprimir la matriz
	imprimir_matriz(tamanio, a);
	//sumatoria filas
	sumar_filas(tamanio, a);
	//sumatoria columnas
	sumar_columnas(tamanio, a);
	//sumatoria de la matriz
	sumar_matriz(tamanio, a);
	return 0;
}
