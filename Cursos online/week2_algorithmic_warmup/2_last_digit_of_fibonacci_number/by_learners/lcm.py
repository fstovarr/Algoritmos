# -*- coding: utf-8 -*-
"""
Created on Sun Sep  2 08:51:51 2018

@author: fabiotovar
"""

from sys import stdin, stdout

def gcd(a,b):
    if(b == 0):
        return a
    else:
        return gcd(b, a % b)

if(__name__
 == '__main__'):
    n1, n2 = [int(x) for x in stdin.readline().split()]
    ans = gcd(n1,n2)
    print((n1//ans * n2))