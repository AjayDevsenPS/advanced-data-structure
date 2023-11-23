#include<stdio.h>
#include<stdlib.h>
int main()
{
    int option;
    int pos,i=1;
    struct node
    {

    int data;
    struct node * next;
     };
    struct node *new_node,*temp,*head=NULL,*prev,*next_node;
    int n;
    printf("Enter the number of nodes needed:");
    scanf("%d",&n);
    printf("Enter %d values ",n);
    for(int i=0;i<n;i++)
    {
     new_node=(struct node *)malloc(sizeof(struct node));
     scanf("%d",&new_node->data);
     new_node->next=NULL;
     if(head==NULL)
     {
         head=new_node;
         temp=new_node;
     }
     else{
        temp->next=new_node;
        temp=new_node;
     }
    }
    printf("linked list is:\n");
    for(temp=head;temp!=NULL;temp=temp->next)
    {
        printf("%d->",temp->data);
    }

    printf("null\n");
    int k=1;
    while(k==1)
    {

    printf("select option:\n");
    printf("1.insert at begining\n");
    printf("2.insert at end\n");
    printf("3.insert at any position\n");
    printf("4.delete from begining\n");
    printf("5.delete from end\n");
    printf("6.delete from any position\n");
    printf("7.exit\n");
    printf("what do you want to perform:\n");

    scanf("%d",&option);


    switch(option)
    {

case 1:
    {

    printf("\nEnter the node to insert at begining \n");
    new_node=(struct node *)malloc(sizeof(struct node));
    scanf("%d",&new_node->data);
    new_node->next=NULL;
    if(head==NULL)
    {
        head=new_node;

    }
    else{
       new_node->next=head;
       head=new_node;
    }
     printf("Linked list after insertion is:\n");
    for(temp=head;temp!=NULL;temp=temp->next)
    {
        printf("%d ->",temp->data);
    }
     printf("null");
     break;
    }
case 2:
    {
     printf("\nEnter the node to insert at end\n");
     new_node=(struct node *)malloc(sizeof(struct node));
     scanf("%d",&new_node->data);
     new_node->next=NULL;
     temp=head;
     while(temp->next!=NULL)
     {
         temp=temp->next;
     }
     temp->next=new_node;
     printf("Linked list after insertion at end is:\n");
    for(temp=head;temp!=NULL;temp=temp->next)
    {
        printf("%d->",temp->data);
    }
     printf("null\n");
     break;
    }
case 3:
    {

     int count=0;
      for(temp=head;temp!=NULL;temp=temp->next)
    {
        count++;
    }

     printf("Enter the position to insert:\n");
     scanf("%d",&pos);
     if (pos> count)
     {

         printf("invalid position\n");
     }
     else{

        temp=head;
        while(i<pos)
        {
            temp=temp->next;
            i++;
        }
     printf("enter data\n");
     new_node=(struct node *)malloc(sizeof(struct node));
     scanf("%d",&new_node->data);
     new_node->next=temp->next;
     temp->next=new_node;

     }
      for(temp=head;temp!=NULL;temp=temp->next)
        {
        printf("%d ->",temp->data);
        }
     printf("null\n");
     break;
    }




case 4:
    {
        temp=head;
        head=head->next;
        free(temp);
        printf("linked list after deletion\n");
        for(temp=head;temp!=NULL;temp=temp->next)
        {
        printf("%d ->",temp->data);
        }
       printf("null\n");
      break;

    }





case 5:
    {
        temp=head;
        while(temp->next!=0)
        {
            prev=temp;
            temp=temp->next;
        }
        if(temp==NULL)
        {
          free(temp);
        }
        else{
            prev->next=NULL;

        }
        free(temp);
         printf("linked list after deletion\n");
        for(temp=head;temp!=NULL;temp=temp->next)
        {
        printf("%d ->",temp->data);
        }
       printf("null\n");
      break;

    }





case 6:
    {
       int i=1;
       temp=head;
       printf("enter position to delete:\n");
       scanf("%d",&pos);
       while(i<pos-1)
       {
           temp=temp->next;
           i++;
       }
       next_node=temp->next;
       temp->next=next_node->next;
       free(next_node);
        printf("linked list after deletion\n");
        for(temp=head;temp!=NULL;temp=temp->next)
        {
        printf("%d ->",temp->data);
        }
       printf("null\n");
      break;
    }



case 7:
    {

        printf("exited\n");
       k=0;
       break;


    }
default:
    {
        printf("select valid option\n");

    }
    }
    }
}
