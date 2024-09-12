#include <stdio.h>

int main()
{   
    int final_placa;
    printf("Digite o final da placa do seu veículo:\n");
    scanf("%d", &final_placa);

    if(final_placa == 1){
        printf("Você não pode sair com o veículo na Segunda-Feira\n");
    }
    else if (final_placa == 2){
        printf("Você não pode sair com o veículo na Segunda-Feira\n");
    }
    else if (final_placa == 3){
        printf("Você não pode sair com o veículo na Terça-Feira\n");
    }    
    else if (final_placa == 4){
        printf("Você não pode sair com o veículo na Terça-Feira\n");
    }
    else if (final_placa == 5){
        printf("Você não pode sair com o veículo na Quarta-Feira\n");
    }   
    else if (final_placa == 6){
        printf("Você não pode sair com o veículo na Quarta-Feira\n");
    }    
    else if (final_placa == 7){
        printf("Você não pode sair com o veículo na Quinta-Feira\n");
    }
    else if (final_placa == 8){
        printf("Você não pode sair com o veículo na Quinta-Feira\n");
    }
    else if (final_placa == 9){
        printf("Você não pode sair com o veículo na Sexta-Feira\n");
    }
    else if (final_placa == 0){
        printf("Você não pode sair com o veículo na Sexta-Feira\n");
    }
    else{ 
        printf("Final de placa inexistente\n");
    }
    return 0; // signifca que o programa acabou!!!
}