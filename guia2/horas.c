#include <stdio.h>
#include <stdlib.h>

int main(){

int ha,ch,hf;
/* ha=hora actual
 * ch=cantidad de horas
 * hf=hora final
*/
printf("Ingrese la hora actual:\n");
scanf("%d",&ha);

printf("Ingrese la cantidad de horas:\n");
scanf("%d",&ch);

hf=ha+ch;

if (hf>12){
	
