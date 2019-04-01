#include <stdio.h>
#include <stdlib.h>

int main()
{
  int ngay, thang, nam;
 printf("nhap ngay: ");
 scanf("%d",&ngay);
 fflush(stdin);
 printf("nhap thang: ");
 scanf("%d",&thang);
 fflush(stdin);
 printf("nhap nam: ");
 scanf("%d",&nam);
 fflush(stdin);
 if(ngay < 1 || ngay > 31 || thang < 1 || thang > 12 || nam < 1){
    printf("ngay thang nam khong hop le !!");
 }
 // thang 2 29 ngay .
 else if(nam % 4 == 0 && nam %100 !=0 || nam % 400 == 0)
 printf("day la nam nhuan");
 else
    printf("ngay thang nam hop le");
    return 0;
    getchar();
}
