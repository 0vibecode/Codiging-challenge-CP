class Node():
    def __init__(self,x):
        self.data = x
        self.next = None
        
if __name__ == "__main__":
    myNode = Node(5)
    print(myNode)
    print(type(myNode))
    print(id(myNode))
    print("Data in myNode is ",myNode.data)