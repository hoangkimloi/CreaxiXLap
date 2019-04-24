#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <time.h>
#include <unistd.h>
#ifdef __unix__ // time sleep
# include <unistd.h>
# elif defined _WIN32
# include <windows.h>
# define sleep(x) Sleep(1000 * (x))
#endif
void *thread1()
{
    srand(time(NULL));
    int random;
    while(1)
    {
        random =rand()%31;
        FILE *f;
        f=fopen("number.txt","w");
        fprintf(f,"%d",random);
        fclose(f);
        sleep(2);
    }
}
void *thread2()
{
    int random,tb;
    while(1)
    {
        FILE *f;
        f=fopen("number.txt","r");
        fscanf(f,"%d",&random);
        fclose(f);

        tb = random * random;
        printf("%d\n",tb);

        f=fopen("output.txt","w");
        fprintf(f,"%d\n",tb);
        fclose(f);
        sleep(1);
    }

}

int main()
{
    pthread_t  th1, th2;
    pthread_create(&th1, NULL, thread1, NULL);
    pthread_create(&th1, NULL, thread2, NULL);

    pthread_join(th1, NULL);
    pthread_join(th2, NULL);

    return 0;
}

