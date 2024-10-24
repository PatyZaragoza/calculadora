// Patricia Zaragoza Palma 

#include <stdio.h>

// Funciones para las operaciones
float sumar(float a, float b) {
    return a + b;
}

float restar(float a, float b) {
    return a - b;
}

float multiplicar(float a, float b) {
    return a * b;
}

float dividir(float a, float b) {
    if (b == 0) {
        printf("Error: División por cero no permitida.\n");
        return 0;
    }
    return a / b;
}

int main() {
    int opcion;
    float num1, num2, resultado;

    do {
        // Mostrar el menú
        printf("Calculadora\n");
        printf("1. Sumar\n");
        printf("2. Restar\n");
        printf("3. Multiplicar\n");
        printf("4. Dividir\n");
        printf("5. Salir\n");
        printf("Elige una opción (1-5): ");
        scanf("%d", &opcion);

        if (opcion >= 1 && opcion <= 4) {
            // Leer los números
            printf("Ingresa el primer número: ");
            scanf("%f", &num1);
            printf("Ingresa el segundo número: ");
            scanf("%f", &num2);
        }

        switch (opcion) {
            case 1:
                resultado = sumar(num1, num2);
                printf("Resultado: %.2f\n", resultado);
                break;
            case 2:
                resultado = restar(num1, num2);
                printf("Resultado: %.2f\n", resultado);
                break;
            case 3:
                resultado = multiplicar(num1, num2);
                printf("Resultado: %.2f\n", resultado);
                break;
            case 4:
                resultado = dividir(num1, num2);
                printf("Resultado: %.2f\n", resultado);
                break;
            case 5:
                printf("Saliendo de la calculadora.\n");
                break;
            default:
                printf("Opción no válida. Por favor elige entre 1 y 5.\n");
        }

        printf("\n");
    } while (opcion != 5);

    return 0;
}
