//Escriba un programa que cree una matriz cuadrada A de NxN, luego rellénela de ceros y asigne 1 en
//su diagonal principal 1 . En otras palabras genere una matriz identidad 2 de 6x6.

#include <stdio.h>
#include <stdlib.h>

int main(){
	
//	printf("Ingrese el tamaño del tablero");
	
	int A[6][6];
	
	// llenar la matriz de ceros
	
	for(int i=0; i<6; i++){
		for(int j=0; j<6; j++){
			A[i][j]=0;
		}
	}
	
	// imprimir la matriz
	
	for(int i=0; i<6; i++){
		for(int j=0; j<6; j++){
			if(i==j){
				A[i][j]= 1;
			}
			printf("%d   ", A[i][j]);
		}
		printf("\n\n");
	}
	return 0;
}

