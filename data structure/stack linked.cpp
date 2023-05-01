#include<stdio.h>
#include<stdlib.h>
#include <iostream>
using namespace std;
struct node{
    int data;
    node*link; //stores the adress of link
};
class stack{
public:    
struct node*top=NULL; //top is initially null
void push_in(int element){ //function of push
    node*newnode;// store the adress of new node
    newnode=(struct node*)malloc(sizeof(node)); //allocating memory dynamically
    newnode->data=element;//recieving val
    newnode->link=top; //contains adress of previous element 
   
     top=newnode;} 
void pop_out(){ //top function
    if (top==NULL){
        cout<<"stack is underflow";
    }
else{
    cout<<"\npopped element: "<<top->data<< endl;//print data of the top
    top=top->link;}//will go to the link of the top element
 
}     
void printing_stack(){
    node*temp; //another pointer because top is always poiting to top of node
    temp=top;
    if(top==0){
        cout<<"stack is empty";
    }
    else{
        while(temp!=0){
            printf("\nthe values are \n%d",temp->data);
            temp=temp->link;}//will go to the link of the temp element
           
        }
    }
};
int main(){
    stack s;
    s.push_in(5);
    s.push_in(10);
    s.push_in(15);
    s.push_in(27);
    s.printing_stack();
    s.pop_out();
    s.pop_out();
    s.printing_stack();
    return 0;
}