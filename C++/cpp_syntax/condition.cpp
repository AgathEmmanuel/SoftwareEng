#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    /* Typing “cin.ignore(numeric_limits::max(),’\n’);” after the “cin” statement
     discards everything in the input stream including the newline.A temporary storage 
     area is called buffer. All standard input and output devices contain an input and 
     output buffer. In standard C/C++, streams are buffered, for example in the case of 
     standard input, when we press the key on keyboard, it isn’t sent to your program,
      rather it is buffered by operating system till the time is allotted to that program. 
      On various occasions you may need to clear the unwanted buffer so as to get the next
       input in the desired container and not in the buffer of previous variable */

    if(n==1){cout<<"one";}
    else if(n==2){cout<<"two";}
    else if(n==3){cout<<"three";}
    else if(n==4){cout<<"four";}
    else if(n==5){cout<<"five";}
    else if(n==6){cout<<"six";}
    else if(n==7){cout<<"seven";}
    else if(n==8){cout<<"eight";}
    else if(n==9){cout<<"nine";}
    else{cout<<"Greater than 9";}

    return 0;
}

/*

Ignore is exactly what the name implies.
It doesn't "throw away" something you don't need instead, 
it ignores the amount of characters you specify when you call it, 
up to the char you specify as a breakpoint.
It works with both input and output buffers.

Essentially, for std::cin statements you use ignore before you do
 a getline call, because when a user inputs something with std::cin,
  they hit enter and a '\n' char gets into the cin buffer.
   Then if you use getline, it gets the newline char instead of 
   the string you want. So you do a std::cin.ignore(1000,'\n') and 
   that should clear the buffer up to the string that you want.
    (The 1000 is put there to skip over a specific amount of chars 
     the specified break point, in this case, the \n newline character.)
*/