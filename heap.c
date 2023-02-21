#include<stdio.h>
void insert();
void delete();
void display();
int a[10],max=10,temp,index=1,c,p,i,t,l,r;
void main()
{
 int choice;
 while(1){
 printf("\n1.insertion\n2.deletion\n3.display\n4.exit\n");
 printf("\nenter your choice :");
 scanf("%d",&choice);

 switch(choice)
 {
 case 1:
 insert();
 break;
 case 2:
 delete();
 break;
 case 3:
 display();
 break;
 case 4:
 exit(0);
 default:
 printf("invalid option");
 }
 }
}
void insert()
{
 if(index>max)
 {
 printf("heap is full");
 return 0;
 }
 printf("\nenter value to be inserted :");
 scanf("%d",&a[index]);
 p=index/2;
 c=index;
 while(a[p]>a[c] && p!=0)
 {
 temp=a[p];
 a[p]=a[c];
 a[c]=temp;
 c=p;
 p=p/2;
 }
 index=index+1;

}
void delete()
{
 if(index==1)
 {
 printf("empty heap");
 return 0;
 }
 if(index==2)
 {
 index=1;
 return 0;
 }
 a[1]=a[index-1];
 index=index-1;
 p=1;
 l=p*2;
 r=(p*2)+1;
 while(a[p]>a[l]|| a[p]>a[r] && (i<index) )
 {
 if(r>=index)
 {
 t=r;
 }
 else if(a[r]>a[l])
 {
 t=l;
 }
 else
 {
 t=r;
 }
 temp=a[t];
 a[t]=a[p];
 a[p]=temp;
 p=t;
 l=p*2;
 r=(p*2)+1;
 }

}
void display()
{
 if(index==1)
 {
 printf("heap is empty");
 return 0;
 }
 for(i=1;i<index;i++)
 {
 printf("%d\t\t",a[i]);
 }
}

