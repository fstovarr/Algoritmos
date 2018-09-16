'''
# Sample code to perform I/O:

#name = input()                  # Reading input from STDIN
#print('Hi, %s.' % name)         # Writing output to STDOUT

# Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
'''

# Write your code here
from __future__ import print_function

def insertion_sort_modified(arr):
    ans1 = []
    ans2 = []
    sum1, sum2 = [0]*2
    
    for i in range(len(arr)):
        if(arr[i] % 2 == 0):
            sum2 += arr[i]
            insert(ans2, arr[i])
        else:
            sum1 += arr[i]
            insert(ans1, arr[i])
            
    ans2.append(sum2)
    ans1.append(sum1)
            
    return [ans2, ans1]

def insert(arr, n):
    arr.append(n)
    i = len(arr) - 2
    while(i >= 0 and arr[i] > n):
        arr[i + 1] = arr[i]
        i -= 1
        
    if(i == len(arr)):
        arr.append(n)
    elif (i + 1 > len(arr)):
        print("FATAL ERROR");
    else:
        arr[i + 1] = n
        

if __name__ == '__main__':
    _ = input()
    #print(n)
    arr = list(map(int, input().split()))
    #print(list(input().split()))
    even, odd = (insertion_sort_modified(arr))
    
    for x in even:
        print(x, end=' ')
    for x in odd:
        print(x, end=' ')
