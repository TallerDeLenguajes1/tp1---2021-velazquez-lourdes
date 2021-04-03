#include <stdio.h>
/*
a) Haga una función que devuelva el cuadrado de un número
b) Haga la función anterior, pero devolviendo un tipo void
c) Al recibir una variable muestre por pantalla la dirección y el contenido de la
variable
d) Dado dos parámetros de entrada, deberá invertir los valores entre ambos.
e) Dado dos parámetros de entrada, deberá devolverlos de forma ordenada, en el
primer parámetro el menor y en el segundo el mayor.
f) Utilice las función anteriores para leer pares de valores e imprimirlos por
pantalla.
*/
int cuadrado (int variable)
{
    int cuadr;
    cuadr = variable*variable;
    return cuadr;
}

void cuadr_void (int variable)
{
    int resultado;
    resultado = variable*variable;
    printf("el numero %d al cuadrado es:  ", variable);
    printf("%d \n", resultado);
    return;
}
void invertir (int a, int b)
{
    int aux;
    printf("INVERTIR NUMEROS \n");
    printf("ingrese el numero para la variable A: \n ");
    scanf("%d", &a);
    printf("ingrese el numero para la variable B: \n");
    scanf("%d", &b);
    aux =a;
    a=b;
    b=aux;
    printf("el numero dentro de la variable A es: %d \n ", a);
    printf("el numero dentro de la variable B es: %d \n", b);
    return;
}
void ordenar (int c, int d)
{
    int aux;
    printf("ORDEN DE LOS NUMEROS \n");
    printf("ingrese el numero para la variable C: \n");
    scanf("%d", &c);
    printf("ingrese el numero para la variable D: \n");
    scanf("%d", &d);
    if (c<d)
    {
        printf("el numero %d es menor que el numero %d", c, d);
    }
    else if (c=d)
    {
        printf("los numeros son iguales");
    }
    else
    {
        printf("el numero %d es menor que el numero %d", d, c);
    }
    return;

}
int main()
{
    int var, resultado, A, B, C, D;
    printf("ingrese un numero : \n");
    scanf("%d",&var);
    resultado = cuadrado(var);
    printf("El numero %d", var );
    printf("  al cuadrado es: %d \n", resultado);
    cuadr_void(var);
    invertir(A, B);
    ordenar(C, D);
    getchar();
    return 0;
}
