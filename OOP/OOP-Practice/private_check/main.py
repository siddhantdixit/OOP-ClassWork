class Program:
    _var = "hello"

class NewGram(Program):
    def __init__(self):
        print(self._var)


# NewGram()
# print(Program.__var)
print(Program._var)