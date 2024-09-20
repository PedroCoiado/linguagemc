#include <stdio.h>
/* Para trabalhar com arquivos, é necessário
importar a biblioteca stdlib */
#include <stdlib.h>
/* Importar a biblbioteca de texto(string) para escrever
em arquivos de texto*/
#include <string.h>


int main()
{
    system("clear");//limpa o terminal

/*Declaração da variável palavra como um ponteiro para
guardar os caracters que forma uma string*/
        char *palavra[30];
        char *label_name ="Nome: ";
        printf("Digite o seu nome completo:\n");
//            scanf("%s",palavra);

/* O comando "fgets(f->file | gets -> obter). Assim iremos
obter o texto que o usuário está digitando no terminal.
Definimos tambem a quantidade de caracters aceitos pelo 
fgets e o parâmetro stdin(std -> standard | in -> entrada)
ele olha para entrada padrão, que neste caso é teclado pelo terminal*/
                fgets(palavra,30,stdin); //std = / in = entrada

                    FILE *ar;

     ar = fopen("files/teste.txt", "ar");
       fseek(ar,0,SEEK_END);
        fputs(label_name, ar);
        fputs(palavra,ar);
           printf("O arquivo está no endereço:%p\n",ar);

            fclose(ar);

    return 0;
}
