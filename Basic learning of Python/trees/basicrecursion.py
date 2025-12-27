class Node:
    # def __init__(self):
    #     pass
    def msg1(self, val):
        print("first value is", val)
        val += 1
        self.msg2(val)
    def msg2(self, val):
        print("first value is", val)
        val += 1
        self.msg3(val)
    def msg3(self, val):
        print("first value is", val)
        val += 1
        self.msg4(val)
    def msg4(self, val):
        print("first value is", val)
        val += 1
# we use recursion here to solve same problem 
# Recursion method always use stack and it is slower. it is top down approuch 
    def msgRc(self, val):
        if val==10:
            return
        else:
            print("first value is", val)
            val +=1
            self.msgRc(val)

obj = Node()
# obj.msg1(20)
obj.msgRc(2)