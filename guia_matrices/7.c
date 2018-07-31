//Cree un programa que lea los elementos de una matriz de 4 X 5 y genere un vector de largo 4 en el
//que cada elemento contenga la sumatoria de los elementos de cada fila. El programa debe mostrar la
//matriz original y el vector en este formato (evidentemente, los valores deben ser los que correspondan
//a lo introducido por el usuario).

#include <stdio.h>
#include <stdlib.h>

void llenar_matriz(int a, int l, int matriz[a][l]){
	
	for (int i=0; i<a; i++){
		for (int j=0; j<l; j++){
			
			printf("Ingrese valor de la matriz en (%d,%d): \n",i,j);
			scanf("%d", &matriz[i][j]);
		}
	}
}



void imprimir_matriz(int a, int l, int matriz[a][l]){
	
	int contador;
	
	for(int i=0; i<a; i++){
		contador=0;
		for(int j=0; j<l; j++){
			if(j<4){
				contador+=matriz[i][j];
				printf("%d   ", matriz[i][j]);
			}
			else{
				printf("= %d\n",contador);
			}
		}
		printf("\n\n");
	}

}

int main(){
	
	int a=4, l=5;
	
	int matriz[a][l];
	
	llenar_matriz(a,l,matriz);

	imprimir_matriz(a,l,matriz);
	
	return 0;
}
		
