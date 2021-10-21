class Car:
    model = None
    speed = None
    engine = None

    def setModel(self,model):
        self.model = model
    
    def setSpeed(self,speed):
        self.speed = speed

    def setEngine(self,engine):
        self.engine = engine
    
x = Car()
x.setModel('BMW')
x.setSpeed(100)
x.setEngine("V8")

print(x.model)
print(x.speed)
print(x.engine)
