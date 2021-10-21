p = None
# print(id(p))

class Student:

    def __init__(self):
        self.name = "Siddhant"
        # print(id(self.name))
        self.roll = 123
        global p
        p = self.name
    
    def __del__(self):
        print("Deleted")
        del self.name
        del self.roll


obj = None
print(id(obj))
x = Student()
obj = x
x.__del__()
print(id(x))
print(id(obj))
# print("Program Completed")
# print(obj.name)
# print(obj.roll)


# y = Student()
# print(y.name,y.roll)