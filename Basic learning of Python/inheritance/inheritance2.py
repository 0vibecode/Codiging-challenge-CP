class Animal:
    def __init__(self, name, age):
        name
        age
        # self.name = name
        # self.age = age

    def setAnimal(self, name, age):
        self.name = name
        self.age = age

    def getAnimal(self):
        print("Animal name is", self.name, "and age is", self.age)

class Dog(Animal):
    def __init__(self, name, age):
        super().setAnimal(name, age)

    def sound(self):
        print(self.name, "is bark")

    

d = Dog("Bruno" , 5)
# d.info()
d.getAnimal()
d.sound()