
package main

import (
	"fmt"
)


type Node struct {
	data int
	next *Node
}


type LinkedList struct {
	head *Node
}

func (lkl *LinkedList) PrintLinkedList() {
	pointer:=lkl.head
	for {
		fmt.Println("node:", pointer)
		if pointer.next==nil {
			break
		}
		pointer=pointer.next
	}

}


func (lkl *LinkedList) InsertAtHead(value int) {
	// here the head of your linkedList is known
	n:=Node{data:value,next:lkl.head}
	lkl.head=&n
}


func (lkl *LinkedList) InsertAtTail(value int) {
	// first you need to find the tail
	// so we are using a pointer for doing that
	pointer:=lkl.head
	for pointer.next!=nil{
		pointer=pointer.next
	}
	// now pointer is pointing at the tail node
	n:=Node{data:value,next:nil}
	pointer.next=&n

}

func (lkl *LinkedList) FindIndex(value int) int {
	pointer:=lkl.head
	for i:=1;pointer.next!=nil;i++{
		if pointer.data==value {
			return i
		}
		pointer=pointer.next
	}
	return -1
}


func (lkl *LinkedList) DeleteValueAt(position int) {
	pointer:=lkl.head

	if position<=0 {
		fmt.Println("Position should be greater than 0")
	}

	if position==1 {
		lkl.head=pointer.next
		pointer=nil
		return
	}

	// we will keep track of previous node during iteration
	previousNode:=pointer
	for i:=2;pointer.next!=nil;i++{
		if i==position {
			break
		}
		previousNode=pointer
		pointer=pointer.next
	}

	if pointer==nil{
		return
	}

	// unlink the node from the linked list
	previousNode.next=pointer.next

	pointer=nil
}



func (lkl *LinkedList) DeleteValue(value int) {
	pointer:=lkl.head

	// check if head node is at the first position
	// then do the deletion
	if pointer!=nil {
		if pointer.data==value {
			lkl.head=pointer.next
			pointer=nil
			return
		}
	}


	previousNode:=pointer

	for pointer.next!=nil {
		if pointer.data==value {
			break
		}
		previousNode=pointer
		pointer=pointer.next
	}

	if pointer==nil {
		return
	}

	previousNode.next=pointer.next
	pointer=nil
}





func main() {
	fmt.Println("helloo, this is linked list")


/*
	n1:=Node{}
	n2:=Node{}
	n3:=Node{}
	n4:=Node{}
	n5:=Node{}
	n6:=Node{}

	n1.data=21
	n2.data=22
	n3.data=23
	n4.data=24
	n5.data=25
	n6.data=26

	n1.next=&n2
	n2.next=&n3
	n3.next=&n4
	n4.next=&n5
	n5.next=&n6

*/

	n6:=Node{data:36,next:nil}
	n5:=Node{data:35,next:&n6}
	n4:=Node{data:34,next:&n5}
	n3:=Node{data:33,next:&n4}
	n2:=Node{data:32,next:&n3}
	n1:=Node{data:31,next:&n2}




	lkl:=LinkedList{}
	lkl.head=&n1
	lkl.PrintLinkedList()

	fmt.Println()
	lkl.InsertAtHead(30)
	lkl.InsertAtHead(30)
	lkl.InsertAtHead(30)
	lkl.PrintLinkedList()

	fmt.Println()
	lkl.InsertAtTail(99)
	lkl.InsertAtTail(99)
	lkl.InsertAtTail(99)
	lkl.InsertAtTail(99)
	lkl.PrintLinkedList()

	fmt.Println()
	fmt.Println(lkl.FindIndex(30))
	fmt.Println(lkl.FindIndex(31))
	fmt.Println(lkl.FindIndex(34))
	fmt.Println(lkl.FindIndex(99))

	fmt.Println()
	lkl.DeleteValueAt(3)
	lkl.DeleteValueAt(4)
	lkl.DeleteValueAt(5)
	lkl.PrintLinkedList()

	fmt.Println()
	lkl.DeleteValue(36)
	lkl.DeleteValue(35)
	lkl.PrintLinkedList()

}

