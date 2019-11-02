from sys import stdin, stdout
n = int(stdin.readline().rstrip())
arr = [0]*10005
array = list(map(lambda i: int(i), stdin.readline().rstrip().split()))

def solve():
    for i in array:
        arr[i]+=1
        if arr[i] > (n+1)//2:
            stdout.write('NO'+'\n')
            return 0
    stdout.write('YES'+'\n')
    return 0

solve()

