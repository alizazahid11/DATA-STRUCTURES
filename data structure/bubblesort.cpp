#include <iostream>
using namespace std;
int main(){
    int ar[100];
    int n,temp,i,j;
    int flag=0;
    cout<<"how many elements? ";
    cin>>n;
    cout<<"enter the array elements: ";
    for(int i=0;i<n;i++)
    cin>>ar[i];
    for(i=0;i<n-1;i++){
    //flag=0;
    
        for(j=0;j<n-1-i;j++){
            if(ar[j]>ar[j+1]){
                temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0) //means if no swapping done so break it
          break;
    }
 cout<<"sorted bubble array is: ";
      for(int i=0;i<n;i++)
      cout<<ar[i]<<"\t";
      return 0; 
}