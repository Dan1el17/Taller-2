#include <stdio.h>

void sumaDigitos(long numero); // Declaramos la funcion

int main() {
    long numero; // Defino variable

    printf("Ingrese un numero: "); // Pedir al usuario que ingrese un numero 
    scanf("%ld", &numero); // Almacena el numero ingresado

    sumaDigitos(numero); // Llamamos a la funcion

    return 0;
}

void sumaDigitos(long numero) {
    int suma = 0, n1[20], cont = 0; // Defino variables

    while (numero != 0) {
        n1[cont] = numero % 10; // Obtiene el ultimo digito
        suma += n1[cont]; // Suma el digito
        numero /= 10; // Elimina el ultimo digito
        cont++; // Contador
    }

    // Calcula la suma
    printf("%ld -> ", numero);
    for (int i = cont - 1; i >= 0; i--) {
        printf("%d", n1[i]); // Imprime la secuencia
        if (i != 0) {
            printf(" + "); // Imprime el signo mas
        }
    }
    printf(" = %d\n", suma); // Imprime el resultado
}
