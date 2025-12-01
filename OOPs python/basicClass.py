class human:
    def __init__(self, name, gender):
        self.name = name
        self.gender = gender

    def getterName(self):
        return self.name
    
    def setterName(self, val):
        self.name = val

obj = human("abc","male")

print(obj.name)
print(obj.gender)

obj.setterName("XYZ")
# obj.getterName()
newName = obj.getterName()
print(newName)
