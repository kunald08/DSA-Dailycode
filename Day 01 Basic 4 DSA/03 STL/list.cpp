#include <iostream>
#include <list>  // Include the list header from STL

using namespace std;

/*
    A list in C++ is a sequence container that allows efficient insertion and removal of elements at both ends and in the middle of the sequence. 
    It is implemented as a doubly linked list, where each element is stored in a node, and each node contains:
    - A data element.
    - A pointer to the next node.
    - A pointer to the previous node.

    Characteristics:
    - **Bidirectional Iteration**: You can iterate through the list from the first to the last element and vice versa.
    - **Efficient Insertion/Deletion**: Inserting or deleting elements in the middle of the list is efficient (constant time, O(1)), as you only need to adjust the pointers.
    - **No Direct Access**: Random access is not available like in vectors or arrays. You must iterate through the list to access an element.

    Common functions for `list` include:
    - `push_back()`: Adds an element to the end.
    - `push_front()`: Adds an element to the front.
    - `pop_back()`: Removes the last element.
    - `pop_front()`: Removes the first element.
    - `insert()`: Inserts an element at a specific position.
    - `remove()`: Removes all occurrences of a specific value.
    - `clear()`: Removes all elements.
*/

int main() {
    // Create an empty list of integers
    list<int> myList;

    // Inserting elements at the back of the list
    myList.push_back(10);  // Adds 10 at the end
    myList.push_back(20);  // Adds 20 at the end
    myList.push_back(30);  // Adds 30 at the end

    // Inserting an element at the front of the list
    myList.push_front(5);  // Adds 5 at the beginning

    // Display the elements in the list
    cout << "Elements in the list: ";
    for (auto it = myList.begin(); it != myList.end(); ++it) {
        cout << *it << " ";  // Dereferencing iterator to access value
    }
    cout << endl;

    // Remove the front element (5) and the back element (30)
    myList.pop_front();  // Removes the first element
    myList.pop_back();   // Removes the last element

    // Display elements after removal
    cout << "After popping front and back: ";
    for (auto it = myList.begin(); it != myList.end(); ++it) {
        cout << *it << " ";  // Prints 10 and 20
    }
    cout << endl;

    // Inserting an element (15) at a specific position using iterator
    auto it = myList.begin();
    advance(it, 1);  // Move iterator to the second position (20)
    myList.insert(it, 15);  // Inserts 15 before 20

    // Display the list after inserting 15
    cout << "After inserting 15: ";
    for (auto it = myList.begin(); it != myList.end(); ++it) {
        cout << *it << " ";  // Prints 10, 15, and 20
    }
    cout << endl;

    // Remove all occurrences of the element 15 from the list
    myList.remove(15);  // Removes 15 from the list

    // Display the list after removing 15
    cout << "After removing 15: ";
    for (auto it = myList.begin(); it != myList.end(); ++it) {
        cout << *it << " ";  // Prints 10 and 20
    }
    cout << endl;

    // Clear the list (removes all elements)
    myList.clear();
    cout << "List is now cleared. Size: " << myList.size() << endl;  // Prints 0 as the list is empty

    return 0;
}
