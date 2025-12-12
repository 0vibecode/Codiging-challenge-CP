class Animal:
    def __init__(self, name):
        self.name = name

    def info(self):
        print("Animal name is", self.name)

class Dog(Animal):
    def sound(self):
        print(self.name, "is bark")

d = Dog("Bruno")
d.sound()