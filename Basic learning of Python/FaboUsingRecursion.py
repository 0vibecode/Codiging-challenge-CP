class Fabo:
    def __init__(self):
        pass

    def fib(self, n):
        if n==0:
            return 0
        
        if n==1:
            return 1
        return self.fib(n-1)+self.fib(n-2)
    
fabo = Fabo()
print("Fabonaci series of given numbers is",fabo.fib(7))
# output is fib(6) + fib(5)
#             8 + 5 = 13