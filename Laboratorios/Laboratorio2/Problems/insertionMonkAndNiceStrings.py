'''
# Sample code to perform I/O:

name = input()                  # Reading input from STDIN
print('Hi, %s.' % name)         # Writing output to STDOUT

# Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
'''

# Write your code here
if __name__ == "__main__":
    n = int(input())
    A = []
    for _ in range(n):
        A.append(input())
    
    for i in range(n):
        base = A[i]
        counter = 0
        for j in range(i):
            if(A[j]< base):
                counter+=1
        print(counter)
