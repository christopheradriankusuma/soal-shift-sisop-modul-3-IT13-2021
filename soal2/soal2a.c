#include <stdlib.h>
#include <stdio.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <unistd.h>

typedef unsigned long long ull;

void main() {
    key_t key = 1234;
    ull *value;
    int shmid = shmget(key, sizeof(int), IPC_CREAT | 0666);
    value = shmat(shmid, NULL, 0);

    ull mat1[4][3]; // = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    ull mat2[3][6]; // = {{1, 2, 3, 4, 5, 6}, {7, 8, 9, 10, 11, 12}, {13, 14, 15, 16, 17, 18}};

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 3; ++j) {
            scanf("%llu", &mat1[i][j]);
        }
    }

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 6; ++j) {
            scanf("%llu", &mat2[i][j]);
        }
    }

    ull sum = 0;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 6; ++j) {
            for (int k = 0; k < 3; ++k) {
                sum += mat1[i][k] * mat2[k][j];
            }
            *(value + 6*i + j) = sum;
            sum = 0;
        }
    }

    printf("Matriks 1:\n");
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%llu\t", mat1[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("Matriks 2:\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 6; ++j) {
            printf("%llu\t", mat2[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("Matriks perkalian:\n");
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 6; ++j) {
            printf("%llu\t", *(value + 6*i + j));
        }
        printf("\n");
    }

    sleep(10);

    shmdt(value);
    shmctl(shmid, IPC_RMID, NULL);
}