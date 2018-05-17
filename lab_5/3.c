//leer numero natural de 4 cifras, diferentes entre si
//usar la funcion numero_mayor(int numero)
//para calcular el mayor numero que se pueda forma con las cifras
//usar la funcion numero_menor(int numero)
//para calcular el menor numero que se pueda formar con las cifras

#include <stdio.h>
#include <stdlib.h>

int numero_normal(){
	int numero;
	printf("Ingrese un numero entero, de 4 cifras:\n");
	scanf("%d",&numero);
	return numero;
}
int numero_mayor(int numero){
	float resto;
	resto=numero_normal%10;
	printf("resto %f",resto);
	return numero;
}
int numero_menor(int numero){
	float resto;
	resto=numero_normal%10;
	printf("resto %f",resto);
	return numero;
}
int main(){
	float numero;
	numero_normal();
	numero_mayor(numero);
	numero_menor(numero);
	return 0;
}
