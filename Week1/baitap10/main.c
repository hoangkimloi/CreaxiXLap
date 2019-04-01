#include<stdio.h>
#include<conio.h>
#include<string.h>
#include <stdlib.h>
#include <ctype.h>
int xoa(char *a, int q)
{
            int n = strlen(a), i;
            for (i = q; i <= n; i++)
            {
                        a[i] = a[i + 1];
            }
            n--;
            return 0;
}
int xoakhoangtrang(char *a)
{
            int i, n=strlen(a);
            for (i = 0; i < n; i++)
            {
                        if (a[0] == 32 )
                        {
                                    xoa(a, 0);
                                    n--;
                        }
                        if (a[n-1] == 32)
                        {
                                    xoa(a, n-1);
                                    n--;
                        }
                        if (a[i] == 32 && a[i + 1] == 32)
                        {
                                    xoa(a, i);
                                    i--;
                                    n--;
                        }
            }
            return 0;
}

void main(){
    char a[100],s,d,f;
    int i,n,j,k;
    printf("nhap chuoi ki tu :");
    gets(a);
      n= strlen(a);
for(i=0;i<=n;i++)
      {

   xoakhoangtrang(a);
      if(a[i+1]=='d')
      {
          if(a[i+2]=='f')
          {
              a[i]=' ';
              a[i+1]=' ';
              a[i+2]=' ';

          }

      }


  }
  for(i=0;i<n;i++)
{
    printf("%c",a[i]);
}
}





