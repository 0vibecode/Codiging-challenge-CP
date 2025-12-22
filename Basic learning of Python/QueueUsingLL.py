class IsEmptyError(Exception):
    pass

class Queue:
    # make a samply node for futur creation
    class Node:   
        # init function for node class
        def __init__(self, element, next):
            self.element = element
            self.next = next
    # init function for Queue class
    def __init__(self):
        self.head = None
        self.tail = None
        self.size = 0

    def Is_emplty(self):
        return self.size==0
    
    def _len(self):
        return print('length of queue is',self.size)
    
    def enqueue(self, element):
        # this refer to the Node class
        new = self.Node(element,None)
        if self.Is_emplty():
            self.head = new
        else:
            self.tail.next = new
        self.tail = new
        self.size += 1

    def dequeue(self):
        if self.Is_emplty():
            raise IsEmptyError('this is empty')
        result = self.head.element
        self.head = self.head.next
        self.size -= 1
        if self.Is_emplty():
            self.tail = None
        return result
    
    def first(self):
        if self.Is_emplty():
            raise ImportError("this is Empty")
        return print("first element is ", self.head.element)
    
node = Queue()
node.enqueue(90)
node.enqueue(80)
node.enqueue(40)
node.enqueue(70)
node.dequeue()
node.first()
node._len()