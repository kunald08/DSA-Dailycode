# implementation of a Queue using a list
class Queue:
    def __init__(self):
        self.queue = []
    
    def is_empty(self):
        return len(self.queue) == 0
        
    def enqueue(self, item):
        self.queue.append(item)
        
    def dequeue(self):  
        if not self.queue:
            return None    
        return self.queue.pop(0)
    
    def front(self):
        if not self.queue:
            return None
        
        return self.queue[0]
    
    
# Implementation of Queue using Linked List
class Node:
    def __init__(self, val):
        self.val = val
        self.next = None

class Node:
    def __init__(self, val):
        self.val = val
        self.next = None

class Queue:
    # Implementing this with dummy nodes would be easier!
    def __init__(self):
        self.front = self.rear = None
    
    def enqueue(self, val):
        new_node = Node(val)

        # Queue is non-empty
        if self.rear:
            self.rear.next = new_node
            self.rear = self.rear.next
        # Queue is empty
        else:
            self.front = self.rear = new_node

    def dequeue(self):
        # Queue is empty
        if not self.front:
            return None
        
        # Remove front node and return value
        val = self.front.val
        self.front = self.front.next
        return val

    def print(self):
        cur = self.front
        while cur:
            print(cur.val, ' -> ', end ="")
            cur = cur.next
        print() # new line


