class Node:
    def __init__(self, value):
        self.value = value
        self.next = None

class Stack:
    
    def __init__(self):
        self.top = None
        self.count = 0

    def push(self, value):
        node = Node(value)

        if(self.top == None):
            self.top = node

        else:
            node.next = self.top
            self.top = node

        self.count += 1


    def pop(self):
        if(self.top == None):
            return 'Stack is Empty'
        
        else:
            temp = self.top
            self.top = self.top.next

            del temp
            self.count -= 1
            return 
        
    def isEmpty(self):
        if(self.top==None):
            return print(self.top)
        
        else:
            return print('Stack is not Empty')

    def size(self):
        return print(self.count)

    def traverse(self):
        if(self.top == None):
            print('stack is Empty')

        else:
            temp = self.top

            while(temp):
                print(temp.value)
                temp = temp.next


stack = Stack()
stack.isEmpty()
stack.push(10)
stack.push(11)
stack.push(12)
stack.push(13)
stack.push(14)
stack.push(15)
stack.traverse()
print('new stack after pop')
stack.pop()
stack.traverse()
stack.size()
stack.isEmpty()


    