from sys import stdin, stdout
 
n, m = list(map(lambda i: int(i), stdin.readline().rstrip().split()))
flag = [False]*1005
 
for i in range(m):
    a, b = list(map(lambda i: int(i), stdin.readline().rstrip().split()))
    flag[a] = True
    flag[b] = True
 
index = 1
 
while flag[index]:
    index+=1
    
stdout.write(str(n-1)+'\n')
 
for i in range(1, index):
    stdout.write(str(i)+' '+str(index)+'\n')
 
for i in range(index+1, n+1):
    stdout.write(str(index)+' '+str(i)+'\n')
