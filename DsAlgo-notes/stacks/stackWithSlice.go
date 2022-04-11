package main

import (
	"fmt"
)


// Stack implementation using Slice
type  StackSlice []string


// FOR STACKSLICE

func (s *StackSlice) IsEmpty() bool {
	return len(*s)==0
}

func (s *StackSlice) Push(value string) {
	*s = append(*s, value)
}



func (s *StackSlice) Pop() (string, bool) {
	if s.IsEmpty() {
		return "", false
	} else {
		index := len(*s) - 1
		element := (*s)[index]
		*s = (*s)[:index]
		return element,true
	}
}

func main() {
	var ss StackSlice
	ss.Push("hi")
	ss.Push("hii")
	ss.Push("hiii")

	for len(ss) > 0 {
		x,y:=ss.Pop()
		if y == true {
			fmt.Println(x)
		}
	}

}

