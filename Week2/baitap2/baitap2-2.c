#include<stdio.h>
#include<conio.h>
void main()// thuat toan noi bot
{
    int a[500],i,j,n,min,tg;
    printf("nhap so phan tu : ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("nhap a[%d]:",i);
        scanf("%d",&a[i]);
    }
      for(i=0;i<n-1;i++)
     {

        for(j=n-1;j>i;j--)
        {
            if(a[j]<a[j-1])
            {
               tg=a[j-1];
               a[j-1]=a[j];
               a[j]=tg;
            }
        }

    }

    for(i=0;i<n;i++)
    {
    printf("%d ",a[i]);
    }
    getch();

}
