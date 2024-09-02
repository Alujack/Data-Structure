class Node:
    def __init__(self, data=None):
        self.data = data
        self.next = None


class LinkedList:
    def __init__(self):
        self.head = None
        self.last = None

    def add(self, data):
        new_node = Node(data)
        if not self.head:
            self.head = new_node
            self.last = new_node
        else:
            self.last.next = new_node
            self.last = new_node

    def addFirst(self, data):
        new_node = Node(data)
        new_node.next = self.head
        self.head = new_node
        if self.last is None:
            self.last = new_node

    def addLast(self, data):
        self.add(data)

    def clear(self):
        self.head = None
        self.last = None

    def getFirst(self):
        if self.head:
            return self.head.data
        else:
            raise IndexError("getFirst from empty list")

    def getLast(self):
        if not self.last:
            raise IndexError("getLast from empty list")
        return self.last.data

    def peekFirst(self):
        return self.getFirst()

    def peekLast(self):
        return self.getLast()

    def __str__(self):
        nodes = []
        current = self.head
        while current:
            nodes.append(str(current.data))
            current = current.next
        return " -> ".join(nodes)


# Example usage:
ll = LinkedList()
ll.add(1)
ll.addFirst(0)
ll.addLast(2)
print("Linked List:", ll)
print("First Element:", ll.getFirst())
print("Last Element:", ll.getLast())
ll.clear()
print("Linked List after clear:", ll)
