class Parent:
    location = "Python"
    __myvar = "hello"
    def show(self):
        print("Parent method")

    def __myfunc(self):
        print("Private Function")

class Child(Parent):
    def display(self):
        print("Child method")

class GrandChild(Child):
    def display(self):
        print("GrandChild method")
        print(self._Parent__myvar)


c = GrandChild()
c.display()