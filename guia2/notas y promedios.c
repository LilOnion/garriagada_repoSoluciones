/*
 * n=cantidad de notas
 * nc=notas de certamen
 * np=notas de laboratorios o practicos
 * nt=notas de controles
 * nf=notas finales
*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{

float n=0, nc=0, np=0, nt=0, nf=0, np1=0, np2=0, np3=0, np4=0, nt1=0, nt2=0, nt3=0, nt4=0, c1=0, c2=0, c3=0;

printf("Ingrese sus dos primeras notas de certamen\n");
scanf("%f",&c1);
scanf("%f",&c2);
printf("Ingrese sus notas de laboratorio");
scanf("%f",&np1);
scanf("%f",&np2);
scanf("%f",&np3);
scanf("%f",&np4);

nc = (c1+c2+c3)/2;
np = (np1+np2+np3+np4)/n;
nt = (nt1+nt2+nt3+nt4)/n;
nf = (nc*0.7)+(np*0.2)+(nt*0.1);
