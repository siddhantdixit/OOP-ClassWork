class Node:
    def __init__(self, value):
        self.value = value
        self.next = None

    def __del__(self):
        if hasattr(self, 'value'):
            del self.value
        if hasattr(self, 'next'):
            del self.next

class Stack():

    def __init__(self):
        self.head = Node("head")
        self.size = 0

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

    def pop(self):
        if self.isEmpty():
            raise Exception("Stack is Empty. Pop Failed!")
        remove = self.head.next
        self.head.next = self.head.next.next
        self.size -= 1
        remove.__del__()

    def __del__(self):
        self.head.__del__()


if __name__ == "__main__":
    stack = Stack()
    for i in range(1, 11):
        stack.push(i)
    print(f"Stack: {stack}")

    for _ in range(1, 5):
        stack.pop()

    print(f"Stack: {stack}")
    stack.__del__()
    print("Stack deleted")
