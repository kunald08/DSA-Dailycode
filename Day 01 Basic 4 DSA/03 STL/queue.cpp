#include <iostream>
#include <queue>  // Required for queue operations

using namespace std;

int main() {
    // Queue ?:
    // A queue is a data structure that follows the First In, First Out (FIFO) principle.
    // In a queue, the first element inserted is the first one to be removed.
    // Think of it like a queue of people, where the first person in line is the first one to be served.

    // Create a queue of integers
    queue<int> q;

    // Check if the queue is empty
    if (q.empty()) {
        cout << "The queue is empty!" << endl;
    }

    // Enqueue elements (push to the back of the queue)
    q.push(10);  // Queue: [10]
    q.push(20);  // Queue: [10, 20]
    q.push(30);  // Queue: [10, 20, 30]
    q.push(40);  // Queue: [10, 20, 30, 40]

    // Size of the queue
    cout << "Size of the queue: " << q.size() << endl;

    // Accessing the front element of the queue
    cout << "Front element: " << q.front() << endl;

    // Dequeue elements (remove from the front of the queue)
    q.pop();  // Removes 10, queue becomes [20, 30, 40]
    cout << "Front element after pop: " << q.front() << endl;

    // Dequeue the rest of the elements
    q.pop();  // Removes 20
    q.pop();  // Removes 30
    q.pop();  // Removes 40

    // Check if the queue is empty
    if (q.empty()) {
        cout << "The queue is now empty!" << endl;
    }

    return 0;
}
