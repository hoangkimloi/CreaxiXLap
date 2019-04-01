#include<stdio.h>
#include<conio.h>
void main(){
    int a,tien;
printf("nhap quang duong da di(don vi :m) :");
scanf("%d",&a);
fflush(stdin);
if(a<=1000)
{
    tien=10000;
}
else if(a>1000&&a<30000){
     if(a%200==0)
    {
        tien=10000+(a-1000)*(float)1500/200;
    }
    else
    {
        tien=10000+(((a/200)*200)-1000)*(float)1500/200+1500;
    }
}
else if(a>30000)
    if(a%1000==0)
{

    tien=10000+(29000*7.5)+((a-30000)*8);
}


printf("gia tien phai tra %d VND",tien);

getch();
}

