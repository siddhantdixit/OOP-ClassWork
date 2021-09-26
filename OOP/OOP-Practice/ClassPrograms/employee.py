class Employee:

    no_of_Employee = 0
    increament = 1.5

    def __init__(self,name):
        self.name = name
        Employee.no_of_Employee+=1
    
    def __del__(self):
        Employee.no_of_Employee-=1

    @classmethod
    def change_increment(cls,inc):
        cls.increament = inc

a = Employee('siddhant')
print(a.increament)
Employee.change_increment(7)
print(a.increament)
print(Employee.increament)
b = Employee('karan')
c = Employee('kumar')
# print(Employee.no_of_Employee)
del b
# print(Employee.no_of_Employee)

