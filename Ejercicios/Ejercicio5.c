#include <stdio.h>

void serieFibonacci(int numero); // Declaramos la funcion

int main() {
    int numero; // Iniciamos la serie de Fibonacci

    printf("Calcular los n numeros de la serie de Fibonacci\n"); // Programa que se va a realizar
    printf("Ingrese el numero de elementos que desea calcular: "); // Pedimos que ingrese un numero al azar
    scanf("%d", &numero); // Almacenamos el numero 

    serieFibonacci(numero); // Llamamos a la funcion

    return 0;
}

// Definición de la función calcularFibonacci
void serieFibonacci(int numero) {
    int n1 = 0, n2 = 1, n3; // Inicializamos los primeros dos números de Fibonacci

    // Bucle 
    int i = 0;
    while (i < numero) { 
        printf("%d, ", n1); // Imprimimos el elemento actual de la serie
        n3 = n1 + n2; // Calculamos el siguiente número
        n1 = n2; // Actualizamos los valores para el siguiente cálculo
        n2 = n3; // Obtenemos el siguiente numero
        i++;
    }
}
