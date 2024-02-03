#include <iostream>
#define SIZE 10

using namespace std;

class Stack
{
    int stack[SIZE],top;
    public:
    Stack(){
        top=-1; 
    }

    void push(int num){
        if(top==SIZE-1){
            cout<<"\nStack Overflow\n";
    }
        else{
            top++;
            stack[top]=num;
        }
    }
    void pop(){
        int num;
        if(top==-1){
            cout<<"\nStack Underflow\n";
        }
        else{
            num=stack[top];
            top--;
            cout<<"\nElement Poped Out: "<<num;
        }
    }
    void traverse(){
        if(top==-1){
            cout<<"\nStack is Empty\n";
        }
        else{
            cout<<"\nStack Element\n";
            for(int i=top;i>=0;i--){
                cout<<stack[i]<<endl;
            }
            }
    }
};

int main(){
    Stack s;
    s.traverse();
    s.push(7);
    s.push(13);
    s.push(17);
    s.traverse();
    s.pop();
    s.traverse();
    return 0;
}