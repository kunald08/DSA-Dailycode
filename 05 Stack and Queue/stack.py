# implementing a stack using a list

class Stack:
    def __init__(self):
        self.stack = []
    
    def is_empty(self):
        return len(self.stack) == 0
        
    def push(self, item):
        self.stack.append(item)
        
    def pop(self):
        return self.stack.pop()
    
    def peek(self):
        return self.stack[-1]
    
# LIFO - Last In First Out
s = Stack()

s.push(1)
s.push(2)
s.push(3)   
print(s.pop())  # Output: 3
print(s.peek()) # Output: 2
print(s.is_empty()) # Output: False
