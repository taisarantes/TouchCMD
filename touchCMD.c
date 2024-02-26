#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char *argv[])
{

    if (argc == 2)
    {
        if (strcmp(argv[0], "touch") == 0)
        {
            FILE *arquivo;

            // Cria um arquivo no seu computador (filename.txt)
            arquivo = fopen(argv[1], "w");

            // Verifica se foi possível criar o arquivo e, se não, retorna uma mensagem de erro
            if (arquivo != NULL)
            {
                printf("Deu certo.");
            }
            else
            {
                fprintf(stderr, "Não foi possível criar o arquivo. (┬┬﹏┬┬)");
            }

            // Fecha o arquivo
            fclose(arquivo);
        }
    }

    return 0;
}

// verificar se na linha de comando tem mais de um argumento utilizando o argc
// ele serve para contar os argumentos da linha de comando e o tamanho do argv
// qnd temrinar, fazer o executavel desse codigo ser global, igual o git