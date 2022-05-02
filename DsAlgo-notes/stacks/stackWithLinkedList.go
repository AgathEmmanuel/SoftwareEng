package main

import (
	"fmt"
)


type Node struct {
	data int
	next *Node
}

type StackLinkedList struct {
	head *Node
	size int
}



func (s *StackLinkedList) Size() int {
	return s.size
}

func (s *StackLinkedList) IsEmpty() bool {
	return s.size==0
}

func (s *StackLinkedList) Peek() int {
	if s.size==0 {
		fmt.Println("The stack is empty")
		return 0
	}
	return s.head.data
}


func (s *StackLinkedList) Push(value int) {
	s.head=&Node{data:value,next:s.head}
	s.size++

}

func (s *StackLinkedList) Pop() int {
	if s.size==0 {
		fmt.Println("The stack is empty")
	}
	value:=s.head.data
	s.head=s.head.next
	s.size--
	return value
}

func (s *StackLinkedList) Print() {
	tmp:=s.head
	fmt.Println("Printing Stack")
	for tmp!=nil {
		fmt.Print(tmp.data," ")
		tmp=tmp.next
	}
	fmt.Println()
}


func main() {
	fmt.Println("hello world,  this is a stack using   Linked list")
	var stk StackLinkedList
	stk.Print()
	stk.Push(1)
	stk.Push(2)
	stk.Push(3)
	stk.Push(4)
	stk.Push(6)
	stk.Print()
	fmt.Println(stk.Size())
	stk.Print()
	fmt.Println(stk.Pop())
	stk.Print()
	fmt.Println(stk.Peek())
	stk.Print()
	
}
