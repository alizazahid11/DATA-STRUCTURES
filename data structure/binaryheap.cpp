#include <iostream>
using namespace std;
class heap{
    int *ele;//pointer to array of elements in heap
    int count;
public:
   heap(int size){//constructor
    ele=new int[size];//memory allocating to array
    count=0;//int count with 0
   }   
   void swap(int a,int b){
    int temp;
    temp=ele[a];
    ele[a]=ele[b];
    ele[b]=temp;
   } 
   void heapup(int root,int bottom){
    if(bottom>root){
        int parent=(bottom-1)/2;
        if(ele[parent]>ele[bottom]){
            swap(parent,bottom);
            heapup(root,parent);
        }
    }
   }
   void enqueue(int a){ 
    ele[count]=a;
    heapup(0,count);//sending root and count to heapup func
    count++;
   }
   void heapdown(int root,int bottom){
    int min,leftchild,rightchild;
    rightchild=(2*root)+2;
    leftchild=(2*root)+1;
    if(leftchild<=bottom){
        if(leftchild==bottom){
            min=leftchild;}
        else{
            if(ele[leftchild>=ele[rightchild]]){
                min=rightchild;
            }
         else{
            min=leftchild;
         } 
         if(ele[root]>ele[min]){
            swap(root,min);
            heapdown(min,bottom);
         }  
        }
    }
   }
   void dequeue(){ 
      count--;
    ele[0]=ele[count];
  
    heapdown(0,count);
   }
   void show(){
    for(int i=0;i<count;i++){
        cout<<ele[i]<<" ";
    }
   }
};
int main(){
    //    1
    //  /   \
    //  5   3
    //  /\   /\
   //  50 7  10 9 

    heap h1(10);
    h1.enqueue(10);
    h1.enqueue(50);
    h1.enqueue(1);
    h1.enqueue(7);
    h1.enqueue(5);
    h1.enqueue(3);
    h1.enqueue(9);
     h1.dequeue();
     cout<<"del show \n";
    h1.show();

}