from sys import stdin, stdout

n, m, k = list(map(lambda i: int(i), stdin.readline().rstrip().split()))

mark = [False]*(n+5)

g = [[] for i in range(n)]

for i in range(m):
    u, v, l = list(map(lambda i: int(i), stdin.readline().rstrip().split()))
    u-=1
    v-=1
    g[u].append((v,l))
    g[v].append((u,l))
    
if k > 0:
    l = list(map(lambda i: int(i), stdin.readline().rstrip().split()))

    for i in l:
        mark[i-1] = True

    best = float('inf')

    for i in range(n):
        if mark[i]:
            for j in g[i]:
                if not mark[j[0]]:
                    if j[1] < best:
                        best = j[1]
                        
    if best == float('inf'):
        stdout.write('-1')
    else:
        stdout.write(str(best))
else:
    stdout.write('-1')
