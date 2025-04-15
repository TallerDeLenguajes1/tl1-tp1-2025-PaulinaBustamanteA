#include <stdio.h>

int main()
{
    printf("Hola mundo\n");

    int numero = 10;
    int *puntero = &numero;
    // 1)
    printf("El contendio del puntero: %d\n", *puntero);
    // 2)
    printf("La direccion de memoria almacenada por el puntero: %p\n", puntero);
    // 3)
    printf("La direccion de memoria de la variable: %p\n", &numero);
    // 4)
    printf("La direccion de memoria del puntero: %p\n", &puntero);
    // 5)
    printf("Tamaño de memoria utilizado por la varaible: %d\n", (int)sizeof(numero));

    return 0;
}