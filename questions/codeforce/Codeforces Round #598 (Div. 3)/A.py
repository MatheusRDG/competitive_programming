def solve(a, b, n, S):
    l, r = 0, a
    while l <= r:
        mid = (l+r)//2;
        if mid*n == S or ((mid*n)+b >= S and mid*n < S):
            print('YES')
            return 1
        elif mid*n > S:
            r = mid - 1
        else:
            l = mid + 1
    print('NO')
    return 0
    
for i in range(int(input())):
    solve(*list(map(lambda i: int(i), input().split())))
