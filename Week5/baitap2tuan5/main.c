#include <stdio.h> //I/O
#include <pthread.h> //thread
#include <time.h> //execution time
#include <windows.h> //sleep
#include <semaphore.h>
#define N 121

sem_t semaphore;
int j = 0;

void *thread()
{
    while (j<N)
    {
        sem_wait(&semaphore);
        printf("%d \n",j++);
        sem_post(&semaphore);
    }
}
int main()
{
    int i;
    double semaphore_time;

    clock_t start = clock();
    sem_init(&semaphore,0,6);
    pthread_t threads[6];
    for (i=0; i<6; i++)
        pthread_create(&threads[i], NULL, thread, NULL);
    for (i=0; i<4; i++)
        pthread_join(threads[i],NULL);
    clock_t end = clock();
    semaphore_time = (double)(end-start)/ CLOCKS_PER_SEC;

    start = clock();
    for (j=0; j<N; j++)
        printf("%d \n",j);
    end = clock();

    printf("thoi gian semaphore: %0.5f\n",semaphore_time);
    printf("thoi gian cua 1 thread: %0.5f\n",(double)(end-start)/ CLOCKS_PER_SEC);
    return 0;
}
