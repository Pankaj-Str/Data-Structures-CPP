#include <iostream>

// Define a structure for a node in the circular linked list
struct Node {
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

// Define a class for the circular linked list
class CircularLinkedList {
public:
    CircularLinkedList() : head(nullptr) {}

    // Function to insert a new node at the end of the list
    void insert(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
            head->next = head; // Make it circular by pointing to itself
        } else {
            newNode->next = head->next;
            head->next = newNode;
            head = newNode;
        }
    }

    // Function to display the circular linked list
    void display() {
        if (head == nullptr) {
            std::cout << "Circular Linked List is empty." << std::endl;
            return;
        }

        Node* current = head->next;
        do {
            std::cout << current->data << " -> ";
            current = current->next;
        } while (current != head->next);

        std::cout << "Head: " << head->data << std::endl;
    }

    // Function to delete a node with a given value from the list
    void deleteNode(int value) {
        if (head == nullptr) {
            std::cout << "Circular Linked List is empty. Cannot delete." << std::endl;
            return;
        }

        Node* current = head->next;
        Node* prev = head;

        while (current != head && current->data != value) {
            prev = current;
            current = current->next;
        }

        if (current == head && current->data != value) {
            std::cout << "Node with value " << value << " not found in the list." << std::endl;
            return;
        }

        if (current == head) {
            if (current->next == current) {
                head = nullptr;
            } else {
                head = current->next;
            }
        }

        prev->next = current->next;
        delete current;
    }

    // Destructor to release memory when the circular linked list is destroyed
    ~CircularLinkedList() {
        if (head == nullptr) return;

        Node* current = head->next;
        while (current != head) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }

        delete head;
    }

private:
    Node* head;
};

int main() {
    CircularLinkedList list;

    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);

    std::cout << "Circular Linked List: ";
    list.display();

    list.deleteNode(20);
    std::cout << "Circular Linked List after deleting 20: ";
    list.display();

    return 0;
}
