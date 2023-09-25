class IBM:
    def __init__(self):
        self.weight = float(input("Input weight(kg): "))
        self.height = float(input("Input height(m): "))
    def data_process(self):
        self.idm_index = (self.weight)/((self.height)*(self.height))

        if (self.idm_index >= 40):
            print("Level 3 of obesity")
        elif (self.idm_index < 40) and (self.idm_index >= 35):
            print("Level 2 of obesity")
        elif (self.idm_index < 35) and (self.idm_index >= 30):
            print("Level 1 of obesity")
        elif (self.idm_index < 30) and (self.idm_index >= 25):
            print("Overweight")
        elif (self.idm_index < 25) and (self.idm_index >= 18.5):
            print("Normal")
        else:
            print("Underweight")

number_people = int(input("Input number of people: "))
print("========================================================")
ibm = []

for i in range(number_people):
    print("Input weight and height for the " + str(i + 1) + " person: ")
    ibm.append(IBM())
    print("-------------------------------------------------------")
print("=======================================================")
for i in range(number_people):
    print("Status of the " + str(i + 1) + " person is : ", end = "")
    ibm[i].data_process()
    print("-------------------------------------------------------")