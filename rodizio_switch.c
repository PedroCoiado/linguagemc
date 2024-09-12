#include <stdio.h>

int main()
{
    int final_placa;
    printf("digite o numero final da placa do seu veículo\n");
    scanf("%d",&final_placa);

    switch(final_placa){ //Olhe para a variavel, caso tenha entrada placa 1 é rodizio é segunda-feira, caso tenha sido 3 é terceira-feira.
    
    case 1:
        printf("Rodízio na Segunda_feira");
        break; //

    case 2:
        printf("Rodízio na Segunda_feira");
        break;

    case 3:
        printf("Rodízio na Terça_feira");
        break;

    case 4:
        printf("Rodízio na Terça_feira");
        break;

    case 5:
        printf("Rodízio na Quarta_feira");
        break;
    
     case 6:
        printf("Rodízio na Quarta_feira");
        break;

     case 7:
        printf("Rodízio na Quinta_feira");
        break;

    case 8:
        printf("Rodízio Quinta_feira");
        break;

    case 9:
        printf("Rodízio na Sexta_feira");
        break;

    case 0:
        printf("Rodízio na Sexta_feira");
        break;
    
    default:
        printf("Final de placa inexistente");
        break;

    }

}