//to print a welcome text in a separate line
/*
#include <iostream>
using namespace std;
 
int main()
{
    cout << "\n\n Print a welcome text in a separate line :\n";
	cout << "----------------------------------------------\n";
    cout << " Welcome to \n" ;
    cout << " w3resource.com "<<endl ;
    
}

*/
//to print the sum of two numbers

/*

#include <iostream>
using namespace std;
 
int main()
{
    cout << "\n\n Print the sum of two numbers :\n";
	cout << "-----------------------------------\n";
    cout << " The sum of 29 and 30 is : "<< 29+30 <<"\n\n" ;
}

*/

//to find Size of fundamental data types. 

/*
#include <iostream>
using namespace std;
 
int main() 
{
    cout << "\n\n Find Size of fundamental data types :\n";
	cout << "------------------------------------------\n";
   cout << " The sizeof(char) is :          " << sizeof(char) << " bytes \n" ;
   cout << " The sizeof(short) is :         " << sizeof(short) << " bytes \n" ;
   cout << " The sizeof(int) is :           " << sizeof(int) << " bytes \n" ;
   cout << " The sizeof(long) is :          " << sizeof(long) << " bytes \n" ;
   cout << " The sizeof(long long) is :     " << sizeof(long long) << " bytes \n";
   cout << " The sizeof(float) is :         " << sizeof(float) << " bytes \n" ;
   cout << " The sizeof(double) is :        " << sizeof(double) << " bytes \n";
   cout << " The sizeof(long double) is :   " << sizeof(long double) << " bytes \n";
   cout << " The sizeof(bool) is :          " << sizeof(bool) << " bytes \n\n";
   return 0;
}

*/

//to check the upper and lower limits of integer. 


/*
#include <iostream>
#include <climits>   // integer limits in header file
using namespace std;
 
int main() 
{
    cout << "\n\n Check the upper and lower limits of integer :\n";
	cout << "--------------------------------------------------\n";
	cout << " The maximum limit of int data type :                  " << INT_MAX << endl;
	cout << " The minimum limit of int data type :                  " << INT_MIN << endl;
	cout << " The maximum limit of unsigned int data type :         " << UINT_MAX << endl;
	cout << " The maximum limit of long long data type :            " << LLONG_MAX << endl;
	cout << " The minimum limit of long long data type :             " << LLONG_MIN << endl;
	cout << " The maximum limit of unsigned long long data type :   " << ULLONG_MAX << endl;
	cout << " The Bits contain in char data type :                  " << CHAR_BIT << endl;
	cout << " The maximum limit of char data type :                 " << CHAR_MAX << endl;
	cout << " The minimum limit of char data type :                 " << CHAR_MIN << endl;
	cout << " The maximum limit of signed char data type :          " << SCHAR_MAX << endl;
	cout << " The minimum limit of signed char data type :          " << SCHAR_MIN << endl;
	cout << " The maximum limit of unsigned char data type :        " << UCHAR_MAX << endl;
	cout << " The minimum limit of short data type :                " << SHRT_MIN << endl;
    cout << " The maximum limit of short data type :                " << SHRT_MAX << endl;
    cout << " The maximum limit of unsigned short data type :       " << USHRT_MAX << endl;
   cout << endl;
   return 0;
}
*/

//to check whether the primitive values crossing the limits or not.

/*
#include <iostream>
using namespace std;
 
int main() 
{
    cout << "\n\n Check whether the primitive values crossing the limits or not :\n";
	cout << "--------------------------------------------------------------------\n";
   char gender = 'F';             // char is single-quoted
   bool isEmployed = true;         // true(non-zero) or false(0)
   unsigned short numOfsons = 2; // [0, 255]
   short yearOfAppt = 2009;      // [-32767, 32768]
   unsigned int YearlyPackage = 1500000;   // [0, 4294967295]
   double height = 79.48;       // With fractional part
   float gpa = 4.69f;           // Need suffix 'f' for float
   long totalDrawan = 12047235L;     // Suffix 'L' for long
   long long balance = 995324987LL;  // Need suffix 'LL' for long long int  

   cout << " The Gender is : " << gender << endl;
   cout << " Is she married? : " << isEmployed << endl;
   cout << " Number of sons she has : " << numOfsons << endl;
   cout << " Year of her appointment : " << yearOfAppt << endl;
   cout << " Salary for a year : " << YearlyPackage << endl;
   cout << " Height is : " << height << endl;
   cout << " GPA is " << gpa << endl;
   cout << " Salary drawn upto : " << totalDrawan << endl;
   cout << " Balance till : " << balance << endl;   
   return 0;
}

*/

//to display various type or arithmetic operation using mixed data type. 


/*
#include <iostream>
#include <iomanip>   // formatting floating-point numbers with 1 decimal place
using namespace std;
 
int main() 
{
   int m1 = 5, m2 = 7;
   double d1 = 3.7, d2 = 8.0;
   
    cout << "\n\n Display arithmetic operations with mixed data type :\n";
	cout << "---------------------------------------------------------\n";
   cout << fixed << setprecision(1);  
 
   cout <<" "<< m1 << " + " << m2 << " = " << m1+m2 << endl;  
   cout <<" "<< d1 << " + " << d2 << " = " << d1+d2 << endl;  
   cout <<" "<< m1 << " + " << d2 << " = " << m1+d2 << endl;  
 
   cout <<" "<< m1 << " - " << m2 << " = " << m1-m2 << endl;  
   cout <<" "<< d1 << " - " << d2 << " = " << d1-d2 << endl;  
   cout <<" "<< m1 << " - " << d2 << " = " << m1-d2 << endl;  
 
   cout <<" "<< m1 << " * " << m2 << " = " << m1*m2 << endl; 
   cout <<" "<< d1 << " * " << d2 << " = " << d1*d2 << endl;  
   cout <<" "<< m1 << " * " << d2 << " = " << m1*d2 << endl;  
 
   cout <<" "<< m1 << " / " << m2 << " = " << m1/m2 << endl;  
   cout <<" "<< d1 << " / " << d2 << " = " << d1/d2 << endl;  
   cout <<" "<< m1 << " / " << d2 << " = " << m1/d2 << endl;  
   cout << endl;
   return 0;
}

*/

//to display the operation of pre and post increment and decrement.


#include <iostream>
using namespace std;
 
int main() 
{
   int num = 57;      
    cout << "\n\n Display the operation of pre and post increment and decrement :\n";
	cout << "--------------------------------------------------------------------\n";    
   cout <<" The number is : " << num << endl; 
   num++;               // increase by 1 (post-increment)
   cout <<" After post increment by 1 the number is : " << num << endl; 
   ++num;               // increase by 1 (pre-increment)
   cout <<" After pre increment by 1 the number is : " << num << endl; 
   num = num + 1;  // num is now increased by 1.
   cout <<" After increasing by 1 the number is : " << num << endl; // 79
   num--;               // decrease by 1 (post-decrement)
   cout <<" After post decrement by 1 the number is : " << num << endl; 
   --num;               // decrease by 1 (pre-decrement)
   cout <<" After pre decrement by 1 the number is : " << num << endl; 
   num = num - 1; // num is now decreased by 1.
   cout <<" After decreasing by 1 the number is : " << num << endl;
   cout << endl;
   return 0;
}

to formatting the output

#include <iostream>
#include <iomanip>    // Needed to do formatted I/O
using namespace std;
 
int main() 
{
    cout << "\n\n Formatting the output :\n";
	cout << "----------------------------\n"; 
   
   double pi = 3.14159265; // this is floating point number
   cout << fixed << setprecision(4); // number is set to display with 4 decimal places
   cout <<" The value of pi : " << pi << endl;
   cout << " The value of pi 4 decimal place of total width 8   : |" << setw(8) << pi << "|" << endl; // setw() sets the total width
   cout << " The value of pi 4 decimal place of total width 10  : |" << setw(10) << pi << "|"<< endl; 
   
   cout << setfill('-'); // setfill() sets to fill the blanks with specified character
   cout << " The value of pi 4 decimal place of total width 8   : |" << setw(8) << pi << "|" << endl; 
   cout << " The value of pi 4 decimal place of total width 10  : |" << setw(10) << pi << "|"<< endl; 
   
   cout << scientific;  // set value in scientific format with exponent
   cout <<" The value of pi in scientific format is : " << pi << endl;
   
   bool done = false; // this is boolean variable
   cout <<" Status in number : " << done << endl;  
   cout << boolalpha;     // set output in alphabet true or false
   cout <<" Status in alphabet : " << done << endl;
   cout << endl;
   return 0;
}


o print the result of the specified operations. 


#include <iostream>
using namespace std;
 
int main()
{
    cout << "\n\n Print the result of some specific operation :\n";
	cout << "--------------------------------------------------\n";
    cout << " Result of 1st expression is : "<< (-1+4*6) <<"\n" ; //-1 + 24 = 23
    cout << " Result of 2nd expression is : "<< ((35+5)%7) <<"\n" ; //40 % 7 = 5 (remainder of 40/7)
    cout << " Result of 3rd expression is : "<< (14+-4*6/11) <<"\n" ;  //14 - (24/11)= 14 - 2 = 12
    cout << " Result of 4th expression is : "<< (2+15/6*1-7%2) <<"\n\n" ; //2 + (15/6) - remainder of (7/2) = 2 + 2 - 1 = 4 - 1 = 3	
	
}

to add two numbers accept through keyboard.


#include <iostream>
using namespace std;
 
int main()
{
	int num1, num2, sum;
    cout << "\n Sum of two numbers :\n";
	cout << "-------------------------\n";   
	cout << " Input 1st number : ";
	cin >> num1 ;
	cout << " Input 2nd number : ";
	cin >> num2;
	sum = num1 + num2;
	cout <<" The sum of the numbers is : " << sum << endl;
	cout << endl;
	return 0;
}


o swap two numbers.

#include <iostream>
using namespace std;
 
int main()
{
	cout << "\n\n Swap two numbers :\n";
	cout << "-----------------------\n";
	int num1, num2, temp;
	cout << " Input 1st number : ";
	cin >> num1 ;
	cout << " Input 2nd number : ";
	cin >> num2;	
	temp=num2;
	num2=num1;
	num1=temp;
    cout << " After swapping the 1st number is : "<< num1 <<"\n" ; 
    cout << " After swapping the 2nd number is : "<< num2 <<"\n\n" ; 	
}


calculate the volume of a sphere.

#include <iostream>
using namespace std;

    int main()
    {
    	int rad1;
    	float volsp;
		cout << "\n\n Calculate the volume of a sphere :\n";
		cout << "---------------------------------------\n";		
        cout<<" Input the radius of a sphere : ";
    	cin>>rad1;
    	volsp=(4*3.14*rad1*rad1*rad1)/3;
        cout<<" The volume of a sphere is : "<< volsp << endl;
        cout << endl;
        return 0;
    }


 check whether a number is positive, negative or zero. 

#include <iostream>
using namespace std;

int main()
{
    signed long num1 = 0;
	cout << "\n\n Check whether a number is positive, negative or zero :\n";
	cout << "-----------------------------------------------------------\n";  
	cout << " Input a number : ";
    cin >> num1;
    if(num1 > 0)
    {
        cout << " The entered number is positive.\n\n";
    }
    else if(num1 < 0)
    {
        cout << " The entered number is negative.\n\n";
    }
    else
    {
        std::cout << " The number is zero.\n\n";
    }
    return 0;
}


 to add two binary numbers.


 #include <iostream>
#include <math.h>
using namespace std;
 
int main()
{
	long bn1,bn2;
	int i=0, r=0;
	int sum[20]; 
    cout << "\n\n Addition of two binary numbers:\n";
	cout << "-----------------------------------\n";
	cout << " Input the 1st binary number: ";
	cin>> bn1;
	cout << " Input the 2nd binary number: ";
	cin>> bn2;
  while (bn1 != 0 || bn2 != 0) 
  {
   sum[i++] = (int)((bn1 % 10 + bn2 % 10 + r) % 2);
   r = (int)((bn1 % 10 + bn2 % 10 + r) / 2);
   bn1 = bn1 / 10;
   bn2 = bn2 / 10;
  }
  if (r != 0) {
   sum[i++] = r;
  }
  --i;
  cout<<" The sum of two binary numbers is: ";
  while (i >= 0) {
   cout<<(sum[i--]);
  }
   cout<<("\n");  
 }


  program to swap first and last digits of any number.

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, first, last, sum, digits, nn, a, b;
    cout << "\n\n Find the number after swapping the first and last digits:\n";
    cout << "-------------------------------------------------------------\n";
    cout << " Input any number: ";
    cin >> n;
    digits = (int)log10(n);
    first = n / pow(10, digits);
    last = n % 10;
    a = first * (pow(10, digits));
    b = n % a;
    n = b / 10;
    nn = last * (pow(10, digits)) + (n * 10 + first);
    cout << " The number after swaping the first and last digits are: " << nn << endl;
}


prints three highest numbers from a list of numbers in descending order.


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<int> nums;
    int n;
    while (cin >> n) {
        nums.push_back(n);
    }
    sort(nums.rbegin(), nums.rend());

    for (int i = 0; i != 3; ++i) {
        cout << nums[i] << endl;
    }
    return 0;
}











