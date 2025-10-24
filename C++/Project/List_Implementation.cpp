#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

// Node class to represent each element in linked list
class Node
{
public:
    int value; // Data part of the node
    Node *next; // Pointer to next node

    Node() {}

    Node(int value) : value(value), next(nullptr) {} // Constructor to initialize
};

// linkedList class to manage the list
class linkedList
{
    Node *head; // Pointer to the head of the list

public:
    linkedList() : head(nullptr) {} // Constructor to initalize head to nullptr

    // Function to insert a new node at the beginning of the list
    void insert(int info)
    {
        Node *newnode = new Node(info);
        newnode->next = head; // Link new node to the privious head
        head = newnode; // Update thead to the new node
    }

    // Function to display all values in the list
    void display()
    {
        Node *ptr = head; // Start from head
        while (ptr != nullptr) // Traverse the list
        {
            cout << "\nValue: " << ptr->value;
            ptr = ptr->next; // Move to the next node
        }
    }

    // Destructor to free memory
    ~linkedList()
    {
        Node *current = head; // Start from the head
        while(current!=nullptr)
        {
            Node * nextNode = current->next; // Store next node
            delete current; // Free current node
            current=nextNode; // Move to the next node
        }
    }
};

int main()
{
    linkedList n; // Create a linked list
    char ch;
    while (true)
    {
        cout << "\nDo you wanna make a node: ";
        cin >> ch;
        if (ch == 'y' || ch == 'Y')
        {
            int value;
            cout << "\nEnter value: ";
            cin >> value;
            n.insert(value); // Insert value into the list
        }
        else
            break; // Exit the loop
    }
    cout << "\nDo you wanna see the list values: ";
    cin >> ch;
    if (ch == 'y' || ch == 'Y')
        n.display(); // Display the list values
    return 0;
}
