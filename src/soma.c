#include <stdio.h>

int main(){
int v1, v2 , rs; //"nunca começar variavel com numero pois, o comando entende que letras começa com todas as letras do nosso alfabeto começam 0 "

printf("Digite um numero:\n");
//O comando scanf, relaiza a captura do  número
//que o usuário ira digitar. Apos capturar o
//numero sera alocado na variavel v1
scanf("%d",&v1);

printf("Digite o segundo numero:\n");
//O comando scanf, relaiza a captura do  número
//que o usuário ira digitar. Apos capturar o
//numero sera alocado na variavel v1
scanf("%d",&v2);

printf(" O valor de v1 %d e está em %p\n", v1&v1);
printf(" O valor de v2 %d e está em %p\n", v2&v2);

rs = v1 + v2;
printf("O resultado da soma é %d \n",rs);

return 0;
}


