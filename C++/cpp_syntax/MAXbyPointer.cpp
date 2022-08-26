/*A pointer is a variable that holds a memory address where a value lives. 
In C++, variables are passed to a function by value. When calling a function
 with an argument, a new variable is instantiated internally and 
 assigned the value passed in the function call.
Any modifications to the value inside the function are performed to this
 new variable; the variable that was invoked with the function call is unchanged.

 A function can be written to perform the same task but instead accept a pointer 
 as the argument. This lowers the memory footprint of the program. Unnecessary
  duplicate variables aren't created. The function can modify the variable's 
  value directly. Any modifications to the variable in the function affect the 
  variable here in this scope too.EXAMPLE:::::----
  void geeks() 
{ 
    int var = 20;  
      
    // declare pointer variable     
    int *ptr;  
      
    // note that data type of ptr and var must be same 
    ptr = &var;     
  
    // assign the address of a variable to a pointer 
    printf("Value at ptr = %p \n",ptr); 
    printf("Value at var = %d \n",var); 
    printf("Value at *ptr = %d \n", *ptr);      
} 
  
// Driver program 
int main() 
{ 
    geeks(); 
} 

Output:

Value at ptr = 0x7ffcb9e9ea4c
Value at var = 20
Value at *ptr = 20

  */

#include<bits\stdc++.h>
using namespace std;

int max_of_four(int f,int g,int h,int i);
void exchange(int *,int *);



int main()
{
    int f,g,h,i;
    scanf("%d %d %d %d",&f,&g,&h,&i);
    int ans=max_of_four(f,g,h,i);
    printf("%d",ans);
    return 0;
}

void exchange(int *a,int *b){
    int e;
    e=*a;
    *a=*b;
    *b=e;
}

int max_of_four(int f,int g,int h,int i){
    for(int x=1;x<=4;x++){
        if(f<g){exchange(&f,&g);}
        if(g<h){exchange(&g,&h);}
        if(h<i){exchange(&h,&i);}
    }
  
    return f;
        
    
}