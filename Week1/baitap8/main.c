#include <stdio.h>
#include<string.h>
int main()
{
    char a[100];
printf("nhap xau can dao :");
gets(a);
fflush(stdin);
printf("chuoi dao nguoc : %s", strrev(a));
getchar();
}
