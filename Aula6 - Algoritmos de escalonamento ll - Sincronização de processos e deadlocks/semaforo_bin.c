//
// Created by miguel.xavier on 08/04/2026.
//

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

int count = 0;
pthread_mutex_t mutex;

void *increment(void *arg) {
    for (int i = 0; i<1000; i++) {
        pthread_mutex_lock(&mutex);
        count++;
        pthread_mutex_unlock(&mutex);
    }
    return NULL;
}

int main() {
    pthread_t t1, t2;

   pthread_mutex_init(&mutex, NULL);

    pthread_create(&t1, NULL, increment, NULL);
    pthread_create(&t2, NULL, increment, NULL);

    pthread_join(t1, NULL);
    pthread_join(t2, NULL);

    pthread_mutex_destroy(&mutex);

    printf("Valor final do contador %d\n", count);
    return 0;
}