#include <stdio.h>


    int main()
    {
        //Declaração da variável de contagem de zero(0) até cem (100)
    int contar = 0;
        //Declaração da variável de conta a quantidade de números multiplos de 3
    int qtd = 0;

    while (contar <= 100) //while é enquanto
    {
      if (contar % 3 == 0)
      {
        printf("%d\n", contar);
        qtd++;

      }
      contar++;
    
    }
    printf("Quantidade de multiplos de 3 é %d\n", qtd);
    return 0;

    }

    /* A conta funciona da seguinte forma, ele conta de 1 por 1, então por exemplo:
            0 é divido por 3
            sim (Verdadeiro)
            Contar vale 0
            Quantidade é 1
            ----------------
            1 é divido por 3
            não (Falso)
            Contar vale 1
            quantidade continua 1
            ---------------------
            2 é divido por 3
            não (Falso)
            Contar vale 2
            quantidade continua 1
            ----------------------
            3 é divido por 3 
            sim (Verdadeiro)
            Contar vale 3
            Quantidade é 2

            Aqui ele está fazendo o multiplo de 3, então nesse caso ele tem que chegar até <= 100 então
            0,3,6,9,12,15,18,21,24,27,30,33,36,39,42,45,48,51,54,57,60,63,66,69,72,75,78,81,84,87,90,93,96,99
            1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34

    */