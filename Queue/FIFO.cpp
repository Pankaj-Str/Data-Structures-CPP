//First-In, First-Out (FIFO)
#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> myQueue;

    // Enqueue (push) elements in to queue

    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);

    // Front element of the queue 
    cout<<"front element of the queue : "<<myQueue.front()<<endl;

    // Dequeue (pop) element
    myQueue.pop();
    cout<<"After Dequeue the front element is : "<<myQueue.front()<<endl;

    // check of the queue 
    if(myQueue.empty()){
        cout<<"The queue is empty . "<<endl;
    }else{
        cout<<"The queue is not empty . "<<endl;
    }

    // get the size 
    cout<<"Size of the queue : "<<myQueue.size()<<endl;

    
}