from math import ceil
from sys import stdin, stdout
n, k = [int(i) for i in stdin.readline().rstrip().split()]
stdout.write(str((n+k-1)//n)+'\n')
