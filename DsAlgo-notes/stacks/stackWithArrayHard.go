

package main


import "fmt"


type StackArray struct {
	top int
	size int
	pointer []int
	// we need a pointer to an array which will be created dynamically in c++
	// but in golang we can dynamically create array at run time so we go with slice
	// and this poiniter 
}

func (sta *StackArray) CreateStack(sizeValue int) {
	sta.size=sizeValue
	sta.top=-1 //as initially the top will be pointing at location outside the array
	array:=make([]int,0,sta.size)
	fmt.Println("sta size", sta.size)
	fmt.Printf("Type &array   %T  value %v\n",&array,array)
	fmt.Printf("Type array   %T  %v \n",sta.pointer,sta.pointer)
	fmt.Printf("cap %v  len %v \n",cap(sta.pointer),len(sta.pointer))
	fmt.Printf("cap %v  len %v \n",cap(array),len(array))
	sta.pointer=array
	fmt.Printf("Type array   %T  %v \n",sta.pointer,sta.pointer)
	fmt.Printf("cap %v  len %v \n",cap(sta.pointer),len(sta.pointer))
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

	// in our approach we are able to make use of slice only
	// and not create array directly of specific size
	// so what we do is atleast have control over the capacity of the slice
	rray:=make([]int,0,9)
	fmt.Println(rray)
	fmt.Println("len",len(rray))
	fmt.Println("cap",cap(rray))
	fmt.Printf("%T \n",rray)


        fmt.Println("helloo, this is StackArray")
	sta:=StackArray{}
	sta.CreateStack(5)
	fmt.Println(sta.IsEmpty())
	fmt.Println(sta.IsFull())
	fmt.Println("Checking if array or Slice is created")
	fmt.Printf("%T ",sta)
	fmt.Printf("%T ",sta.pointer)

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
	sta.PushToStack(93)
	sta.PushToStack(92)
	sta.PushToStack(01)
	fmt.Println("pointer",sta.pointer)
	fmt.Println(len(sta.pointer))
	fmt.Println(cap(sta.pointer))
	sta.PrintStack()

}

