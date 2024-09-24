#include <stdio.h>
#include "../lib/produto.h"

    int main()
{
    
    system("clear");
    Produto prod;
     printf("************************************\n");
     printf("******* Cadastro do Produto **********\n");
     printf("************************************\n");

    
    printf("Digite o nome do produto:\n");
    fgets(prod.nome, sizeof(prod.nome), stdin);

    printf("Digite a categoria do produto:\n");
    fgets(prod.categoria, sizeof(prod.categoria), stdin);

    printf("Digite o cód do produto:\n");
     scanf ("%d", &prod.codigo);
    //fgets(prod.codigo,sizeof(prod.codigo),stdin);

    printf("Digite o estoque do produto:\n");
    scanf("%d", &prod.estoque);
    //fgets(prod.estoque, sizeof(prod.estoque), stdin);

    printf("Digite o preço do produto:\n");
    scanf("%f", &prod.preco);
    //fgets(prod.preco, sizeof(prod.preco), stdin);

    printf("\n ------------------ Produto Cadastro ---------------- \n");
    printf("%d - %s - %s - %d - %.2f\n",prod.codigo,prod.nome,prod.categoria,prod.estoque,prod.preco);

 
    
return 0;
}