#include<stdio.h>
#include<conio.h>
#include<string.h>
void *chen(char st[], int *len, int ch, int vitri)
{
    int i;
    *len = strlen(st);
    for(i = *len; i >vitri ; i--)
    st[i] = st[i-1] ;
    st[vitri] = ch;
    *len++;
}

void main()
{int i; char s[255],j,k,n;
char x=' ';

printf("nhap s"); gets(s);
fflush(stdin);
while (s[0]==' ')
strcpy(&s[0],&s[1]);
while (s[strlen(s)-1]==' ')
strcpy(&s[strlen(s)-1],&s[strlen(s)]);
for(i=0; i<strlen(s) ;i++)
if ((s[i]==' ')&&(s[i+1]==' '))
{
strcpy(&s[i],&s[i+1]);
i--;
}
for(j=0;j<n;i++){
    if(s[i]=',' && s[i+1]!=' ')
    for(k=n;k>i;k--){
        s[k]=[k-1];
        s[j]=x;
        break;
    }
    else s[n]=x;
}
strlwr(s);
printf("xau da chuan hoa : \"%s\"",s);

getch();
}
