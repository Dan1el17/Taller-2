#include <stdio.h>

void numeroTriangular(); // Declaración de la función

int main() {
    numeroTriangular(); // Llamada a la función
    return 0;
}

void numeroTriangular() {
    int n, n1 = 0; // Declaración de variables

    printf("Calcular el n-esimo numero triangular\n"); // Descripción del programa
    printf("Ingrese un numero: "); // Solicita al usuario ingresar un número
    scanf("%d", &n); // Almacena el número ingresado

    printf("Si n = %d, el numero triangular es ", n);

    int i = 1; // Contador
    // Bucle while para calcular el enésimo número triangular
    while (i <= n) { 
        n1 += i; // Suma los números
        printf("%d", i); // Imprime la serie

        if (i != n) {
            printf(" + "); // Agrega el signo de la suma
        }

        i++; // Incrementa el contador
    }

    printf(" = %d\n", n1); // Imprime el resultado
}
