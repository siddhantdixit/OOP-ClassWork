class Point:
    def __init__(self,val):
        self.val = val
    
    def __add__(self,b):
        return self.val + b.val

    def __str__(self):
        return self.val

x = Point(2)
y = Point(3)
print(x+y)