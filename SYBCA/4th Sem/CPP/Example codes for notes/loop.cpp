//menu driven for stack

#include <iostream>
using namespace std;

#define MAX 5

struct stack{
    int arr[MAX];
    int top;
}s;

void initstack(){
    s.top=-1;
}

int isempty(stack s){
 if(s.top==-1)
 return 1;
 else
 return 0;
}

int isfull(stack s){
 if(s.top==MAX-1)
 return 1;
 else
 return 0;
}

void push(stack s){
    int n;
    if(isfull(s)==1)
    cout<<"Stack is FULL";
    else
    {
    cout<<"Enter number to insert into stack";
    cin>>n;
    s.arr[++s.top]=n;
}
}
int main(){
    return 0;
}