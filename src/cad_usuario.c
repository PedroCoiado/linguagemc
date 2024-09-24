#include <stdio.h>
#include "../lib/usuario.h"

    int main()
{
    //Declaração da estrutura Usurio como us
    Usuario us;

    //Declara~çao do tipo FILE para manipular arquivos
    FILE *arq;

    //Limpar a tela do terminal
    system("clear");
     printf("************************************\n");
     printf("******* Cadastro de Usuário **********\n");
     printf("************************************\n");
     printf("Digite o nome de usuário:\n");

    //fgets pega o que o usuário escreveu no terminal
    fgets(us.nomeusuario,sizeof(us.nomeusuario),stdin);
    printf("%s",us.nomeusuario);
    printf("%d\n",sizeof(us.nomeusuario));

    printf("Digite a senha do usuário:\n");
    fgets(us.senha, sizeof(us.senha),stdin);

    printf("Digite o nível do usuário:\n");
    fgets(us.nivel, sizeof(us.nivel),stdin);


    arq = fopen("file/usuarios.txt","a+");

    fputs(us.nomeusuario, arq);
    fputs(us.senha,arq);
    fputs(us.nivel,arq);

    //Para retirar o arquivo da memória será usado o comando fclose

        fclose(arq);

return 0;
}