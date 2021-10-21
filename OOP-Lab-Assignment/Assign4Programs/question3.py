class Node:
     
    def __init__(self, data):
        self.data = data
        self.next = None

    def __del__(self):
        if hasattr(self,'data'):
            del self.data
        if hasattr(self,'next'):
            del self.next
        
 
class Queue:
     
    def __init__(self):
        self.front = self.rear = None
 
    def isEmpty(self):
        return self.front == None
     

    def enqueue(self, item):
        temp = Node(item)
        if self.rear == None:
            self.front = self.rear = temp
            return
        self.rear.next = temp
        self.rear = temp
 

    def dequeue(self):
        if self.isEmpty():
            return
        temp = self.front
        self.front = temp.next
        temp.__del__()
        if(self.front == None):
            self.rear = None

    def __str__(self):
        if self.isEmpty():
            return "Empty"
        out = ""
        tmp = self.front
        while(tmp!=self.rear):
            out+=str(tmp.data)+" -> "
            tmp = tmp.next
        out+=str(self.rear.data)
        return out


if __name__== '__main__':
    q = Queue()
    q.enqueue(10)
    q.enqueue(20)
    q.enqueue(5)
    q.enqueue(7)
    q.dequeue()
    print(f"Queue: {q}")

    q.dequeue()
    q.enqueue(1)
    q.dequeue()
    print(f"Queue: {q}")


    q.enqueue(3)
    q.enqueue(4)
    print(f"Queue: {q}")
