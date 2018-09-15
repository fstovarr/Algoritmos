# -*- coding: utf-8 -*-
"""
Created on Sun Sep  2 07:54:07 2018

@author: fabiotovar
"""

from sys import stdin, stdout 

if __name__ == '__main__':
    n = int(stdin.readline())

    f1, f2 = 0, 1
    
    if(n <= 1):
        print(n)
    else:
        ans = 0
        
        for _ in range(n):
            ans = (f1 + f2)
            f2 = f1
            f1 = ans

        print(ans)
