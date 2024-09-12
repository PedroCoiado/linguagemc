#include <stdio.h>

int main()
{ 
    float nota1, nota2, nota3, nota4, media;

    printf("Digite a primeira nota e tecle ENTER: \n");
    scanf("%f",&nota1);

    printf("Digite a segunda nota e tecle ENTER: \n");
    scanf("%f",&nota2);

    printf("Digite a terceira nota e tecle ENTER: \n");
    scanf("%f",&nota3);

    printf("Digite a quarta nota e tecle ENTER: \n");
    scanf("%f",&nota4);

    media = (nota1+nota2+nota3+nota4)/4;

    if(media >= 6){
        printf("A nota média do aluno é %.2f e está aprovado \n", media); // "%.2f" -- é para decidir as casas depois da vírgula, por exemplo "%.3f" = 3,001
    }
    else if(media <= 4){
        printf("A nota média do aluno é %.2f e está reprovado \n", media);

    }
    else{
        printf("A nota média do aluno é %.2f e está em recuperação \n", media);
         
    }
}