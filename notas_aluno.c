#include <stdio.h>  

int main()
{ 
    float n1, n2, n3, n4, media;

    printf("Digite a Nota do 1° Aluno:\n");
    scanf("%f",&n1);

    printf("Digite a Nota do 2° Aluno:\n");
    scanf("%f",&n2);

    printf("Digite a Nota do 3° Aluno:\n");
    scanf("%f",&n3);

    printf("Digite a Nota do 4° Aluno:\n");
    scanf("%f",&n4);

    media = (n1 + n2 + n3 + n4)/4;
    /*
    Para alunos com média maior ou igual a 6, aprovado
    Para alunos com médoa menor ou igual a 4 reprovado
    Para os demais com notas entre maior 4 e menor 6, recuperação
    */

    printf("A média dos alunos é: %f \n", media);

    if(media >= 6) 
    {
        printf("Se a média for acima de 6 está aprovado \n", media);
    }
    else if(media <= 4){
        printf("Se a média for abaixa de 6 está reprovado \n", media);
    }
    {
        printf("Se a média for acima de 4 e abaixo de 6 está em recuperação \n", media);
    }
    

}