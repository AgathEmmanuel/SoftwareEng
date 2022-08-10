package main

import (
	"fmt"
	"errors"
)

type Queue struct {
	Elements []int
}

func (qu *Queue) Enqueue(element int) {
	// add items to our queue
	qu.Elements = append(qu.Elements, element)
}

func (qu *Queue) Dequeue() int {
	// returns the first element and then update the int Elements slice
	// so that the second element in the queue is now the first  
	if qu.IsEmpty() {
		return 0
	}

	index:=0
	value:=qu.Elements[index]
	qu.Elements=append(qu.Elements[:index],qu.Elements[index+1:]...)
	fmt.Println("deque",qu.Elements)

	return value
}


func (qu *Queue) Peek() (int, error) {
	if qu.IsEmpty() {
		return 0, errors.New("empty queue")
	}
	return qu.Elements[0], nil
}

func (qu *Queue) IsEmpty() bool {
	return len(qu.Elements) == 0
}

func (qu *Queue) GetLength() int {
	return len(qu.Elements)
}



func main() {
	fmt.Println("Hello Queue")

	qu := Queue{}
	fmt.Println(qu)
	fmt.Printf("%T \n",qu)
	qu.Enqueue(11)
	qu.Enqueue(12)
	qu.Enqueue(13)
	qu.Enqueue(14)
	qu.Enqueue(15)
	qu.Enqueue(16)
	fmt.Println(qu.GetLength())
	fmt.Println(qu.IsEmpty())
	fmt.Println(qu.Peek())
	fmt.Println("qu",qu)
	fmt.Println("helloo.")
	fmt.Println(qu.Elements[0:1])
	fmt.Println(qu.Elements[1:2])
	fmt.Println(qu.Elements[3:6])
	fmt.Println("hi..")
	fmt.Println("[4:]",qu.Elements[4:])
	fmt.Println("[0:]",qu.Elements[0:])
	fmt.Println("[1:]",qu.Elements[1:])
	fmt.Println(qu)

	fmt.Println(qu.Dequeue())
	fmt.Println(qu.Dequeue())
	fmt.Println(qu.Dequeue())
	fmt.Println(qu.Dequeue())
	fmt.Println(qu.Dequeue())
	fmt.Println(qu.Dequeue())
	fmt.Println(qu.Dequeue())
	fmt.Println(qu.Dequeue())
	fmt.Println(qu.Dequeue())
	fmt.Println(qu)

	qu.Enqueue(16)
	qu.Enqueue(16)
	qu.Enqueue(16)
	fmt.Println(qu)

	var vals [20]int
	for i := 0; i < 5; i++ {
	   vals[i] = i * i
	}
	fmt.Println(vals)
	fmt.Println(len(vals))
	fmt.Printf("%T \n",vals)

	var valslice []int
	fmt.Printf("%T \n",valslice)
}
