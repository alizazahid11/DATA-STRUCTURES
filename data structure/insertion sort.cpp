#include <iostream>
using namespace std;
int main(){
int ar[100];
    int element,i,j,temp;
    cout<<"how many elements? ";
    cin>>element;
    cout<<"enter the array elements: ";
    for(int i=0;i<element;i++)
    cin>>ar[i];
    for(int i=1;i<element;i++){
        temp=ar[i];
        j=i-1;
        while(j>=0 && ar[j]>temp){
        ar[j+1]=ar[j];
        j--;}
       ar[j+1]=temp;
    }
       cout<<"sorted array is: ";
      for(int i=0;i<element;i++)
      cout<<ar[i]<<"\t";
      return 0;  

    }