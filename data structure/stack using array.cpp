//----------------------stack using ARRAYS------------------------------------------
#include<stdio.h>
#include<stdlib.h>
#include <iostream>
using namespace std;
int stack[10]; //INITIALIZING MEMORY TO ARRAY
int top=0;
void push(){ //ITS USE TO PUSH THE ELEMENTS IN STACK
  int topush;
  cout<<"enter data: ";
  cin>>topush;
    if(top >= 9){
        printf("The stack is overflowed.\n");
    }else{
      top++; //INCREMENT THE TOP 
      stack[top]=topush;

    }

}

void pop(){ //TO POP THE ITEM FROM STACK
    int itemtopop;
    if(top==0){
        printf("The stack is underflow\n");
    }else{
        itemtopop=stack[top];
        top--; //DECREMENTING THE TOP
        printf("the value which has been popped is: %d\n", itemtopop);
        
    }
}


void display(){ //FOR DISPLAY THE STACK
    if(top>=0)
    {
        printf("\n the elements in stack");
    
        for (int i=top;i>=0;i--)
       
        printf("\n%d",stack[i]);
       
    }
    else
       {

        cout<<"the stack is empty";}
    }


int main(){
    int choice,value;
    cout<< "1: push in stack"<<endl;
    cout<< "2: pop in stack"<<endl;
    cout<< "3: display in stack"<<endl;
    cout<< "4: exit the stack"<<endl;
    do{
    cout<<" \n please enter your choice: ";
    cin>>choice;
    switch(choice)
    {
        case 1:
        {
            push();
            break;
        }
        case 2:
        {
            pop();
            break;}
       
        case 3:
        {
            display();
            break;
        }
        case 4:
        {
          cout<<"the exit point";
          break;
        }
        default: {
            cout<<"please enter valid choice"<<endl;
        }
    } 
    }while(choice!=4);
    return 0; }   