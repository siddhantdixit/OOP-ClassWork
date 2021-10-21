from program import Parent

class SubChild(Parent):
    def __init__(self):
        print(self._Parent__myvar)

SubChild()