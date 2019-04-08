#include<stdio.h>
#include<conio.h>
void main()// xet gia tri nho nhat
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
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
                min=j;
        }
        if (min!=i)
        {
        tg=a[min];
        a[min]=a[i];
        a[i]=tg;
        }

    }

    for(i=0;i<n;i++)
    {
    printf("%d ",a[i]);
    }
    getch();

}
