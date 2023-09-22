def Sum(num1, num2):
    Sum = num1 + num2
    print("The sum is:", Sum)

def Sub(num1, num2):
    Sub = num1 - num2
    print("The substraction is:", Sub)

def Mul(num1, num2):
    Mul = num1 * num2
    print("The multiple is:", Mul)

def Division(num1, num2):
    Division = num1 / num2
    print("The division is:", Division)

num1 = int(input("Input value of first number: "))
num2 = int(input("Input value of second number: "))
print("------------------------------------------")
Sum(num1, num2)
Sub(num1, num2)
Mul(num1, num2)
Division(num1, num2)
