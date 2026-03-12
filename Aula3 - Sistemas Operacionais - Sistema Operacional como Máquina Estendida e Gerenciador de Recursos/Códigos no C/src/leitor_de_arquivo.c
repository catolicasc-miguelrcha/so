#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE *f = fopen("texto.txt", "r");

    if(f == NULL) {
        printf("Erro ao tentar abrir o arquivo\n");
        return 1;
    }

    /* Código adicional gerado com auxilio da IA para guardar uma variavel para leitura das linhas do arquivo
    char linha[100];

    while(fgets(linha, sizeof(linha), f) != NULL) {
        printf("%s", linha);
    }
    */
    fclose(f);
    return 0;
}