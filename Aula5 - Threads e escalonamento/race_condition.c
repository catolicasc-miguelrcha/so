#include <stdio.h>
#include <stdlib.h>
#include <pthread.h> // lib para thread

int count = 0;

void *incrementar(void *arg) {
    for (int i = 0; i < 100000; i++) {
        count++;
    }
    return NULL;
}

int main () {
    pthread_t t1, t2;

    pthread_create(&t1, NULL, incrementar, NULL);
    pthread_create(&t2, NULL, incrementar, NULL);

    pthread_join(t1, NULL);
    pthread_join(t2, NULL);

    printf("Threads created successfully %d\n", count);
    return 0;
}