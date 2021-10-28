# Brain Storming

class Person:
    def __init__(self):
        self.name = "Siddhant"
        self.roll = 123

    # def  __del__(self):
    #     print("Deleting Elements...")



a = Person()
print(id(a.name))
x = a.name
print(id(x))
b = a
c = a

del b
del c
del a
print(x)
print("END OF MY PROGRAM")