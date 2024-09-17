#include <stdio.h>

int main()
{
    int valor;
    valor = 10; //valor pode ser 1 para contar crescendo ou decrescente

    while (valor >= 1) // while = estrutura de repetição
    {
        printf("%d\n",valor);  /* code */
        valor--; // valor vale 1, incrementar ++ ou descrementa --
    }
    return 0;


}