//Construya un programa en Python que intercambie los renglones de una arreglo bidimensional. Los
//elementos del renglón 1 deben intercambiarse con el del renglón N, los del renglón 2 con los del renglón
//N-1, y ası́ sucesivamente.

#include <stdio.h>
#include <stdlib.h>

void llenar_matriz(int N, int matriz[N][N]){
	
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			printf("Ingrese los valores de la ubicacion (%d,%d)", i, j);
			scanf("%d",&matriz[i][j]);
		}
	}
	system("clear");
}

void imprimir_matriz(int N, int matriz[N][N]){

	printf("La matriz ingresada es:\n");
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			printf("%d   ", matriz[i][j]);
		}
		printf("\n\n");
	}
}

void imprimir_matriz_alterada(int N, int matriz[N][N]){
	
	printf("La matriz resultante es:\n");
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			printf("%d   ",matriz[N-1-i][j]);
		}
		printf("\n\n");
	}
}

int main(){
	
	int N;
	int matriz[N][N];
	
	printf("Ingrese el tamanio de la matriz:\n");
	scanf("%d",&N);
	
	llenar_matriz(N,matriz);
	
	imprimir_matriz(N,matriz);
	
	imprimir_matriz_alterada(N,matriz);
	
}
