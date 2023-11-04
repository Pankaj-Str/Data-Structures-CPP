#include <iostream>
// Linked List

// Define a node structure
// individual elements in the linked list 

struct Node{
  int data;
  Node* next;
  Node(int data) : data(data), next(nullptr) {}
};

// define a linkedlist class to manage the list 

class LinkedList{
    
    private : Node* head; // Pointer to the first node in the list 
    public : LinkedList() : head(nullptr){ }
    
    // function to insert a new element 
    // begninning of the list 
    
    void insert(int data){
       Node *  newNode = new Node(data);
       newNode ->next = head;
       head = newNode;
    }
    
    void display(){
        
        Node* current = head;
        while(current != nullptr){
            std::cout<<current->data<<" -> ";
            current = current->next;
        }
        std::cout<<"nullptr"<<std::endl;
    }
    
    // function to cehck id the list is empty
    bool isEmpty(){
        return head == nullptr;
    }
    
};

int main(){
    
    LinkedList list;
    list.insert(1);
    list.insert(2);
    list.insert(3);
    
    std::cout<<"Linked List : ";
    list.display();
    
    
    
    return 0;
}






