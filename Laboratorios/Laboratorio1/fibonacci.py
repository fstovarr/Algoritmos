# -*- coding: utf-8 -*-
"""
Created on Mon Aug 13 12:34:54 2018

@author: fabiotovar
"""
from time import time
import pandas as pd

def fib(i):
    prev, act = 0, 1;
    res = int(0);
    
    for j in range(0,i):
        res = int(prev + act)
        prev = act
        act = res
    
    return int(res)
        

start_time = time()
cols = ['N','Time']
df = pd.DataFrame(columns=cols)

for i in range(1,5109):
    s = pd.Series(index=cols, dtype='int64')
    s['Time'] = float(time() - start_time)
    s['N'] = i
    df = df.append(s, ignore_index=True)
    
elapsed_time = time() - start_time
print("Total elapsed time: {0} seconds.".format(elapsed_time))

print(df.head())

print(df.dtypes)

df.plot(x='N', y='Time')