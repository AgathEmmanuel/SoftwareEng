

package main


import "fmt"

type StackArray struct {
	top int
	array [5]int
}


func (sta *StackArray) IsEmpty() bool {
	return sta.top==-1
}

func (sta *StackArray) IsFull() bool {
	return sta.top==len(sta.array)-1
}

func (sta *StackArray) PrintStack() {
	if sta.top!=-1 {
		for i:=sta.top;i>=0;i-- {
			fmt.Printf("%d ",sta.array[i]);
		}
	}
	fmt.Printf("\n")
}


func (sta *StackArray) PushToStack(value int) int {
	if sta.top==len(sta.array)-1 {
		fmt.Printf("Stack is overflowing \n")
		return 0
	}
	sta.top++
	sta.array[sta.top]=value
	return 0
}

func (sta *StackArray) PopFromStack() int {
	if  sta.top==-1 {
		fmt.Printf("Stack is underflowing \n")
		return 0
	}
	x:=sta.array[sta.top]
        sta.array[sta.top]=0
	sta.top--
	fmt.Println(x)
	return x

}




func main() {


	sta:=StackArray{top:-1}
	fmt.Println(sta.array)
	sta.PrintStack()
	sta.PushToStack(20)
	sta.PushToStack(21)
	sta.PushToStack(22)
	sta.PushToStack(23)
	sta.PushToStack(24)
	sta.PrintStack()
	sta.PopFromStack()
	sta.PopFromStack()
	sta.PopFromStack()
	fmt.Println(sta.array)
	sta.PrintStack()
	fmt.Println(sta.array)
	fmt.Println(sta.IsEmpty())
	fmt.Println(sta.IsFull())

}

