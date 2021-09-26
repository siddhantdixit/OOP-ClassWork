class Class1:
    def m(self):
        print("In Class1")
       
class Class2(Class1):
    def m(self):
        print("In Class2")
 
class Class3(Class1):
    def m(self):
         print("In Class3")    
     
class Class4(Class3, Class2):
    # def m(self):
    #     print("In Class4")  
    def show(self):
        print("af")

obj = Class4()
obj.m()
 
# Class2.m(obj)
# Class3.m(obj)
# Class1.m(obj)