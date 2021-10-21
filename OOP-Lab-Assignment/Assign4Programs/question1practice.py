class Node:
    def __init__(self, value):
        self.value = value
        self.next = None

    def __del__(self):
        if hasattr(self, 'value'):
            del self.value
        if hasattr(self, 'next'):
            del self.next

class Stack(Node):
    usedNodes = []

    def __init__(self):
        self.head = Node("head")
        self.size = 0
        self.usedNodes.append(self.head)

    def __str__(self):
        cur = self.head.next
        out = ""
        while cur:
            out += str(cur.value) + " -> "
            cur = cur.next
        return out[:-3]

    def getSize(self):
        return self.size

    def isEmpty(self):
        return self.size == 0

    def peek(self):
        if self.isEmpty():
            raise Exception("Stack is Empty. Peek Failed!")
        return self.head.next.value

    def push(self, value):
        node = Node(value)
        node.next = self.head.next
        self.head.next = node
        self.size += 1
        self.usedNodes.append(node)

    def pop(self):
        if self.isEmpty():
            raise Exception("Stack is Empty. Pop Failed!")
        remove = self.head.next
        self.head.next = self.head.next.next
        self.size -= 1
        return remove.value

    def __del__(self):
        for i in range(0,len(self.usedNodes)):
            self.usedNodes[i].__del__()



if __name__ == "__main__":
    stack = Stack()
    for i in range(1, 11):
        stack.push(i)
    print(f"Stack: {stack}")

    print(stack.__sizeof__())

    for _ in range(1, 6):
        remove = stack.pop()
        print(f"Pop: {remove}")

    print(f"Stack: {stack}")
    print(f"Stack: {stack}")
    print(f"Stack: {stack}")
    print(f"Stack: {stack}")
    
    stack.__del__()

    print("Stack deleted")
    print("Stack deleted")
