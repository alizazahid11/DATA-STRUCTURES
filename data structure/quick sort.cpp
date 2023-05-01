#include <iostream>
using namespace std;
#include<stdio.h> 
void quicksort(int number[100],int first,int last)
{ 
  int i, j, pivot, temp;
  if(first<last)
 { 
  pivot=first; i=first; j=last;   
  while(i<j)
  { 
   while(number[i]<=number[pivot]&&i<last) 
      i++; 
   while(number[j]>number[pivot]) 
      j--;
   if(i<j)
   { 
    temp=number[i]; 
    number[i]=number[j]; 
    number[j]=temp; 
   } 
  }  
  //if i>=j so
 temp=number[pivot]; 
 number[pivot]=number[j];
 number[j]=temp; 
 quicksort(number,first,j-1);
 quicksort(number,j+1,last);
 } 
} 
 
int main()
{ 
  int i, count, number[25],elements; 
  cout<<"How many elements are u going to enter?: "; 
  cin>>count; 
 cout<<"enter elements: ";
for(i=0;i<count;i++) 
 cin>>number[i];
  quicksort(number,0,count-1); 
 cout<<"order of sorted elements: ";
  for(i=0;i<count;i++)
cout<<number[i]<<'\t';
   return 0; 
}