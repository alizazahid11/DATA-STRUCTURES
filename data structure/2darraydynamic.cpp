#include <iostream>
using namespace std;
int main() {
  int ** arry;
  int row, col, i, j;
  cout << "Number of Rows:" << endl;
  cin >> row;
  cout << "Number of Columns:" << endl;
  cin >> col;
  //Allocating the row space in heap dynamically
  arry = new int * [row];
  //Allocating the column space in heap dynamically
  for (i = 0; i < row; i++) {
    arry[i] = new int[col];
  }
  //Giving inputs to the array
  cout << "Enter " << (row * col) << " numbers to the Array\n";
  for (i = 0; i < row; i++) {
    for (j = 0; j < col; j++) {
      cout << "Enter the elements at Row " << i << " Column " << j  << endl;
      cin >> arry[i][j];
    }
  }
  //Display the array
  cout << "Here is your 2D Array:" << endl;
  for (i = 0; i < row; i++) {
    for (j = 0; j < col; j++) {
      cout << arry[i][j] << ' ';
    }
    cout << endl;
  }
  //Free the memory after the use of array
  for (i = 0; i < row; i++) {
    delete[] arry[i];
  }
  delete[] arry;
  return 0;}