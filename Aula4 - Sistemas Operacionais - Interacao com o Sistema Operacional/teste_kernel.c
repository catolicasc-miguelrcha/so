#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>     // Bibilioteca p/ fork(); getpid()
#include <sys/wait.h>   // Bibilioteca p/ wait()

int main() {

    // Funcao para leitura do arquivo .txt
    FILE *f = fopen("relatorio_so.txt", "w");

    // Caso esteja vazio retornar mensagem de erro
    if(f == NULL) {
        printf("Erro ao tentar abrir o arquivo\n");
        return 1;
    }

    // Variavel que obtem o pid do processamento atual
    int pid = getpid();

    // Funcao para escrever dentro do arquivo .txt
    fprintf(f, "Aluno: MIGUEL_R_XAVIER\n");
    fprintf(f, "Data: 19/03/26\n");
    fprintf(f, "PID do processo: %d\n", pid);
    fprintf(f, "Mensagem: Teste prático de interação com o kernel\n");

    fclose(f);

    // Funcao para o uso do fork()
    int forkFilho = fork();

    if (forkFilho < 0) {
        printf("Erro ao criar o processo de fork\n");
        return 1;
    }

    else if (forkFilho == 0) {
        printf("Processo filho em execucao, PID = %d\n", getpid());
    }

    else {
        wait(NULL);
        printf("Processo pai em execucao, PID = %d\n", getpid());
    }

    int vetor[10];

    for (int i = 0; i < 10; i++) {
        vetor[i] = i;
    }

    printf("vet\n");
    for (int i = 0; i < 10; i++) {
        printf("%d\t", vetor[i]);
    }
    printf("\n");


    char line[100];

    f = fopen("relatorio_so.txt", "r");

    if (f == NULL) {
        printf("Erro ao abrir o arquivo\n");
        return 1;
    }

    if (forkFilho > 0) { // apenas o pai executa
        printf("\nConteúdo do arquivo:\n");

        while (fgets(line, sizeof(line), f) != NULL) {
            printf("%s", line);
        }
    }

    fclose(f);

    fflush(stdout);
    return 0;
}
