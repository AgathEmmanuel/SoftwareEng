package main

import "fmt"

// https://medium.com/swlh/golang-tips-why-pointers-to-slices-are-useful-and-how-ignoring-them-can-lead-to-tricky-bugs-cac90f72e77b


/*

    Why in many BuiltIn function and libraries it is common to see as arguments pointers to slices, aren’t slices always passed by reference?

    For example, in the implementation of the api-machinery of Kubernetes we can see a function with the following signature:

    func Convert_Slice_string_To_string(input *[]string, out *string, s conversion.Scope) error;:

    , and in the example of the priority queues, we can find again something similar:

    func (pq *PriorityQueue) Pop() interface{};

        Aren’t slices already pointers to the underlying data?



Passing a slice to a function by value, all the fields are copied and only the data can be modified and accessed from outside through the copy of the pointer.

However, keep in mind that if the pointer is overwritten or modified (due to a copy, an assign, or an append) no change will be visible outside the function, moreover, no change of length or capacity will be visible to the initial function.


When we pass a slice to a function as an argument the values of the slice are passed by reference (since we pass a copy of the pointer), but all the metadata describing the slice itself are just copies.


We can modify the data of the slice in the literal function, however if the pointer to the data changes for any reason or the slice metadata is modified, the change can be partially or no visible at all to the outside function

For example, if the slice gets allocated again, a new location of the memory is used; even if the values are the same, the slice points to a new location and therefore no modification of the values will be visible ouside, since the slices are pointing to two different localtions (the pointer in the slice copy got overwritten).



Therefore make sure to keep in mind that you can pass a slice by value if you want to modify merely the values of the elements, not their number or position, otherwise weird bugs will arise from time to time.


*/



func main() {
    slice:= []string{"a","a"}
    func(slice []string){
        slice=append(slice,"cc")
        slice[0]="s";
        slice[1]="s";
        fmt.Println(slice)
    }(slice)
    fmt.Println(slice)
    fmt.Printf("%T \n",slice)


    slicep:= []string{"a","a"}
    func(slicep *[]string){
        *slicep=append(*slicep,"cc")
        (*slicep)[0]="sp";
        (*slicep)[1]="sp";
        fmt.Println(*slicep)
    }(&slicep)
    fmt.Println(slicep)
    fmt.Printf("%T \n",slicep)


}
