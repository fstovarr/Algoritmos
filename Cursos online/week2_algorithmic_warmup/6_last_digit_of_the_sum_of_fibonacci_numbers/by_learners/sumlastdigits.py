# -*- coding: utf-8 -*-
"""
Created on Sun Sep  2 10:35:47 2018

@author: fabiotovar
"""
# -*- coding: utf-8 -*-
"""
Created on Sun Sep  2 09:14:38 2018

@author: fabiotovar
"""

from sys import stdin, stdout

def find_zero(m, l):
    n1, n2, res = 0, 1, -1
    l.append(n1)
    l.append(n2)
    ans = 0
    while(res != 0):
        res = (n1 + n2) % m
        if(res != 0):
            l.append(res)
        n1 = n2        
        n2 = res
        ans = ans + 1
    
    return (ans, l, False)

def mo(a, b):
    exp = a
    count = 0
    while(exp != 1):
        exp = a % b * exp % b
        exp = exp % b
        count = count + 1
    
    return count + 1    
    
def get_sum(n, m, a, l):
    heap = []
    
    heap.append(0)
    for i in range(1, len(l)):
        heap.append(heap[i - 1] + l[i])
        
    # print((n + 1) % len(heap))
    s = 0
    
    exp = n // (len(l))
    bas = l[len(l) - 1] # 7
    period = (len(l)) * a # 60 = 15*4
    acc_sum = heap[(len(heap) - 1)] # accumulative sum
    fi = heap[n % period % (len(heap))] # i-th term fibonacci
        
    sum_exp = 0
    for i in range(exp):
        sum_exp = (sum_exp % m + (bas ** i) % m) % m
        
    ans = ((sum_exp * acc_sum) % m + ((bas ** exp) * fi) % m) % m
    
    if(n == 80):
        print(heap[10])
        print(l[10])
    
    return ans
    
if __name__ == '__main__':
    l = []
    n = int(stdin.readline())
    m = 10
    
    #text_file = open("Output.txt", "w")
    
    (z, l, flag) = find_zero(m, l)
    a = mo(l[len(l) - 2], m)    
    
    s = []    
    
    #for n in range(500):
    total = 0
    if(n > 60):
        sum_sixty = get_sum(60,m,a,l)
        mult = n // 60
        total = (total + sum_sixty * mult) % m
    
    n = n % 60
    total = total + get_sum(n, m, a, l) % m
    print(total)
            
        #text_file.write("%s\n" % total)
        
    #text_file.close()