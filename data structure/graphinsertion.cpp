#include<iostream>
#include<string>
using namespace std;
class graph{
    //attributes
    int  v;
    int **adj;//pointer to pointer which will contain array of pointers
    public:
    graph(int v){ //create const to initialize val of data member
        this->v =v;
        adj=new int*[v];//allocating memory using the new operator for the array of pointers that will store reference to arrays with size v
        for(int r=0;r<v;r++){ //allocating memory to each row
            adj[r]=new int[v];
            for(int c=0;c<v;c++){
                adj[r][c]=0; //initialize it with 0

            }
        }    }
        void addedge(int s,int e){
            adj[s][e]=1; //if vertex connected so 1 otherwise 0
            adj[e][s]=1;

        }
        void print(){
            cout<<"the adjacency matrix is: "<<endl;
            for(int i=0;i<v;i++){
                for(int j=0;j<v;j++)
                    cout<<adj[i][j]<<" ";
                    cout<<endl;
            }
        }

};
int main(){
    graph g(4);
    g.addedge(0,1);
    g.addedge(1,2);
    g.addedge(2,3);
    g.addedge(0,2);
    g.addedge(0,3);
    g.print();
    return 0;
}