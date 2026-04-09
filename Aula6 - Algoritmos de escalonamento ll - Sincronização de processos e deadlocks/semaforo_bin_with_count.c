//
// Created by miguel.xavier on 08/04/2026.
//

#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>

sem_t sem;

void *tarefa(void *arg) {
    int id = *(int*)arg;
    printf("Thread %d aguardando recurso... \n", id);
    sem_wait(&sem);
    printf("Thread %d entrou na região critica %d\n", id);
    sleep(2);
    printf("Thread %d saindo da região critica... \n", id);
    sem_post(&sem);
    return NULL;
}

int main() {
    pthread_t t1, t2, t3;
    int id1 = 1, id2 = 2, id3 = 3;
    sem_init(&sem, 0, 1);
    pthread_create(&t1, NULL, tarefa, &id1);
    pthread_create(&t2, NULL, tarefa, &id2);
    pthread_create(&t3, NULL, tarefa, &id3);

    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
    pthread_join(t3, NULL);

    sem_destroy(&sem);

    return 0;
}