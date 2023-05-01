#include <iostream>

using namespace std;

int main()
{
    int sizeofdata=4;
    int r,c;
    int rm[10][10],i,j;
    cout<<"Enter the row and column size respectively"<<endl;
    cin>>r>>c;
    int tot_element=r*c;
    cout<<"the total elements are "<<tot_element<<endl;
    cout<<"Enter the elements of matrix row wise"<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            cin>>rm[i][j];
    }
    cout<<"Displaying the row major matrix"<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            cout<<"\nElementi : ["<<i+1<<"]["<<j+1<<"] ="<<rm[i][j]<<" ";
        cout<<endl;
    }
 
int *Base_add = &rm[0][0];   //creating a pointer to base address for accessing data
    int *rm_ptr[10][10];          //creating a pointer for each element of array
    cout<<"\n displaying the address in row major form\n";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            rm_ptr[i][j]=Base_add+(i*c+j)*sizeof(int);
            cout<<"Address of "<<rm[i][j]<<" is "<<&rm[i][j]<<endl;
        }
    }}