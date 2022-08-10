class Node:
    def __init__(self,data):
        self.data=data
        self.next=None

class Linkedlist:
    def __init__(self):
        self.head=None
    def printLinkedList(self):
        pointer=self.head
        while (pointer):
            print(pointer.data)
            pointer=pointer.next


    def push(self,new_data):
        n_new=Node(new_data)
        n_first=self.head
        n_new.next=n_first
        n_first=n_new

    def insertAfter(self,n_prev,new_data):
        if n_prev=='None':
            print("The given previous node must be in linked list")
            return
        n_new=Node(new_data)
        n_new.next=n_prev.next
        n_prev.next=n_new
    
    def append(self,new_data):
        n_new=Node(new_data)
        if self.head is None:
            self.head=n_new
            return
        
        n_last=self.head
        while (n_last.next):
            n_last=n_last.next
        n_last.next=n_new
        
        # This method can also be optimized to work in O(1) 
        # by keeping an extra pointer to the tail of the linked list

        
    def deleteNodeIterative(self,key):

        n_head=self.head

        # key not present in linked list
        if(n_head==None):
            return

        # key is present at the first node
        if(n_head!=None):
            if(n_head.data==key):
                self.head=n_head.next
                n_head=None
                return

        # search for key to be deleted
        # keep track of previous node
        while(n_head!=None):
            if(n_head.data==key):
                break
            n_prev=n_head
            n_head=n_head.next
        # link previous node to node after the node having key
        n_prev.next=n_head.next
        # change to node have the key to None
        n_head=None

        

        


if __name__=='__main__':

    n1=Node(8)
    n2=Node(9)
    n3=Node(2)
    n4=Node(3)
    n5=Node(23)
    n6=Node(13)

    n1.next=n2
    n2.next=n3
    n3.next=n4
    n4.next=n5
    n5.next=n6

    lklist=Linkedlist()
    lklist.head=n1
    lklist.printLinkedList()

    print()
    lklist.push(999)
    lklist.printLinkedList()
    

    print()
    lklist.insertAfter(n4,888)
    lklist.printLinkedList()

    print()
    lklist.insertAfter(n1,888)
    lklist.insertAfter(n1,888)
    lklist.insertAfter(n1,888)
    lklist.insertAfter(n1,888)
    lklist.insertAfter(n1,888)
    lklist.printLinkedList()

    print()
    lklist.append(777)
    lklist.printLinkedList()

    print()
    lklist.deleteNodeIterative(9)
    lklist.printLinkedList()
