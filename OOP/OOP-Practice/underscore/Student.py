class Student:

    def __init__(self, name):
        self.__name=name
        print("Constructor Ended")

    @property
    def name(self):
        return self.__name

    @name.setter   #property-name.setter decorator
    def name(self, value):
        self.__name = value
        print("Setting Value")


x = Student('sidd')
x.name = 'Bill'
print(x.name)