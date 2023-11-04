#include<iostream>
using namespace std;

// structure 
struct TrainCarriage
{
    int passenger;
    TrainCarriage* next;
    TrainCarriage* prev;
    TrainCarriage(int passenger) : passenger(passenger), next(nullptr),prev(nullptr){}
};

class Train{
    TrainCarriage* front;

    public : Train() : front(nullptr){}

    // function to add a new carriage to the front of the train 
    void addCarriage(int passenger){
        TrainCarriage* newCarriage = new TrainCarriage(passenger);
        if(front != nullptr){
            newCarriage->next = front;
            front->prev = newCarriage;
        }
        front = newCarriage;
    }
    // function to desplay the passengers in the train
    
    void display(){
        TrainCarriage* current = front;

        while (current != nullptr)
        {
            cout<<"Passenger : "<< current->passenger<<" <- ";
            current = current ->next;
        }
        cout<<"End of the Train "<<endl;
        
    }

};

int main(){
    Train myTrain;
    myTrain.addCarriage(1);
    myTrain.addCarriage(2);
    myTrain.addCarriage(3);

    cout<<"Train Passengers (Front to Rear...)";
    myTrain.display();
    return 0;
}
