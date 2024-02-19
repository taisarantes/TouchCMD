#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char *argv[]){
    printf("1 %s", argv[1]);
    printf("2 %s", argv[1]);
    printf("3 %s", argv[1]);


    // VARIAVEIS
    char *cmd = NULL, *cmd_copy = NULL, *token = NULL;
    // A variavel 'cmd' vai guardar o comando que será lido no input
    // A variavel 'token' guarda os tokens retornados pelo string tool

    char *delim = " \n";
    // A variavel 'delim' servirá parar definir o delimitador 

    return 0;
}