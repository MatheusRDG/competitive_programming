from sys import stdin, stdout
def bs(l, r, v, arr):
    while l < r:
        m = (l + r)//2
        if arr[m] == v:
            return m
        elif arr[m] > v:
            r = r-1
        else:
            l = l+1
    return None
def dfsAux(mark, res, pointer):
    if res[-1]:
        return res
    v1 = res[pointer-1]/3
    v2 = res[pointer-1]*2
    if v1 == int(v1):
        v1 = bs(0, n, v1, a)
    else:
        v1 = 0
    v2 = bs(0, n, v2, a)
    if v1 != None:
        if mark[v1]:
            mark[v1] = 0
            res[pointer] = a[v1]
            pointer+=1
            resTemp = dfsAux(mark, res, pointer)
            if resTemp:
                return resTemp
            pointer-=1
            mark[v1] = 1
            res[pointer] = 0

    if v2 != None:
        if mark[v2]:
            mark[v2] = 0
            res[pointer] = a[v2]
            pointer+=1
            resTemp = dfsAux(mark, res, pointer)
            if resTemp:
                return resTemp
            pointer-=1
            mark[v2] = 1
            res[pointer] = 0
    return 0


def dfs(mark, res, pointer):
    for i in range(n):
        mark[i] = 0
        res[0] = a[i]
        resTemp = dfsAux(mark, res, 1)
        if resTemp:
            return resTemp
        mark[i] = 1
        res[0] = 0                
    return 0
n = int(stdin.readline().rstrip())
a = sorted(list(map(lambda i: int(i), stdin.readline().rstrip().split())))
stdout.write(' '.join(list(map(lambda i: str(i), dfs([1]*n, [0]*n, 0)))))
