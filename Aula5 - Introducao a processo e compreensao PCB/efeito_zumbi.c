#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

int main () {
    pid_t pid;

    if (pid < 0) {
        perror("Error in fork");
        return 1;
    }

    if (pid == 0) {
        printf("Filho: Filho criado com sucesso\n", getpid(), getppid());
        printf("Filho: Filho encerrando...\n");
        exit(0);
    } else {
        printf("Pai: Filho criado com sucesso %d\n", getpid(), pid);
        printf("Pai vai dormir por 30 seg sem chamar wait().\n");
        printf("Durante esse tempo, o filho vira zumbi");
        sleep(30);
    }
    return 0;
}