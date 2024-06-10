#include <stdio.h>

void sumaPares(); // Declaramos la funcion

int main() {
    sumaPares(); // Llamamos a la funcion
    return 0;
}

void sumaPares() {
    int n;
    printf("Calcular la suma de todos los numeros pares desde 1 hasta n\n"); // Programa que se va a realizar
    printf("Ingrese un numero: "); // Pedimos que ingrese un numero al azar
    scanf("%d", &n); // Almacenamos el numero ingresado

    int suma = 0;
    printf("Si n = %d, la suma de los numeros impares es = ", n); // Imprime el inicio de la expresion
    
    // Bucle para sumar los numeros pares
    for (int i = 2; i <= n; i += 2) {
        suma += i;
        printf("%d", i); // Imprime los numeros de la serie 
        if (i != n - 1 && i != n) {
            printf(" + "); // Agrega el signo de la suma
        }
    }

    printf(" = %d\n", suma); // Imprime el resultado
}
