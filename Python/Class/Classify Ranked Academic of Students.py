class Student:
    def __init__(self):
        self.math = float(input("Input math score: "))
        self.chemistry = float(input("Input chemistry score: "))
        self.physics = float(input("Input physics score: "))
    
    def score_calculation(self):
        self.average = (self.math + self.chemistry + self.physics)/3
        if ((self.average >= 8) and (self.average <= 10)):
            print("Excellent")
        elif ((self.average < 8) and (self.average >= 6.5)):
            print("Good")
        elif ((self.average < 6.5) and (self.average >= 5)):
            print("Avergae")
        elif ((self.average < 5) and (self.average >= 0)):
            print("Bad")
        else:
            print("Input error!!")

student_list = []
number_of_student = int(input("Input number of students: "))

for i in range(number_of_student):
    print("----------------------------------------------")
    print("Input information of the " + str(i + 1) + "st student:")
    student_list.append(Student())
    
print("==============================================")   
for i in range(number_of_student):
    print("The ranked academic of the " + str(i + 1) + "st student is:")
    student_list[i].score_calculation()
    print("----------------------------------------------")







