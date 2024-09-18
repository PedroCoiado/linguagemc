#include <stdio.h>

int main()
{ 
    int num;
    printf("Digite um número: \n");
    scanf("%d",&num);
    if(num % 2 == 0) 
    {
        printf("O número digitado é Par");
    }
    else
    {
        printf("O numero digitado é impar \n");
    }
    return 0;

}