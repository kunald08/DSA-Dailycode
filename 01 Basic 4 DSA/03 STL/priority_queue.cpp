#include <iostream>
#include <queue>  // Required for priority_queue operations

using namespace std;

int main() {
    // Priority Queue ?:
    // A priority queue is a data structure that is similar to a regular queue, 
    // but with an additional feature: elements are dequeued based on their priority.
    // The highest priority element is dequeued first, not the element that has been in the queue the longest.
    // In C++, the default priority queue is a max-heap, meaning the largest element has the highest priority.

    // Create a priority queue of integers (max-heap by default)
    priority_queue<int> pq;

    // Check if the priority queue is empty
    if (pq.empty()) {
        cout << "The priority queue is empty!" << endl;
    }

    // Push elements into the priority queue
    pq.push(30);  // Priority Queue: [30]
    pq.push(10);  // Priority Queue: [30, 10]
    pq.push(50);  // Priority Queue: [50, 10, 30]
    pq.push(20);  // Priority Queue: [50, 20, 30, 10]

    // Size of the priority queue
    cout << "Size of the priority queue: " << pq.size() << endl;

    // Access the top element (highest priority element)
    cout << "Top element: " << pq.top() << endl;  // Access the largest element (50)

    // Pop the top element (highest priority element)
    pq.pop();  // Removes 50, priority queue becomes [30, 20, 10]
    cout << "Top element after pop: " << pq.top() << endl;  // Access the next largest element (30)

    // Pop the rest of the elements
    pq.pop();  // Removes 30
    pq.pop();  // Removes 20
    pq.pop();  // Removes 10

    // Check if the priority queue is empty
    if (pq.empty()) {
        cout << "The priority queue is now empty!" << endl;
    }

    // Demonstrate the use of a priority queue with custom priorities
    // A priority queue can also be created using a custom comparator.
    // In this case, we will use a min-heap (smallest element has highest priority).
    
    priority_queue<int, vector<int>, greater<int>> min_pq;

    // Push elements into the min-heap priority queue
    min_pq.push(30);  // Min-Priority Queue: [30]
    min_pq.push(10);  // Min-Priority Queue: [10, 30]
    min_pq.push(50);  // Min-Priority Queue: [10, 30, 50]
    min_pq.push(20);  // Min-Priority Queue: [10, 20, 50, 30]

    // Access the top element (smallest element)
    cout << "Top element of the min-heap: " << min_pq.top() << endl;  // Access the smallest element (10)

    // Pop the top element (smallest element)
    min_pq.pop();  // Removes 10, min-priority queue becomes [20, 30, 50]
    cout << "Top element of the min-heap after pop: " << min_pq.top() << endl;  // Access the next smallest element (20)

    return 0;
}
