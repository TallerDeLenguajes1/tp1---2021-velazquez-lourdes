#include <stdio.h>
/*Declare un puntero en el procedimiento principal que apunte a una variable de
algún tipo y muestre por pantalla lo siguiente:
a) El contenido del puntero
b) La dirección de memoria almacenada por el puntero.
c) la dirección de memoria de la variable.
d) la dirección de memoria del puntero.
e) el tamaño de memoria utilizado por esa variable usando la función sizeof()*/
int main()
{
    int variable = 1;
    int *puntero_variable = &variable;
    printf("Contenido del puntero:  %d \n", *puntero_variable);
    printf("Direccion de memoria almacenada por el puntero  %u \n", puntero_variable);
    printf("Direccion de memoria de la variable: %u \n", &variable);
    printf("Direccion de memoria del puntero: %u \n", &puntero_variable);
    printf("Tamano de memoria utilizado por esa variable usando la funcion sizeof(): %u", sizeof(variable));
    getchar();
    return 0;
}