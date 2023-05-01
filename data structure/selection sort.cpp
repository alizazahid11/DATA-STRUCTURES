#include <iostream>
using namespace std;
int main(){
    int ar[100];
    int min,n,tmp;
    cout<<"how many elements? ";
    cin>>n;
    cout<<"enter the array elements";
    for(int i=0;i<n;i++)
    cin>>ar[i];
    for(int i=0;i<n-1;i++){
        min=i;
        for(int j=i+1;j<n;j++){
            if(ar[j]<ar[min]){
            min=j;
            }
            //for swapping
        if(min!=i){
            tmp=ar[i];
            ar[i]=ar[min];
            ar[min]=tmp;
          }

        }}
      cout<<"sorted selection array is: ";
      for(int i=0;i<n;i++)
      cout<<ar[i]<<"\t";
      return 0;  

     }
