#include <iostream>

class Node
{
public:
    int data;
    Node *next;
};

// Global pointers for the head and last nodes
Node *head = nullptr;
Node *last = nullptr;

// Function to add a node to the end of the list
void add(int data)
{
    Node *new_node = new Node;
    new_node->data = data;
    new_node->next = nullptr;
    if (!head)
    {
        head = new_node;
        last = new_node;
    }
    else
    {
        last->next = new_node;
        last = new_node;
    }
}

// Function to add a node to the beginning of the list
void addFirst(int data)
{
    Node *new_node = new Node;
    new_node->data = data;
    new_node->next = head;
    head = new_node;
    if (!last)
    {
        last = new_node;
    }
}

// Function to add a node to the end of the list (alias for add)
void addLast(int data)
{
    add(data);
}

// Function to clear the list
void clear()
{
    Node *current = head;
    while (current)
    {
        Node *next = current->next;
        delete current;
        current = next;
    }
    head = nullptr;
    last = nullptr;
}

// Function to get the first element in the list
int getFirst()
{
    if (!head)
    {
        std::out_of_range("getFirst from empty list");
    }
    return head->data;
}

// Function to get the last element in the list
int getLast()
{
    if (!last)
    {
        std::out_of_range("getLast from empty list");
    }
    return last->data;
}

// Function to peek the first element in the list
int peekFirst()
{
    return getFirst();
}

// Function to peek the last element in the list
int peekLast()
{
    return getLast();
}

// Function to print the list
void display()
{
    Node *current = head;
    while (current)
    {
        std::cout << current->data;
        current = current->next;
        if (current)
        {
            std::cout << " -> ";
        }
    }
    std::cout << std::endl;
}

// Main function to demonstrate the usage of the linked list
int main()
{
    add(1);
    addFirst(0);
    addLast(2);
    add(3);
    std::cout << "Linked List: ";
    display();
    std::cout << "First Element: " << getFirst() << std::endl;
    std::cout << "Last Element: " << getLast() << std::endl;
    clear();
    std::cout << "Linked List after clear: ";
    display();

    return 0;
}
