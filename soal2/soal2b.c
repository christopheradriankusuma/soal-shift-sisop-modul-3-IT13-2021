#include <stdlib.h>
#include <stdio.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <unistd.h>
#include <pthread.h>

typedef unsigned long long ull;

struct data {
    ull A;
    ull B;
    ull factorial;
};

ull custom_factorial(ull a, ull b) {
    if (a == 0 || b == 0) return 0;
    b = b > a ? a : b;

    ull ans = 1;
    for (ull i = a; i > a-b; --i) ans *= i;
    return ans;
}

void *func(void *arg) {
    struct data *d = (struct data *)arg;
    d->factorial = custom_factorial(d->A, d->B);
}

void main() {
    key_t key = 1234;
    ull *value;
    int shmid = shmget(key, sizeof(int), IPC_CREAT | 0666);
    value = shmat(shmid, NULL, 0);

    pthread_t tid[24];
    struct data d[24];

    printf("Matriks A:\n");
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 6; ++j) {
            printf("%llu\t", *(value + 6*i + j));
            d[6*i + j].A = *(value + 6*i + j);
        }
        printf("\n");
    }
    printf("\n");

    ull matB[4][6];
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 6; ++j) {
            scanf("%llu", &matB[i][j]);
            d[6*i + j].B = matB[i][j];
        }
    }

    for (ull i = 0; i < 4; ++i) {
        for (ull j = 0; j < 6; ++j) {
            pthread_create(&tid[6*i + j], NULL, func, (void*)&d[6*i + j]);
        }
    }

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 6; ++j) {
            pthread_join(tid[6*i + j], NULL);
        }
    }

    printf("Matriks B:\n");
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 6; ++j) {
            printf("%llu\t", matB[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("Matriks faktorial:\n");
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 6; ++j) {
            printf("%llu\t", d[6*i + j].factorial);
        }
        printf("\n");
    }

    shmdt(value);
    shmctl(shmid, IPC_RMID, NULL);
}