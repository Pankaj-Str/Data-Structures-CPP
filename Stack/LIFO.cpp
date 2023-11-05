#include<iostream>
#include<stack>

using namespace std;
// List In , First Out

int main(){

    // create an integer stack
    stack<int> myStack;

    // push elements onto the stack

    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    // print the top element of the stack

    cout<<"Top Element of the stack : "<< myStack.top()<<endl;

    // pop element
    myStack.pop();
    
    cout<<"After Popping the top Element of the stack : "<< myStack.top()<<endl;

    // check if the stack is empty
    if(myStack.empty()){
        cout<<"The stack is empty . "<<endl;
    }else{
        cout<<"The stack is not empty . "<<endl;
    }

    // get the size of the stack 
    cout<<"size of the stack :- "<<myStack.size()<<endl;

    return 0;

}