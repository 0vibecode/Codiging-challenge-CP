class IsEmptyError(Exception):
    pass

class Stack:
    class Node:
        def __init__(self, element, _next):
            self.element = element
            self._next = _next
    def __init__(self):
        self.head = None
        self.size = 0

    def __len__(self):
        return print('length of stack is',self.size)
    
    def is_empty(self):
        return self.size == 0
    
    def pop(self):
        if self.is_empty():
            raise IsEmptyError('this stack is empty')
        
        result = self.head.element
        self.head = self.head._next
        self.size -= 1
        return print('Poped value is ',result)
    
    def push(self, element):
        self.head = self.Node(element, self.head)
        self.size += 1
        return print("size of the stack is",self.size)
    
    def top(self):
        if self.is_empty():
            raise ImportError('stack is empty')
        return print("Top of the stack is ", self.head.element)

node = Stack()
node.push(12)
node.push(25)
node.push(52)
node.is_empty()
node.pop()
node.top()

