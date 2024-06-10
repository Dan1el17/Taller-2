#include <stdio.h>

void sumaCubos(); // Declaramos la funcion

int main() {
    sumaCubos(); // Llamamos la funcion
    return 0;
}

void sumaCubos() {
    int n; // Declaro variable
    printf("Calcular la suma de los cubos de los primeros n numeros naturales\n"); // Programa que se va a realizar
    printf("Ingrese un numero: "); // Pedimos que ingrese un numero al azar
    scanf("%d", &n); // Almacena el número ingresado 

    int suma = 0; // Contador
    printf("Si n = %d, la suma es = ", n); // Imprime la descripcion

    int i = 1; // Inicializa el contador
    while (i <= n) { // Bucle para calcular la suma de los cubos
        suma += i * i * i; // Agrega el cubo del número actual a la suma
        printf("%d^3", i); // Imprime el cubo

        if (i != n) {
            printf(" + "); // Agrega el signo de la suma 
        }
        i++; // Aumenta el contador
    }

    printf(" = %d\n", suma);// Imprime el resultado de la suma
}
