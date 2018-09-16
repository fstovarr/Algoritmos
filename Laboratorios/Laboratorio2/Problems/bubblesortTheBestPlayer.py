'''
# Sample code to perform I/O:

name = input()                  # Reading input from STDIN
print('Hi, %s.' % name)         # Writing output to STDOUT

# Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
'''

def comp(x, y):
    if(x[1] > y[1]):
        return x
    elif (x[1] < y[1]):
        return y
    else:
        if(x[0] > y[0]):
            return y
        else:
            return x

def bubblesort(arr):
    for i in range(len(arr)):
        ind = 0
        for j in range(1, len(arr) - i):
            if (comp(arr[ind], arr[j]) ==  arr[ind]):
                arr[j], arr[ind] = arr[ind], arr[j]
            ind = j
    return arr


if __name__ == "__main__":
    n, t = map(int, input().split())
    fans = []
    for _ in range(n):
        name, quot = input().split()
        fans.append([name, int(quot)])
    
    fans = bubblesort(fans)
    
    #print(fans)
    
    for i in range(t):
        print(fans[len(fans) - 1 - i][0])
