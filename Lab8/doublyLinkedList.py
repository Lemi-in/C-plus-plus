class Node:
    def __init__(self, data):
        self.data = data
        self.prev = None
        self.next = None


class DoublyLinkedList:
    def __init__(self):
        self.head = None

    def traverse(self):
        curr = self.head
        while curr:
            print(curr.data, end=" <-> ")
            curr = curr.next
        print("None")


    def insert_at_beginning(self, data):
        new = Node(data)
        if self.head:
            new.next = self.head
            self.head.prev = new
        self.head = new

   
    def insert_at_end(self, data):
        new = Node(data)
        if not self.head:
            self.head = new
            return
        curr = self.head
        while curr.next:
            curr = curr.next
        curr.next = new
        new.prev = curr

    def insert_at_position(self, data, position):
        if position <= 1:
            self.insert_at_beginning(data)
            return
        new = Node(data)
        curr = self.head
        for _ in range(position - 2):
            if not curr.next:
                break
            curr = curr.next
        if not curr.next:  
            self.insert_at_end(data)
        else:
            new.next = curr.next
            curr.next.prev = new
            curr.next = new
            new.prev = curr

    def delete_at_beginning(self):
        if not self.head:
            print("List is empty.")
            return
        self.head = self.head.next
        if self.head:
            self.head.prev = None


    def delete_at_end(self):
        if not self.head:
            print("List is empty.")
            return
        curr = self.head
        while curr.next:
            curr = curr.next
        if curr.prev:
            curr.prev.next = None
        else:
            self.head = None

   
    def delete_at_position(self, position):
        if position <= 1:
            self.delete_at_beginning()
            return
        curr = self.head
        for _ in range(position - 1):
            if not curr:
                print("Position out of bounds.")
                return
            curr = curr.next
        if not curr:
            print("Position out of bounds.")
        elif not curr.next:
            self.delete_at_end()
        else:
            curr.prev.next = curr.next
            curr.next.prev = curr.prev


dll = DoublyLinkedList()
dll.insert_at_end(10)
dll.insert_at_end(20)
dll.insert_at_end(30)
dll.insert_at_beginning(5)
dll.insert_at_position(15, 3)
dll.traverse()  

dll.delete_at_beginning()
dll.traverse()  

dll.delete_at_end()
dll.traverse() 

dll.delete_at_position(2)
dll.traverse()  
