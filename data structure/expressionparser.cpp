#include <iostream>
#include<stack>
using namespace std;
//converting infix expression into postfix expression
class stack{
public:
//func is used for returning operator precedence 
      int prc(char op){
        if(op=='^')
        return 3;
        else if(op=='*'|| op=='/')
        return 2;
        else if(op=='+'|| op=='-')
        return 3;
        else 
        return -1;}
      void infixtopostfix(string s){
        stack <char> st;
      }  
};
int main(){
;
}