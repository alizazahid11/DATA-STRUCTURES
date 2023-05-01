#include <iostream>
using namespace std;
int main(){
int a[100]; //allocating memory to array
int range;
int element;
int i;
int found =0;
cout<<"enter the range of array: ";
cin>>range;
cout<<"enter the elements: ";
for(int i=0;i<range;i++) 
  cin>>a[i];
  cout<<"enter the elements to be search: ";
  cin>>element;
 //linear search logic 
for(int i=0;i<range;i++)
  if(a[i]==element){
    cout<<"element is found at  index: "<<i;
    cout<<"\nposition of element is: "<<i+1;
    found=1; //true
    break;
  } 
  if(found==0){ 
     cout<<"element not found";}
return 0;    
}