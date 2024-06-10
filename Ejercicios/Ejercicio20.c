#include <stdio.h>

// Declaración de la función calcularSumaFactoriales
void sumaFactoriales(int n);

int main() {
    int n; // Declaración de variables
    printf("Calcular la suma de los factoriales de los primeros n números\n"); // Descripción del programa
    printf("Ingrese un número: "); // Solicita al usuario ingresar un número
    scanf("%d", &n); // Almacena el número ingresado

    // Llama a la función para calcular la suma de los factoriales
    sumaFactoriales(n);

    return 0;
}

// Definición de la función calcularSumaFactoriales
void sumaFactoriales(int n) {
    int i = 1; // Contador
    long long numero = 1, suma = 0; // Variables para números grandes

    printf("Si n = %d, suma = ", n);

    // Bucle while para calcular la suma de los factoriales
    while (i <= n) {
        numero *= i; // Calcula el factorial
        suma += numero; // Suma el factorial
        if (i == 1) {
            printf("%d!", i); // Imprime el factorial
        } else {
            printf(" + %d!", i); // Imprime los otros factoriales con el signo más
        }
        i++;
    }

    printf(" = "); // Imprime el signo igual

    numero = 1;
    i = 1; // Reinicializa el contador
    while (i <= n) {
        numero *= i; // Calcula el factorial
        printf("%lld", numero); // Imprime el factorial
        if (i != n) {
            printf(" + "); // Imprime el signo de suma
        }
        i++; // Incrementa el contador
    }

    printf(" = %lld\n", suma); // Imprime la suma de los factoriales
}
