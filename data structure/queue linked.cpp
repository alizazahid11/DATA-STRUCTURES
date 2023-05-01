#include<stdio.h>
#include<stdlib.h>
#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *front = 0;//one pointer is poiting to head
struct node *rear = 0;//and one is pointing to tail

void insert_element(int x)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));//allocating memory
    newnode -> data = x; //putting value in data
    newnode -> next = 0; 
    
    if(front == 0 && rear == 0)
    {
        front  = newnode;
        rear = newnode;
    }
    else
    {
        rear -> next = newnode;
        rear = newnode;
    }
    
}
void display_queue()
{
    struct node *temp;
   
     
    if(front == 0 && rear == 0)
    {
        printf("No element  is there\n");
    }
    else
    {   temp=front;
        while(temp != 0)
        {
            printf("%d\n",temp -> data);
             temp=temp -> next;
        }
    }
}

void deleting_element()
{

struct node *temp;
temp = front;
    if(front == 0 && rear == 0)
    {
        printf("No element  is there\n");
    }
   
    else
    {
        printf("No.is deleted %d\n",front -> data);
        front = front -> next;
        free(temp);
    }
}
int main() {
insert_element (3);
insert_element (5);
insert_element (8);
display_queue ();

deleting_element();
deleting_element();

display_queue();


    return 0;
}