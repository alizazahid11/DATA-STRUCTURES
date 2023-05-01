#include<stdio.h>
#include<stdlib.h>
#include <iostream>
using namespace std;
int queue[6]; //size of queue
int front=-1;//empty 
int rear=-1;//empty
 int Is_Empty() {   
    if(front == rear)      
    return 1;   
    else    
    return 0;  }
int Is_Full() {   
    if(rear == 6 - 1)      
   return 1; 
    else 
    return 0; }
void insert_element(int x){
    if(front==-1 && rear==-1){
        front=rear=0;
        queue[rear]=x;
    }
    else{
        rear++; //increment in rear
        queue[rear]=x;
        
    }
}
void delete_element(){
       if(front==-1 && rear==-1){
         cout<<"underflow condition";}
    else{
        printf(" \ndeleted value: %d\n",queue[front]);
        front++;}
}
void display_queue(){
    if(front==-1 && rear==-1){
         cout<<"sorry queue is empty insert elements please";}
   else{ for(int i=front;i<rear+1;i++){
        printf("\nqueue data:%d\n",queue[i]);}

    }}
int main(){
    insert_element(34);
    insert_element(44);
    insert_element(55);
    insert_element(23);
    display_queue();
    delete_element();
     delete_element();
     display_queue();
     return 0;
    

}