#include <iostream>
using namespace std;
class BinaryHeapTree{
public:
 int PQ[15];
 int data;
 int size=0;
 int index;
void Insert(){
    cout<<"Enter the size of the tree: "<<endl;
    cin>>size;
    for (int i=1;i<size+1;i++){
        cout<<"Enter the elements of the tree: "<<endl;
        cin>>data;
        PQ[i]=data;
    }
 }
 void Print(){
    for (int i=1;i<size+1;i++){
        cout<<"Sequence of element stored in a queue: "<<PQ[i]<<endl;

 }
 }

 void swap(int*x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
 }
 void MinimumPriorityQuene(){

    int index=size;
    while(index!=1){
        if(PQ[index]<PQ[index/2]){
            swap(&PQ[index/2],&PQ[index]);
            index=index/2;
        }
        else{
        break;

    }
    }

 }



};
int main(){
    BinaryHeapTree heap;
    heap.Insert();
   cout<<"Before:"<<endl;
   heap.Print();
    heap.MinimumPriorityQuene();
    cout<<"After: "<<endl;
    heap.Print();
    return 0;
}