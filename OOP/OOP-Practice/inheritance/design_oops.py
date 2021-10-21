class DesignOops:
    
    def __init__(self):
        print("Hello")

class NewOOps(DesignOops):

    def __init__(self):
        print("OK")
        super().__init__()

NewOOps()