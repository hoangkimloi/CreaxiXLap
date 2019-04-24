#include <stdio.h>
#include <pthread.h>
#include <time.h>
#include <semaphore.h>
#define N 60

sem_t semaphore;
pthread_mutex_t mutex;
int j;

void *semaphoreFunc(int id)
{
    int x,i;
    while (j<N)
    {
        sem_wait(&semaphore);
        x = rand()%10 + 1;
        for (i=0; i<x && j<N; i++, j++)
            printf("%d",id);
        printf("|");
        sem_post(&semaphore);
    }
}
void *mutexFunc(int id)
{
    int x,i;
    while (j<N)
    {
        pthread_mutex_lock(&mutex);
        x = rand()%10 + 1;
        for (i=0; i<x && j<N; i++, j++)
            printf("%d",id);
        printf("|");
        pthread_mutex_unlock(&mutex);
    }
}
int main()
{
    srand(time(NULL));
    int i;
    clock_t start;
    double semaphore_time, mutex_time;
    pthread_t threads[6];

    start = clock();
    sem_init(&semaphore,0,6);
    j = 0;
    printf("Semaphore: ");
    for (i=0; i<6; i++)
        pthread_create(&threads[i], NULL, semaphoreFunc, i);
    for (i=0; i<6; i++)
        pthread_join(threads[i],NULL);
    clock_t end = clock();

    semaphore_time = (double)(end-start)/CLK_TCK;
    printf("\n");

    start = clock();
    pthread_mutex_init(&mutex,NULL);
    j = 0;
    printf("Mutex: ");
    for (i=0; i<6; i++)
        pthread_create(&threads[i], NULL, mutexFunc, i);
    for (i=0; i<6; i++)
        pthread_join(threads[i],NULL);
    end = clock();


    printf("\n");
    printf("thoi gian cua semaphore: %0.5f\n",semaphore_time);
    printf("thoi gian cua 1 thread: %0.5f\n",(double)(end-start)/CLK_TCK);
    return 0;
}
