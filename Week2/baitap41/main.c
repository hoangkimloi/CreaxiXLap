#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n,i,j;
    printf("nhap vao so tu nhien N:");
    scanf("%d",&n);
    if(n<2 || n>=5)
    {
        printf("ban da nhap sai moi ban nhap lai:");
        scanf("%d",&j);
        for(i=0; i<pow(10,j); i++)
        {
            if(i%11==0)
                printf("\n%d",i);
        }
    }
    else
        for(i=0; i<pow(10,n); i++)
        {
            if(i%11==0)
                printf("\n%d",i);
        }
    getch();
}
