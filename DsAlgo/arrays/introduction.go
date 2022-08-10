

package main

import "fmt"

func main() {
	

	// if an array does not initialized explicitly, then the default value of this array is 0

	var myarr[3]string


	myarr[0]="aa"
	myarr[1]="aa"
	myarr[2]="aa"


	fmt.Println("Elements of array:")
	fmt.Println(myarr[0], " is at location ",&myarr[0])
	fmt.Println(myarr[1], " is at location ",&myarr[1])
	fmt.Println(myarr[2], " is at location ",&myarr[2])

	myarra:=[...]int{1,2,3,4,6,1,2,3}
	for i:=0;i<len(myarra);i++ {
		fmt.Println(myarra[i],"is at location ",&myarra[i])
	}




	myarr0:=[...]int{1,2,3}
	for i:=0;i<len(myarr0);i++ {
		fmt.Println(myarr0[i])
		fmt.Printf("%d\n is at location %d \n",myarr0[i],&myarr0[i])
	}

	myarr00:=[...]int{1,2,4}
	// we can directly compare two arrays of same type using == operator

	fmt.Println(myarr0==myarr00)

	myarr1:=[3]string{"abc","de","fg"}
	
	fmt.Println("elements directly define")

	for i:=0;i<3;i++{
		fmt.Println(myarr1[i]," is at location ",&myarr1[i])
	}


	var myarr2[2][2] int
	myarr2[0][0]=100
	myarr2[0][1]=200
	myarr2[1][0]=300
	myarr2[1][1]=400
	fmt.Println("Elements multidimensional")
	for i:=0;i<2;i++{
		for j:=0;j<2;j++{
			fmt.Println(myarr2[i][j])
		}
	}
	
	myarr3:=[2][2]string{{"aa","bb"},{"cc","dd"}}

	fmt.Println("Elements multidimensional directly define")
	for i:=0;i<2;i++{
		for j:=0;j<2;j++{
			fmt.Println(myarr3[i][j])
		}
	}




}
