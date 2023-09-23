class Student:
    def __init__(self, Name, Age):
        self.name = Name
        self.age = Age

Number_of_students = int(input("Input number of students: "))

student = []

for i in range(Number_of_students):
    Input_name = input("Input name: ")
    Input_age = int(input("Input age: "))
    print("-------------------------------------")
    student.append(Student(Input_name, Input_age))

for i in range(Number_of_students):
    print("-------------------------------------")
    print("Information of " + str(i + 1) + "st student:")
    print("Name:", student[i].name)
    print("Age:", student[i].age)
