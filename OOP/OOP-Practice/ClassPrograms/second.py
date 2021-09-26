class Employee:

    no_of_Employee = 0
    increament = 1.5

    def __init__(self, name):
        self.name = name
        Employee.no_of_Employee += 1

    def __del__(self):
        Employee.no_of_Employee -= 1

    @classmethod
    def change_increment(cls, inc):
        cls.increament = inc

    @staticmethod
    def change_increamentStat(myinc):
        Employee.increament = myinc


a = Employee('siddhant')
b = Employee('karan')
print(a.increament)
a.change_increamentStat(7)
# a.change_increment(8)
print(a.increament)
print(b.increament)
print(Employee.increament)
b = Employee('karan')
c = Employee('kumar')
# print(Employee.no_of_Employee)
del b
# print(Employee.no_of_Employee)
