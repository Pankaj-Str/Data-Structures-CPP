#include<iostream>
#include<queue>

using namespace std;

int main(){

    // queue<type> create a queue of integers 

    queue<int> myQueue;

    // Enqueue elements into the queue
    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);

    // 30 20 10 
    
    // display the front element of the queue

    cout<<"Front element of the queue : "<< myQueue.front()<<endl;
    
    // display the size of queue

    cout<<"queue size : "<< myQueue.size()<<endl;

    // Dequeue elements from the queue

   
    cout<<" Dequeued Elements "<<endl;
    while(!myQueue.empty()){
         cout<<myQueue.front() <<" ";
         myQueue.pop();
    }
    cout<<endl;
    
    // check if queue is empty

    if(myQueue.empty()){
        cout<<"the queue is empty .... "<<endl;
    }else{
        cout<<"the queue is not empty .... "<<endl;
    }

    return 0;
}
