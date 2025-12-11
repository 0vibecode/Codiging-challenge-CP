class Node:
    def __init__(self, x):
        self.data = x
        self.next = None


def main():
    myNode = Node(5)
    print("Data in myNode is", myNode.data)
    myNode1 = Node(15)
    print("Data in myNode1 is", myNode1.data)
    myNode.next = myNode1
    print("Address of myNode1 is", myNode1)
    print("Address of myNode1 in myNode->next is", myNode.next)
    print(myNode1.next)


if __name__ == "__main__":
    main()
