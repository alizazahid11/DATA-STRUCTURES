#include <iostream>
#include <cstdlib>
using namespace std;
struct node{
    int data;
    node*next; // store address of next nodde
};
struct node*head =NULL; //store adress of first node i.e null
 void insert(int x){ //insertion at the beginning
  struct  node*temp;//
temp=(struct node *)malloc(sizeof(struct node));//malloc returns a pointer to the starting adress ofmemory block
temp->data=x;
     temp->next=head; //change next of temp to point to head
     head=temp;} //change head to point to recently created node
void printlist(){
   node*temp=head; //we dont  want to modify head
   cout<<"list is  "<<" "<<endl;
   while(temp!=NULL){
       printf("%d",temp->data);//print value in that node
       temp=temp->next;//going to next data
   }
  cout<<endl;
}    
    int main(){
        int n,x;
        cout<<"how many num you want ?"<<endl;
        cin>>n;
       
        
             for(int i=0;i<n;i++){
                    cout<<"enter the num"<<endl;
            cin>>x;
            insert(x);
            printlist();
            
        }
        return 0;
    }