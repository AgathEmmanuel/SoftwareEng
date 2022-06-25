package main

import (
	"fmt"
)

func main() {
	
	m:= map[string]int{"a":1}
	fmt.Println(m)
	fmt.Println(m["a"])
	m["a"]=3
	fmt.Println(m)
	fmt.Println(m["a"])
	delete(m,"a")
	fmt.Println(m)
	fmt.Println(m["a"])


}


