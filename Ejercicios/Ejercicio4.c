#include <stdio.h>

void calculaRaizCubica(int numero); // Declaramos la funcion

int main() {
    int numero; // Defino la variable

    printf("Calcular la raiz cubica de un numero\n"); // Programa que se va a realizar
    printf("Ingrese un numero: "); // Pido que ingrese un numero
    scanf("%d", &numero); // Almaceno el numero

    // Llama a la función para calcular la raíz cúbica
    calculaRaizCubica(numero); // Llamamos a la funcion

    return 0;
}

// Definición de la función calcularRaizCubica
void calculaRaizCubica(int numero) {
    int raizCubica = 0, i = 1; // Defino la variable
    int cubo; // Variable para almacenar el cubo del número

    // Bucle 
    while ((cubo = i * i * i) <= numero) {
        if (cubo == numero) {
            raizCubica = i;
            printf("La raiz cubica de %d ^ (1/3) es %d\n", numero, raizCubica); 
            return; // Salimos de la función si encontramos la raíz cúbica
        }
        i++;
    }

    // Si llegamos aquí, el número no tiene raíz cúbica
    printf("El numero %d no tiene raiz cubica.\n", numero);
}
