class Node():
    def __init__(self,x):
        self.data = x
        self.next = None
        
if __name__ == "__main__":
    myNode = Node(5)
    #print(myNode)
    #print(type(myNode))
    #print(id(myNode))
    print("Data in myNode is ",myNode.data)
    myNode1 = Node(15)
    #print(myNode1)
    print("Data in myNode is ",myNode1.data)
    myNode.next = myNode1 
    print("Address of myNode1 is ",myNode1)
    print("Address of myNode1 in myNode->next is ",myNode.next)
    print(myNode1.next)