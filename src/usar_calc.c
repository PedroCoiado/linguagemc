#include <stdio.h>
#include "../lib/calc.h"

int main()
{
    int num[8] = {7,12,8,45,21,52,102,34};

    printf("A soma dos números é %d\n", soma(num,8));
    printf("A média dos números é %d\n", media(num,8));
    printf("O números pares do array são\n");
    pares(num,8);
    return 0;
}