#include <stdio.h>

int main() {
    float sal[30], salmay = 0; // Arreglo de salarios y variable para salario mayor
    int i, trab, sm;           // Variables para iteración, total de trabajadores, y trabajador con mayor salario

    printf("Total de trabajadores: ");
    scanf("%d", &trab);

    for (i = 0; i < trab; i++) {
        printf("Dame el salario del trabajador %d: ", i + 1);
        scanf("%f", &sal[i]);

        if (sal[i] > salmay) {
            sm = i + 1;       // Se guarda el número del trabajador (no el índice)
            salmay = sal[i];  // Se actualiza el salario mayor
        }
    }

    printf("El salario mayor es %.2f y pertenece al trabajador %d\n", salmay, sm);

    return 0;
}

