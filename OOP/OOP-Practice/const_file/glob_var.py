class Student:
    
    def __init__(self):
        self.__myvar = "adsf"

    def getMyvar(self):
        return self.__myvar


x = Student()
print(x.getMyvar())