#include <iostream>

// Define a structure for a node in the linked list
struct Node {
    int data;
    Node* next;
    
    Node(int value) : data(value), next(nullptr) {}
};

// Define a class for the linked list
class LinkedList {
public:
    LinkedList() : head(nullptr) {}

    // Function to insert a new node at the end of the list
    void insert(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    // Function to display the linked list
    void display() {
        Node* current = head;
        while (current != nullptr) {
            std::cout << current->data << " -> ";
            current = current->next;
        }
        std::cout << "nullptr" << std::endl;
    }

    // Function to delete a node with a given value from the list
    void deleteNode(int value) {
        Node* current = head;
        Node* prev = nullptr;

        while (current != nullptr && current->data != value) {
            prev = current;
            current = current->next;
        }

        if (current == nullptr) {
            std::cout << "Node with value " << value << " not found in the list." << std::endl;
            return;
        }

        if (prev == nullptr) {
            head = current->next;
        } else {
            prev->next = current->next;
        }

        delete current;
    }

    // Destructor to release memory when the linked list is destroyed
    ~LinkedList() {
        while (head != nullptr) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }

private:
    Node* head;
};

int main() {
    LinkedList list;

    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);

    std::cout << "Linked List: ";
    list.display();

    list.deleteNode(20);
    std::cout << "Linked List after deleting 20: ";
    list.display();

    return 0;
}
