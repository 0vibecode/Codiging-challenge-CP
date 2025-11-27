class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

def traverseLinkList(head) :
    currentNode = head
    while currentNode:
        print(currentNode.data)
        currentNode = currentNode.next

    print('null')

def insertNode(head, newNode):
    currentNode = head
    if currentNode is None:
        currentNode = currentNode.next
    
    newNode.next = currentNode.next
    currentNode.next = newNode

    return head

node1 = Node(22)

print("current list:")
traverseLinkList(node1)

newNode = Node(33)
node1 = insertNode(node1, newNode)

print("new list:")
traverseLinkList(node1)