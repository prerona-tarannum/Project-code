#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <string.h>
struct Node
{
   int data;
   struct Node *next;
}*front = NULL,*rear = NULL;

struct Information
{
char ename[10];
int id;
};
struct Information inf[5];
int i, j;
void ask ();
void insert(int);//enqueue
void delete();//dequeue
void display();

int main()
{


int pages;

    printf("Crime Alert Pages:\n 1.Signup\n 2.Login\n");
    int signupid=11716;
    int signuppassword=13935;
    int retypesignuppassword=13935;

    int signid1,spw1,respw1;
    printf("Enter signupid\n");
    scanf("%d",&signid1);
    printf("\n");
    printf("Enter signuppassword\n");
    scanf("%d",&spw1);
    printf("\n");
    printf("Enter retypesignuppassword\n");
    scanf("%d",&respw1);
    printf("\n");
    if
        (signupid==signid1&&signuppassword==spw1&&retypesignuppassword==respw1)
    {
        printf("Signup is done\n\n");
    }
    else
    {
        printf("signup information invalid\n");
    }


    int loginid=14134;
    int loginpassword=20115;
    int loginid2,pw2;
    printf("Enter login id\n");
    scanf("%d",&loginid2);
    printf("\n");
    printf("Enter password\n");
    scanf("%d",&pw2);
    printf("\n");
    if
        (loginid==loginid2&&loginpassword==pw2)
    {
        printf("Crime Alert Login is successfull\n");
    }
    else
    {
        printf("Login information invalid\n");
    }
{
for(i = 0; i < 3; i++)
{
printf("\nEnter %d number Crime record:\n", i+1);
printf("\nCrime name is:\t");
scanf("%s", inf[i].ename);
printf("\nEnter id:\t");
scanf("%d", &inf[i].id);
}
printf("\nDisplaying Crime record:\n");
for(i = 0; i < 3; i++)
{
printf("\nCrime name is %s", inf[i].ename);
printf("\nid is %d", inf[i].id);
}

}
void main()
{
ask();
}

   int choice;
   int id;
   printf("\n List to display insertion and delete of same data \n");
   while(1){
      printf("\nShowlist\n");
      printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n");
      printf("Enter your choice: ");
      scanf("%d",&choice);
      switch(choice){
	 case 1: printf("Enter the id to be insert: ");
		 scanf("%d", &id);
		 insert(id);
		 break;
	 case 2: delete(); break;
	 case 3: display(); break;
	 case 4: exit(0);
	 default: printf("\nWrong selection!!! Please try again!!!\n");
      }
   }
}
void insert(int id)//enqueue
{
   struct Node *newNode;
   newNode = (struct Node*)malloc(sizeof(struct Node));
   newNode->data = id;
   newNode -> next = NULL;
   if(front == NULL)
      front = rear = newNode;
   else{
      rear -> next = newNode;
      rear = newNode;
   }
   printf("\nId is Inserted Successfully!!!\n");
}
void delete()//dequeue
{
   if(front == NULL)
      printf("\nQueue is Empty!!!\n");
   else{
      struct Node *temp = front;
      front = front -> next;
      printf("\nDeleted element: %d\n", temp->data);
      free(temp);
   }
}
void display()
{
   if(front == NULL)
      printf("\nQueue is Empty!!!\n");
   else{
      struct Node *temp = front;
      while(temp->next != NULL){
	 printf("%d--->",temp->data);
	 temp = temp -> next;
      }
      printf("%d--->NULL\n",temp->data);
   }
}
