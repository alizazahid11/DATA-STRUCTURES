#include <iostream>
using namespace std;

int main()
{
    int sizeofdata=4;
    int r,c;
    int cm[10][10],i,j;
    cout<<"Enter the col and row size respectively"<<endl;
    cin>>r>>c;
    int tot_element=r*c;
    cout<<"the total elements are "<<tot_element<<endl;
    cout<<"Enter the elements of matrix col wise"<<endl;
    for(j=0;j<c;j++)
    {
        for(i=0;i<r;i++)
            cin>>cm[i][j];
    }
    cout<<"Displaying the col major matrix"<<endl;
    for(j=0;j<c;j++)
    {
        for(i=0;i<r;i++)
            cout<<cm[i][j]<<" ";
        cout<<endl;
    }
 
int *Base_add = &cm[0][0];   //creating a pointer to base address for accessing data
    int *cm_ptr[10][10];          //creating a pointer for each element of array
    cout<<"\n displaying the address in col major form\n";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cm_ptr[i][j]=Base_add+(j*r+i)*sizeof(int);
            cout<<"Address of "<<cm[i][j]<<" is "<<&cm[i][j]<<endl;
        }
    }}