#include <stdio.h>

int main(void)
{
    int porciones_iniciales = 0;
    int porciones_preparadas = 0;
    int porciones_entregadas = 0;
    int porciones_disponibles = 0;

    if (scanf("%d %d %d",
              &porciones_iniciales,
              &porciones_preparadas,
              &porciones_entregadas) != 3)
    {
        return 1;
    }

    porciones_disponibles = porciones_iniciales + porciones_preparadas - porciones_entregadas;

    printf("Porciones disponibles: %d\n", porciones_disponibles);
    return 0;
}
