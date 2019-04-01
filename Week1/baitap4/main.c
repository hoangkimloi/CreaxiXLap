#include <stdio.h>
#include <stdlib.h>

int main()
{
  int h,i,j;
  printf("nhap do cao h:");
  scanf("%d",&h);
  fflush(stdin);
  for(i=0;i<h;i++){
    for(j=1;j<2*h;j++)
        if(j>=(h-i)&&j<=(h+i))
        printf(" * ");
    else printf("   ");
    printf("\n");
  }
  getch();
}

