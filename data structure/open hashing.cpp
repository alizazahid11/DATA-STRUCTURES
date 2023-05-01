#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;


#define size 10

struct node
{
    int data;
    struct node *next;
};

struct node *chain[size];

void init()
{
   
    for(int i = 0; i < size; i++)
        chain[i] = NULL;
}

void insert(int value)
{

    struct node *newNode;
    newNode= (struct node*)malloc(sizeof(struct node)); //allocating memory
    newNode->data = value;
    newNode->next = NULL;
                                                         
    int key = value % size;


    if(chain[key] == NULL)
        chain[key] = newNode;
    //collision
    else
    {
        struct node *temp; 
        temp= chain[key];
        while(temp->next)
        {
            temp = temp->next;
        }

        temp->next = newNode;
    }
}

void print()
{
   

    for(int i = 0; i < size; i++)
    {
        struct node *temp = chain[i];
        printf("chain[%d]-->",i);
        while(temp)
        {
            printf("%d -->",temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

int main()
{
    init();

    insert(6);

    insert(0);

    insert(2);

    insert(10);

    insert(3);

    insert(9);

    insert(1);

    insert(8);

    insert(19);

    print();

    return 0;
}