# Maximum Pairwise Product   


"""
Given a sequence of non-negative integers  0<(x)<10,000
find maximum pairwise product 

input format
first line contains n non-negative integers  

"""

# arr = list(map(int, input("\Enter the numbers: ").strip().split()))
# print(arr)


arr = [1, 4, 3, 6, 7, 0]

# Function to find maximum
# product pair in arr[0..n-1]

def maxProductApproach1(arr):
    """
    A Simple Solution is to consider every pair and keep track of the maximum product

    Time Complexity : O(n2)
    """
    n = len(arr)
    if (n<2):
        print("no pairs exist")
        return 

    a = arr[0]; b = arr[1]

    for i in range(0,n):
        for j in range(i+1,n):
            if (arr[i]*arr[j] > a*b):
                a = arr[i]; b = arr[j]
    print("max product pair is ",a,b)


def maxProductApproach2(arr):
    """
    A Better Solution is to use sorting. Below are detailed steps. 

    Sort input array in increasing order. 
    If all elements are positive, then return the product of the last two numbers. 
    Else return a maximum of products of the first two and last two numbers. 

    Time Complexity: O(nlog n)
    Auxiliary Space: O(1)
    """
    return




maxProductApproach1(arr)
