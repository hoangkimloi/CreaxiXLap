#include<stdio.h>
#include<conio.h>
#include<conio.h>
#include<stdlib.h>
int i,k,a,n,h,b,tim,dem,count,them,sua,msua,chon;
struct node
{
    int data;
    struct node *next;
}  ;
struct node *phead = NULL;
struct node *ptail = NULL;
void themvaodau(int i )
{
    struct node *p;
    p=(struct node* )malloc(sizeof(struct node));
    p->data=i;
    if(phead==NULL)
    {
        phead=ptail=p;
    }
    else
    {
        p->next=phead;
        phead=p;
    }
}

void indanhsach()
{
    struct node *q;
    q=phead;
    while(q!=NULL)
    {
        printf("[ %d ]  ",q->data);
        q=q->next;
    }
}
void themvaocuoi(int a)
{
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    p->data=a;
    p->next=NULL;
    if(phead==NULL)
    {
        phead=ptail=p;
    }
    else
    {
        ptail->next=p;
        ptail=p;
    }
}
void demsoluongphantu(int k)
{
    k=0;
    struct node *dem;
    for(struct node *dem= phead ; dem!=NULL; dem=dem->next)
    {
        k=k+1;
    }

    printf("\n\nso phan tu cua danh sach la : %d",k);

}
void xoadau()
{
    struct node *pxoa;
    pxoa=phead;
    phead=pxoa->next;
}
void xoabatky(int b)
{
    struct node *xoa;
    xoa=phead;
    printf("\nnhap phan tu muon xoa: ");
    scanf("%d",&b);
    for(xoa=phead; xoa->next!=NULL; xoa=xoa->next)
    {
        if((xoa->next)->data==b)
        {
            xoa->next=xoa->next->next;
        }

    }
    printf("danh sach sau khi xoa :\n");
    indanhsach();
}
void timkiem(int dem,int tim)
{
    dem=1;
    struct node *ptim;
    ptim=phead;
    printf("\nnhap gia tri can tim ");
    scanf("%d",&tim);
    for(ptim; ptim->data!=tim; ptim=ptim->next)
    {

        dem=dem+1;

    }
    printf("\nvi tri can tim   %d",dem);
}
void suaphantu(int sua,int msua)
{
    struct node *psua;
    psua=phead;
    printf("\nnhap phan tu muon sua ");
    scanf("%d",&sua);
    printf("\nnhap gia tri muon sua ");
    scanf("%d",&msua);
    for(psua=phead; psua!=NULL; psua=psua->next)
    {
        if(psua->data==sua)
        {
            psua->data=msua;
        }
    }
    printf("danh sach sau khi sua :\n");
    indanhsach();
}
void danhsachlienketdon()
{
    printf("nhap so phan tu cua danh sach :");
    scanf("%d",&n);
    for(h=0; h<n; h++)
    {
        printf("nhap phan tu can them :");
        scanf("%d",&i);
        themvaocuoi(i);
    }
    printf("danh sach ban da tao : ");
    indanhsach();
    demsoluongphantu(k);
    timkiem(dem,tim);
    xoabatky(b);
    suaphantu(sua,msua);
}
void main()
{
    danhsachlienketdon();
    getch();
}




