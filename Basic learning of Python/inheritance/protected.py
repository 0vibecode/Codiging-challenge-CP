class base:
    def __init__(self, name, age):
        self._name = name
        self._age = age
        
    def display(self):
        print("name of the boy is ", self._name, "and age is ", self._age)

class drived(base):
    def student(self):
        print("name of the child is ", self._name, "age is ", self._age)

obj = drived("Rahul", 15)
obj.student()
obj.display()