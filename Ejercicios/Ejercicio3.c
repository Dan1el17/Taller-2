#include <stdio.h>

void calcularPotencia(int base, int exponente); // Declaramos la funcion

int main() {
    int b1, e1; // Defino variables

    printf("Calcular la potencia de un número utilizando sumas sucesivas.\n"); // Programa que se va a realizar
    printf("Ingrese la base: "); // Pedir al usuario que ingrese la base
    scanf("%d", &b1); // Almacenar la base ingresada
    printf("Ingrese el exponente: "); // Pedir al usuario que ingrese el exponente
    scanf("%d", &e1); // Almacenar el exponente ingresado

    calcularPotencia(b1, e1); // Llamamos a la funcion

    return 0;
}

// Definición de la función calcularPotencia
void calcularPotencia(int base, int exponente) {
    int i = 0; // Variable para controlar el bucle
    long resultado = 1; // Variable para almacenar el resultado de la potencia

    // Imprimimos la secuencia
    printf("%d ^ %d = ", base, exponente);
    
    // Bucle 
    while (i < exponente) {
        resultado *= base; // Multiplicamos el resultado por la base
        printf("%d", base);

        if (i != exponente - 1)
            printf(" * ");

        i++;
    }

    printf(" = %ld\n", resultado); // Presenta el resultado
}
