#include <iostream>
using namespace std;
int main(){
   int arr[3][2] = {{0,1}, {2,3}, {4,5}};
  
   
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Elements at array[" << i
                 << "][" << j << "]: ";
            cout << arr[i][j]<<endl;
        }
    }
  
    return 0;
}