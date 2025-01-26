#include <iostream>
#include <stack>  // Required for stack operations

using namespace std;

int main() {
    // Stack ?:
    // A stack is a data structure that follows the Last In, First Out (LIFO) principle.
    // It allows you to add (push) and remove (pop) elements from the top of the stack.
    // The last element pushed is the first one to be popped.

    // Create a stack of integers
    stack<int> s;

    // Check if the stack is empty
    if (s.empty()) {
        cout << "The stack is empty!" << endl;
    }

    // Pushing elements onto the stack
    s.push(10);  // Stack: [10]
    s.push(20);  // Stack: [10, 20]
    s.push(30);  // Stack: [10, 20, 30]
    s.push(40);  // Stack: [10, 20, 30, 40]

    // Size of the stack
    cout << "Size of the stack: " << s.size() << endl;

    // Accessing the top element of the stack
    cout << "Top element: " << s.top() << endl;

    // Pop elements from the stack
    s.pop();  // Removes 40, stack becomes [10, 20, 30]
    cout << "Top element after pop: " << s.top() << endl;

    // Popping the rest of the elements
    s.pop();  // Removes 30
    s.pop();  // Removes 20
    s.pop();  // Removes 10

    // Check if the stack is empty
    if (s.empty()) {
        cout << "The stack is now empty!" << endl;
    }

    return 0;
}
