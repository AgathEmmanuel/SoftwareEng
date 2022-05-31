

package main


import "fmt"

type StackArray struct {
	top int
	size int
	sliceptr *[]int
	//sliceptr *int
}


func (sta *StackArray) CreateStack(sizeValue int) {
	sta.size=sizeValue
	sta.top=-1 //as initially the top will be pointing at location outside the array
	//sliceArray:=make([]int,0,sta.size)
	//fmt.Printf("cap %v  len %v \n",cap(sliceArray),len(sliceArray))
	//sta.sliceptr=&sliceArray
	//sta.sliceptr=new([sta.size]int)[0:sta.size]
	ptr:=new([2]int)[0:2]
	fmt.Printf("typeeee  %v \n",ptr)
	fmt.Printf("typeeee  %v \n",&ptr)
	sta.sliceptr=&new([2]int)[0:2]
	//sta.sliceptr=&ptr
	//s:=new([2]int)[0:2]
	//fmt.Printf("typeeee  %T \n",s)
	//aa:=[...]int{}
	//fmt.Println(aa, len(aa))
	//fmt.Printf("typeeee  %T",aa)
	fmt.Printf("Type array   %T  %v %p %p %p\n",sta.sliceptr,sta.sliceptr,sta.sliceptr)
	//fmt.Printf("cap %v  len %v \n",cap(&(sta.sliceptr)),len(&(sta.sliceptr)))
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
			//fmt.Printf("%d ",sta.sliceptr[i]);
		}
	}
	fmt.Printf("\n")
}


func (sta *StackArray) PushToStack(value int) int {
	if sta.top==sta.size-1 {
		fmt.Printf("Stack is overflowing \n")
		return 0
	}
	sta.top++
	//sta.sliceptr[sta.top]=value
	return 0
}

func (sta *StackArray) PopFromStack() int {
	if  sta.top==-1 {
		fmt.Printf("Stack is underflowing \n")
		return 0
	}
	//x:=sta.sliceptr[sta.top]
        //sta.sliceptr[sta.top]=0
	sta.top--
	//fmt.Println(x)
	return 0

}




func main() {


	sta:=StackArray{}
	sta.CreateStack(5)
	fmt.Println(sta.sliceptr)
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
	fmt.Println(sta.sliceptr)
	sta.PrintStack()
	fmt.Println(sta.sliceptr)
	fmt.Println(sta.IsEmpty())
	fmt.Println(sta.IsFull())


}

