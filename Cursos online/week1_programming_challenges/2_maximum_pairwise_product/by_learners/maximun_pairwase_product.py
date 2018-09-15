# -*- coding: utf-8 -*-
"""
Created on Sun Sep  2 04:34:41 2018

@author: fabiotovar
"""

if __name__ == '__main__':
    n = int(input())
    arr = [int(x) for x in input().split()]
    
    m1, m2 = arr[0],arr[1] 
    x1, x2 = m1, m2
    for x in arr:
        if(x > x1):
            x2 = x1
            x1 = x
        elif(x > x2):
            x2 = x
            
        if(x < m1):
            m2 = m1
            m1 = x
        elif(x < m2):
            m2 = x
          
    ans1 = m1*m2
    ans2 = x1*x2
    if(ans1 > ans2):
        print(ans1)
    else:
        print(ans2)
        