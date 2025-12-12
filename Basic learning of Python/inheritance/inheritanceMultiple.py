class Student:
    def setStudent(self, name, age):
        self.name = name
        self.age = age

    def getStudent(self):
        print("Student name is", self.name, "and age is", self.age)

class Marks:
    def setMarks(self, marks):
        self.marks = marks

    def getMarks(self):
        print("Marks obtained is", self.marks)

class Result(Student, Marks):
    def display(self):
        self.getStudent()
        self.getMarks()
        print("Result: ")
        if self.marks >= 40:
            print(self.name, "has passed")
        else:
            print(self.name, "has failed")

r = Result()
r.setStudent("Alice", 20)
r.setMarks(85)
r.display() 