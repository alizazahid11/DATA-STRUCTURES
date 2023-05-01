#include <iostream>
#include<conio.h>

using namespace std;

int i,j,k,a[20];
void mergesort(int,int);
void merge(int,int,int);
int main()
{
int n;
cout<<"Enter the size of an array:\n";
cin>>n;
cout<<"Enter the elements:\n";
for(i=1;i<n;i++)
cin>>a[i];
mergesort(1,n);
printf("Sorted merge array is:\n");
for(i=1;i<n;i++)
cout<<a[i]<<"\t";
return 0;
}

void mergesort(int low,int high)
{
int mid;
if(low<high)
{
mid=(low+high)/2;
mergesort(low,mid);
mergesort(mid+1,high);
merge(low,mid,high);
}
}

void merge(int low,int mid,int high)
{
int b[20],h=low,i=low,j=mid+1;
while((h<=mid)&&(j<=high))
{
if(a[h]<a[j])
{
b[i++]=a[h];
h++;
}
else
{
b[i++]=a[j];
j++;
}
}
if(h>mid) // if the sub list with index h is greater than mid so
{
for(k=j;k<=high;k++) //first all the elements in the 2nd sublist with index j shifted in the array b.
b[i++]=a[k];
}
else
{
for(k=h;k<=mid;k++)//otherwise all the elements of sublist with index i will be shifted
b[i++]=a[k];
}
for(k=low;k<=high;k++)
a[k]=b[k];                //shifting the b array into a array
}


