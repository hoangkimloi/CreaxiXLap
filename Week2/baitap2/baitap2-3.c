#include<stdio.h>
#include<conio.h>
void main()// thuật toán chèn
{
    int a[500],i,j,n,min,tg;
    printf("nhap so phan tu : ");
    scanf("%d",&n);
    for(i=1; i<n; i++)
    {
        printf("nhap a[%d]:",i);
        scanf("%d",&a[i]);
    }
    for(i=1; i<n; i++)
    {

        j=i-1;
        tg=a[i];
        while(tg<a[j] && j>=0)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=tg;

    }

    for(i=1; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    getch();

}
