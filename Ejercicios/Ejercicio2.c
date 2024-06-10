#include <stdio.h>

void inversoNumero(long numero); // Declaramos la funcion 

int main() {
    long numero, invertido = 0; // Defino variables
    printf("Dado un numero presentar su inverso\n"); // Programa que se va a realizar
    printf("Ingrese un numero: "); // Pedir al usuario que ingrese un numero 
    scanf("%ld", &numero); 

    inversoNumero(numero); // Llamamos a la funcion

    return 0;
}

// Definición de la función inversoNumero
void inversoNumero(long numero) {
    long invertido = 0; // Variable para almacenar el número invertido

    // Bucle
    while (numero != 0) {
        int i = numero % 10; 
        invertido = invertido * 10 + i;
        numero /= 10;
    }

    printf("El numero invertido es: %ld\n", invertido); // Presento la serie 
}
