#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main(){

    vector<int> minHeap;

    // insert elements into min-heap

    minHeap.push_back(4);
    minHeap.push_back(10);
    minHeap.push_back(3);
    minHeap.push_back(5);
    minHeap.push_back(70);

    //convert  into vector into a min-heap

    make_heap(minHeap.begin(),minHeap.end(),greater<int>());

    // print the min-heap

    cout<<"MIn - Heap ";
    for(int value : minHeap){
        cout<<value<<" ";
    }
    cout<<endl;

    // extract the minimum elements
     int minElement = minHeap.front();
     pop_heap(minHeap.begin(),minHeap.end(),greater<int>());
     minHeap.pop_back();

     // print the min- heap after extraction

     cout<<" MIN - heap after extracting "<<minElement<< " : ";
    for(int value : minHeap){
        cout<<value<<" ";
    }
    cout<<endl;




    return 0;
}