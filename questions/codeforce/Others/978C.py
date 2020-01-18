from sys import stdin, stdout

def binarySearch(arr, l, r, x):
    res = None
    while l <= r:
        mid = (l+r)//2;
        if arr[mid] >= x:
            res = mid
            r = mid - 1
        elif arr[mid] < x:
            l = mid + 1
        else:
            r = mid - 1
    return res
    
n, m = list(map(lambda i: int(i), stdin.readline().rstrip().split()))
a = list(map(lambda i: int(i), stdin.readline().rstrip().split()))
for i in range(1,n):
    a[i]+=a[i-1]
b = list(map(lambda i: int(i), stdin.readline().rstrip().split()))

for i in b: 
    local = binarySearch(a, 0, n-1, i)
    if local > 0:
        room = abs(a[local-1]-i)
    else:
        room = i
    stdout.write(str(local+1)+' '+str(room)+'\n')


