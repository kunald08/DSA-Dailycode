#include <iostream>
#include <deque>  // Required for deque operations

using namespace std;

int main() {
    // Deque ?:
    // A deque (double-ended queue) is a linear data structure that allows elements to be added or removed 
    // from both the front and the back. It is similar to a queue, but with more flexibility.
    // Deques follow the First In, First Out (FIFO) principle when accessing from the front, and Last In, First Out (LIFO)
    // when accessing from the back.

    // Create a deque of integers
    deque<int> dq;

    // Check if the deque is empty
    if (dq.empty()) {
        cout << "The deque is empty!" << endl;
    }

    // Push elements to the back of the deque
    dq.push_back(10);  // Deque: [10]
    dq.push_back(20);  // Deque: [10, 20]
    dq.push_back(30);  // Deque: [10, 20, 30]
    dq.push_back(40);  // Deque: [10, 20, 30, 40]

    // Push elements to the front of the deque
    dq.push_front(5);  // Deque: [5, 10, 20, 30, 40]
    dq.push_front(0);  // Deque: [0, 5, 10, 20, 30, 40]

    // Size of the deque
    cout << "Size of the deque: " << dq.size() << endl;

    // Accessing the front and back elements of the deque
    cout << "Front element: " << dq.front() << endl;  // Access the first element (0)
    cout << "Back element: " << dq.back() << endl;   // Access the last element (40)

    // Pop elements from the front of the deque
    dq.pop_front();  // Removes 0, deque becomes [5, 10, 20, 30, 40]
    cout << "Front element after pop_front: " << dq.front() << endl; // Access the first element (5)

    // Pop elements from the back of the deque
    dq.pop_back();   // Removes 40, deque becomes [5, 10, 20, 30]
    cout << "Back element after pop_back: " << dq.back() << endl;   // Access the last element (30)

    // Deque state after some pops
    cout << "Deque after pops: ";
    for (int elem : dq) {
        cout << elem << " ";  // Output remaining elements: 5 10 20 30
    }
    cout << endl;

    // Check if the deque is empty
    if (dq.empty()) {
        cout << "The deque is now empty!" << endl;
    } else {
        cout << "The deque still contains elements." << endl;
    }

    return 0;
}
