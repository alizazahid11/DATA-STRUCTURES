#include<iostream>
using namespace std;
int main(){
    int a[100];
    int range,element,mid,left,right;
    int loc=-1; // store location here which will return the location of the search element 
cout<<"enter the range of array: ";
cin>>range;
cout<<"enter the elements: ";
for(int i=0;i<range;i++) 
  cin>>a[i];
  cout<<"enter the elements to be search: ";
  cin>>element;
  left=0,right=range-1;

  while(left<=right){
   mid=(left+right)/2;
     if(a[mid]==element){
   
      loc=mid;
      break;
  
     }  
     
       else if (element>a[mid])
     {
        left=mid+1;
     }
    else {
        right=mid-1;
    }}
       
 
    

if(loc==-1)
        cout<<"element not found";
  else
     cout<<"found at index: "<<loc<<endl;  
  
   return 0;}

  


