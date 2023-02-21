#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head;

void insertatbeginning ();
void insertatlast ();
void insertatgivenpos();
void deletionatbeginning();
void deletionatlast();
void deleteatpos();
void display();
void main ()
{
    int choice =0;
    while(choice != 8)
    {
        printf("\n1.Insert in begining\n2.Insert at last\n3.Given position\n4.Deletion from beginning\n5.Deletion from end\n6.Deletion from possition\n7. display\n8.Exit\n");
        printf("\nEnter your choice?\n");
        scanf("\n%d",&choice);
        switch(choice)
{
            case 1:
            insertatbeginning();
            break;
            case 2:
            insertatlast();
            break;
            case 3:
            insertatgivenpos();
            break;
            case 4:
            deletionatbeginning();
            break;
            case 5:
            deletionatlast();
            break;
            case 6:
            deleteatpos();
            break;
            case 7:
            display();
            break;
            case 8:
            exit(0);
            break;
            default:
            printf("Please enter valid choice..");
        }
    }
}
void insertatbeginning()
{
    struct node *newnode;
    int item;
    newnode = (struct node *) malloc(sizeof(struct node *));
    if(newnode== NULL)
    {
        printf("\ninsertion is not possible\n");
    }
    else
    {
        printf("\nEnter value\n");
        scanf("%d",&item);
        newnode->data = item;
        newnode->next = head;
        head = newnode;
        printf("\nNode inserted");
    }
 struct node *temp = head;
   printf("\n\nelements in the list are \n");
   while(temp->next!=NULL)
      {
printf("%d --->",temp->data);
temp = temp->next;
  }
     printf("%d --->NULL",temp->data);
}


void insertatlast()
{
    struct node *newnode,*temp;
    int item;
    newnode= (struct node*)malloc(sizeof(struct node));
    if(newnode== NULL)
    {
        printf("\nthe list is empty");
    }
    else
    {
        printf("\nEnter value?\n");
        scanf("%d",&item);
        newnode->data = item;
        if(head == NULL)
        {
            newnode-> next = NULL;
            head = newnode;
            printf("\nNode inserted");
        }
        else
        {
            temp = head;
            while (temp -> next != NULL)
            {
                temp = temp -> next;
            }
            temp->next = newnode;
            newnode->next = NULL;
            printf("\nNode inserted");

        }

    }
    struct node;
    temp=head;
   printf("\n\nelements in the list are \n");
   while(temp->next!=NULL)
      {
printf("%d --->",temp->data);
temp = temp->next;
  }
     printf("%d --->NULL",temp->data);
}


void insertatgivenpos()
{
    int loc,item;
    struct node *newnode, *temp;
    newnode= (struct node *) malloc (sizeof(struct node));
    if(newnode== NULL)
    {
        printf("the list is empty");
    }
    else
    {
        printf("\nEnter the value :");
        scanf("%d",&item);
        newnode->data = item;
        printf("\nEnter the location after which you want to insert ");
        scanf("\n%d",&loc);
        temp=head;
        while(temp->data!=loc)
        {
            temp = temp->next;
            if(temp == NULL)
            {
                printf("\n insertion impossible\n");

            }

        }
        newnode ->next = temp ->next;
        temp ->next = newnode;
        printf("\nNode inserted");
    }
    struct node;
    temp=head;
   printf("\n\nelements in the list are \n");
   while(temp->next!=NULL)
      {
printf("%d --->",temp->data);
temp = temp->next;
  }
     printf("%d --->NULL",temp->data);
}


void deletionatbeginning()
{
    struct node *temp;
    if(head == NULL)
    {
        printf("\nList is empty\n");
    }
    else
    {
        temp= head;
        head = temp->next;
        free(temp);
        printf("\nNode deleted from the begining ...\n");
    }
    struct node;
    temp=head;
   printf("\n\nelements in the list are \n");
   while(temp->next!=NULL)
      {
printf("%d --->",temp->data);
temp = temp->next;
  }
     printf("%d --->NULL",temp->data);
}


void deletionatlast()
{
    struct node *temp,*prev;
    if(head == NULL)
    {
        printf("\nlist is empty");
    }
    else if(head -> next == NULL)
    {
        head = NULL;
        free(head);
        printf("\nOnly node is deleted...\n");
    }

    else
    {
        temp= head;
        while(temp->next != NULL)
        {
            prev =temp;
            temp=temp->next;
        }
        prev->next = NULL;
        free(temp);
        printf("\nDeleted Node from the last ...\n");
    }
    struct node;
    temp=head;
   printf("\n\nelements in the list are \n");
   while(temp->next!=NULL)
      {
printf("%d --->",temp->data);
temp = temp->next;
  }
     printf("%d --->NULL",temp->data);
}


void deleteatpos()
{
    struct node *temp,*prev;
    int loc;
    printf("\n Enter the element which you want to perform deletion \n");
    scanf("%d",&loc);
         temp=head;
   while (temp->data!=loc && temp!=NULL)

    {
            prev=temp;
            temp=temp->next;

    }
    prev->next=temp->next;
        temp->next=prev;
        free(temp);
        printf("\nNode deleted");
 struct node;
    temp=head;
   printf("\n\nelements in the list are \n");
   while(temp->next!=NULL)
      {
printf("%d --->",temp->data);
temp = temp->next;
  }
     printf("%d --->NULL",temp->data);

    }

void display()
{
    struct node *newnode;
    newnode= head;
    if(newnode== NULL)
    {
        printf("Nothing to print");
    }
    else
    {
        printf("\nprinting values ..\n");
        while (newnode!=NULL)
        {
            printf("\n%d",newnode->data);
            newnode= newnode-> next;
        }
}    }
