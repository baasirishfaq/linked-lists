#include <iostream>

using namespace std;

// program to make a stack.

#define MaxSize 100
 
class Stack{
    private:
    int items[MaxSize];
    int top;
    public:
    Stack(){
        top = -1;
    }
    
    void push(int item){
        if(top > MaxSize){
            cout<<"Stack Overflow";
        } else {
            items[++top] = item;
        }
    }
    
    void pop(){
        if(top <= -1){
            cout<<"Stack UnderFlow";
        } else{
          items[top] = 0;
          top--;
        }
    }
    
    void DisplayStack(){
        for(int i = 0; i < MaxSize; i++){
            cout<<items[i]<<" ";
        }
    }
};
 
int main() 
{
    Stack obj;
    obj.push(1);
    obj.push(2);
    obj.push(3);
    obj.push(4);
    obj.DisplayStack();
    return 0;
}