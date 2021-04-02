#include <stdio.h>
/*
a) Haga una función que devuelva el cuadrado de un número
b) Haga la función anterior, pero devolviendo un tipo void
c) Al recibir una variable muestre por pantalla la dirección y el contenido de la
variable
*/
int cuadrado (int variable)
{
    int cuadr;
    cuadr = variable*variable;
    return cuadr;
}

int main()
{
    int var, resultado;
    printf("ingrese un numero : \n");
    scanf("%d",&var);
    resultado = cuadrado(var);
    printf("al cuadrado es: %d \n", resultado);
    getchar();
    return 0;
}