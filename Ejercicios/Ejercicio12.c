#include <stdio.h>

void calcularSumaImpares(int n); // Declaramos la funcion

int main() {
    int n;
    printf("Calcular la suma de todos los numeros impares desde 1 hasta n\n"); // Programa que se va a realizar
    printf("Ingrese un numero: "); // Pedimos que ingrese un numero al azar
    scanf("%d", &n); // Almacenamos el numero ingresado

    calcularSumaImpares(n); // Llmamamos a la funcion

    return 0;
}

// Definición de la función calcularSumaImpares
void calcularSumaImpares(int n) {
    int suma = 0;
    printf("Si n = %d, la suma de los numeros impares es = ", n); // Imprime el inicio de la expresion
    
    // Bucle para sumar los numeros impares
    for (int i = 1; i <= n; i += 2) {
        suma += i;
        printf("%d", i); // Imprime los numeros de la serie 
        if (i != n - 1 && i != n) {
            printf(" + "); // Agrega el signo de la suma
        }
    }

    printf(" = %d\n", suma); // Imprime el resultado
}

