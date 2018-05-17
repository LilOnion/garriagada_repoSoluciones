//dado X, calcule raiz digital de X
//raiz digital = suma de los digitos que lo componen
//repetir la raiz digital hasta obtener una cifra de resultado
//el ultimo numero que queda es el valor de X
//ejemplo: 347-->3+4+7=14-->1+4=5-->raizdigital(347)=5

#include <stdio.h>
#include <stdlib.h>

int numero(){
	int num;
	printf("Ingrese un numero natural:\n");
	scanf("%d",&num);
	return num;
}

int raiz_digital(int num){
	int raiz=0,resto;
	while(num!=0){
		resto=(num%10);
		raiz=(raiz+resto);
		num=(num/10);
		//printf("%d\n",suma);

	}
		return raiz;
}
/*int raiz_digital(int num, int suma, int x){
	suma_cifras(num);
	for(num<9;num=9;){
		x=num%10;
		}
	return ;*/

int main(){
	int num,raiz;
	num = numero();
	while (num>9){
		num = raiz_digital(num);
	}
	printf("La raiz digital es %d",num);
	return 0;
}
