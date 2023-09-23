class Student:
    def __init__(self, Name, Age):
        self.name = Name
        self.age = Age

Input_name = input("Input name: ")
Input_age = int(input("Input age: "))

student = Student(Input_name, Input_age)
print("-----------------------------")
print("Information of student:")
print(student.name)
print(student.age)
