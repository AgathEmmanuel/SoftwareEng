

package main


import "fmt"


type StackArray struct {
	top int
	size int
	pointer []int
}

func (sta *StackArray) CreateStack(sizeValue int) {
	sta.size=sizeValue
	sta.top=-1 //as initially the top will be pointing at location outside the array
	array:=make([]int,0,sta.size)
	fmt.Printf("Type array   %T  %v\n",&array,array)
	fmt.Printf("Type array   %T  %v %v\n",sta.pointer,sta.pointer,sta.pointer)
	sta.pointer=array
	fmt.Printf("Type array   %T  %v %v\n",sta.pointer,sta.pointer,sta.pointer)
}

func (sta *StackArray) IsEmpty() bool {
	return sta.top==-1
}

func (sta *StackArray) IsFull() bool {
	return sta.top==sta.size-1
}

func (sta *StackArray) PrintStack() {
	if sta.top!=-1 {
		for i:=sta.top;i>=0;i-- {
			fmt.Printf("%d ",sta.pointer[i]);
		}
	}
	fmt.Printf("\n")
}


func (sta *StackArray) PushToStack(value int) {
	if sta.top==sta.size-1 {
		fmt.Printf("Stack is overflowing \n")
		return
	}
	sta.top++
	sta.pointer=append(sta.pointer,value)
}





func main() {
        fmt.Println("helloo, this is StackArray")
	sta:=StackArray{}
	sta.CreateStack(5)
	fmt.Println(sta.IsEmpty())
	fmt.Println(sta.IsFull())
	fmt.Println()
	fmt.Printf("sta  %T %v\n",sta,sta)
	fmt.Printf("Type array   %T  %v\n",sta.size,sta.size)
	fmt.Printf("Type array   %T  %v\n",sta.top,sta.top)
	fmt.Printf("Type array   %T  %v\n",sta.pointer,sta.pointer)

	sta.PrintStack()
	sta.PushToStack(99)
	sta.PushToStack(99)
	sta.PushToStack(99)
	sta.PushToStack(99)
	sta.PushToStack(99)
	sta.PushToStack(99)
	fmt.Println(sta.pointer)
	fmt.Println(len(sta.pointer))
	fmt.Println(cap(sta.pointer))
	sta.PrintStack()
}

