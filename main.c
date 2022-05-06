/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
void display();
void insertbegin();
void insertatend();
struct node
{
    int data;
    struct node* next;
};
struct node* root=NULL;
int main()
{
   printf("\ninsertion and deletion in the linked list\n");
   while(1){
       int choise;
       printf(".....MENU....");
       printf("\n2.DISPLAY\n");
       printf("\n3.INSERT AT BEGIN\n");
       printf("\n4.INSERT AT END\n");
       printf("\n5.EXIT\n");
       printf("ENTER YOUR CHOISE:\t");
       scanf("%d",&choise);
       switch(choise)
       {
           case 2:
           display();
           break;
           case 3:
           insertbegin();
           break;
           case 4:
           insertatend();
           break;
           case 5:
           exit(0);
           break;
           default:
           printf("\n WRONG CHOISE!!!!");
           break;
       }
       }
    return 0;
}
void insertbegin()
{
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("ENTER THE ELEMENT\n");
    scanf("%d",&temp->data);
    temp->next=NULL;
    if(root==NULL)
    root=temp;
    else
    {
   temp->next=root;
   root=temp;
    }
}
void display()
{
    struct node* p;
    if(root == NULL)
    printf("NODES NO NODES ARE FOUND\n");
    else
    {
        printf("\nTHE ELEMENTS ARE:\n");
        p=root;
        while(p!=NULL)
        {
            printf("%d\t",p->data);
            p=p->next;
        }
    }
}
void insertatend()
{
    struct node *temp,*p;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("ENTER THE ELEMENT\n");
    scanf("%d",&temp->data);
    temp->next=NULL;
     printf("\nTHE ELEMENTS ARE :\n");
    if(root==NULL)
    root=temp;
    else
    {
       // printf("\nTHE ELEMENTS ARE :\n");
        p=root;
        while(p->next != NULL){
            p=p->next;
        }
        p->next=temp;
    }
}