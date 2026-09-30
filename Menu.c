#include <stdio.h>
void calcularPromedio();
void verificarPrimo();
void calcularFactorial();
void tablaMultiplicar();
int main() {
    int opcion = 0;
    while (opcion != 5) {
        printf("\n--- MENU ACADEMICO ---\n");
        printf("1. Calcular promedio\n");
        printf("2. Determinar si es primo\n");
        printf("3. Calcular factorial\n");
        printf("4. Tabla de multiplicar\n");
        printf("5. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);
        switch (opcion) {
            case 1:
                calcularPromedio();
                break;
            case 2:
                verificarPrimo();
                break;
            case 3:
                calcularFactorial();
                break;
            case 4:
                tablaMultiplicar();
                break;
            case 5:
                printf("¡Hasta luego!\n");
                break;
            default:
                printf("Opcion no valida.\n");
                break;
        }
    }
    return 0;
}
void calcularPromedio() {
    int cant;
    float nota, suma = 0;
    printf("Cantidad de notas: ");
    scanf("%d", &cant);
    if (cant <= 0) {
        printf("Cantidad invalida.\n");
        return;
    }
    for (int i = 1; i <= cant; i++) {
        printf("Nota %d: ", i);
        scanf("%f", &nota);
        suma += nota;
    }
    printf("Promedio: %.2f\n", suma / cant);
}
void verificarPrimo() {
    int num, divisores = 0;
    printf("Ingrese un numero: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            divisores++;
        }
    }
    if (divisores == 2)
        printf("%d ES primo.\n", num);
    else
        printf("%d NO es primo.\n", num);
}
void calcularFactorial() {
    int num;
    long long fact = 1;
    printf("Ingrese un numero: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    printf("Factorial: %lld\n", fact);
}
void tablaMultiplicar() {
    int num;
    printf("Ingrese un numero: ");
    scanf("%d", &num);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}