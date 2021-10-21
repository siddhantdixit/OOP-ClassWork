class Rectangle:
    def __init__(self,length=0.0,breadth=0.0):
        self.length = float(length)
        self.breadth = float(breadth)

    def area(self)->str:
        return self.length * self.breadth


a = input("Enter the length  -> ")
b = input("Enter the breadth -> ")
rect = Rectangle(a,b)
ar = rect.area()
print("Area of Rectangle -> ",ar)