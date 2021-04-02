#include <stdio.h>
/*
a) Haga una función que devuelva el cuadrado de un número
b) Haga la función anterior, pero devolviendo un tipo void
c) Al recibir una variable muestre por pantalla la dirección y el contenido de la
variable
*/
int cuadrado (int variable)
{
    cuadrado = variable*variable;
}
int main()
{
    int variable, resultado;
    printf("ingrese un numero : ");
    scanf(&variable);
    resultado = cuadrado(variable);
    printf("el numero",variable,"al cuadrado es: ", resultado);


}