
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



func main() {
	fmt.Println("helloo, this is linked list")

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

	lkl:=LinkedList{}
	lkl.head=&n1
	lkl.PrintLinkedList()


}

