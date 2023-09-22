def Input():
    a = int(input("Input value: "))
    b = int(input("Input value: "))
    c = int(input("Input value: "))
    yield a
    yield b
    yield c

if __name__ == "__main__":
    for i in Input():
        print(i)
