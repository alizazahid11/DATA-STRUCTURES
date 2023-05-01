#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){
    int Rows=7; 
    int NCols;
  
    int **TDA=new int*[Rows];//dynamically creating an array of integer pointers of size Rows

    cout << "Enter your data"<< endl;
    for (int i = 0; i < Rows;i++){ //dynamically allocating memory for coloumn in each row
        
        TDA[i] = new int[i];
        for (int j = 0; j < i;j++){
            cin >> TDA[i][j];
            
        }
    }
    
 
    for (int i = 0; i < Rows;i++){
        for (int j = 0; j <i;j++){
            cout << TDA[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < Rows;i++){ //del the array that contains our actual data
        delete[] TDA[i];
    }
    delete[] TDA;//deleting the array that holds the pointers pointing to our actual data

    return 0;
}