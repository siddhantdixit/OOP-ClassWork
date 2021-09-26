class Pref:
    def __init__(self):
        self.name = "siddhant"
        self.__surname = "Dixit"
    
    def _myfunc(self):
        print("hi bro")

    def getSurname(self):
        return self.__surname

    def surname(self):
        print("Surname -> ",self.__surname)

x = Pref()
# print(x.getSurname())
x.surname()