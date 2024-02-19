#include <stdio.h>

int main()
{
    FILE *arquivo;

    // Cria um arquivo no seu computador (filename.txt)
    arquivo = fopen(NULL, "w");

    // Fecha o arquivo
    fclose(arquivo);

    if (arquivo != NULL)
    {
        printf("Deu certo.");
    }
    else
    {
        fprintf(stderr, "Não foi possível criar o arquivo. (┬┬﹏┬┬)");
    }

    return 0;
}