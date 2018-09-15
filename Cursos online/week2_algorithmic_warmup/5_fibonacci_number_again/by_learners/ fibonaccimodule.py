# -*- coding: utf-8 -*-
"""
Created on Sun Sep  2 09:14:38 2018

@author: fabiotovar
"""

from sys import stdin, stdout

def find_zero(n, m, l):
    n1, n2, res = 0, 1, -1
    l.append(n1)
    l.append(n2)
    ans = 0
    while(res != 0):
        res = (n1 + n2) % m
        l.append(res)
        n1 = n2        
        n2 = res
        ans = ans + 1
        if(ans == n):
            return (ans, l, True)
    
    return (ans, l, False)

def mo(a, b):
    exp = a
    count = 0
    while(exp != 1):
        exp = a % b * exp % b
        exp = exp % b
        count = count + 1
    
    return count + 1    
    
def fill_fib(m, limit, l):
    n1, n2, res = l[len(l) - 2], l[len(l) - 1], 0
    
    while(len(l) < limit):
        res = (n1 + n2) % m
        l.append(res)
        n1 = n2        
        n2 = res
    
    return l
    
if __name__ == '__main__':
    l = []
    n, m = [int(x) for x in stdin.readline().split()]
    
    (z, l, flag) = find_zero(n, m, l)
    
    #print(l)
    if(flag):
        print(l[n])
    else:        
        a = l[len(l) - 2]        
        me = mo(a, m)
        period = (len(l) - 1) * me # 2816213588 239
        
        if(period + 1 > len(l)):
            l = fill_fib(m, period + 1, l)
        
        print(l[n%period])