class Parent:
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
        # self._Parent__myfunc()
        print(self._Parent__myvar)

# c = Child()
# c.display()
# c.show()
# c._Parent__myfunc()
# x = Parent()

c = GrandChild()
c.display()
# c._Parent__myfunc()
