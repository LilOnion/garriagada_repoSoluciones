
#include <stdio.h>

int main()
{
    int anio;

    printf("Introduzca un año: ");
    scanf( "%d", &anio );

    if ( (anio/4 == 0) && (anio/100 != 0 || anio/400 == 0) )
        printf("\n el año %d es bisiesto",anio);
        
    else
        printf("\n el año %d no es bisiesto",anio);

    return 0;
}
