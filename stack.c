#include <stdio.h>
#include <stdlib.h>
void push();
void pop();
void peek();
void display();
struct node
{
int item;
struct node *next;
};
struct node *head;

void main ()
{
    int choice=0;
    while(choice != 4)
    {
        printf("\n\nChose one from the below options...\n");
        printf("\n1.Push\n2.Pop\n3.peek\n4.Show\n5.Exit");
        printf("\n Enter your choice \n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            push();
            break;
            case 2:
            pop();
            break;
            case 3:
            peek();
            break;
            case 4:
            display();
            break;
            case 5:
            exit(0);
            break;
            default:
            printf("Please Enter valid choice ");

    }
}
}
void push ()
{
    int item;
    struct node *temp= (struct node*)malloc(sizeof(struct node));
        printf("Enter the value");
        scanf("%d",&item);
        if(head==NULL)
        {
            temp->item=item;
            temp-> next=NULL;
            head=temp;
        }
        else
        {
            temp->item=item;
            temp->next = head;
            head=temp;

        }
        printf("Item pushed");


 struct node;
    temp=head;
   printf("\n\nelements in the list are \n");
   while(temp->next!=NULL)
      {
printf("%d,",temp->item);
temp = temp->next;
  }
     printf("%d",temp->item);
}

void pop()
{
    int item;
    struct node *temp;
    if (head == NULL)
    {
        printf("there is element to pop");
    }
    else
    {

        temp = head;
        head = head->next;
        free(temp);
        printf("Item popped");

    }
     struct node;
    temp=head;
   printf("\n\nelements in the list are \n");
   while(temp->next!=NULL)
      {
printf("%d,",temp->item);
temp = temp->next;
  }
     printf("%d",temp->item);
}

void peek()
{
    struct node *temp;
    head=temp;
    if(head==NULL)
    {
        printf("stack is empty");
    }
    else
    {
        printf("top of list is",temp->item);
    }
}
void display()
{
    struct node *temp;
    temp=head;
    if(temp== NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Printing Stack elements \n");
        while(temp!=NULL)
        {
            printf("%d\n",temp->item);
            temp=temp->next;
        }
    }
}
