def balance_calc(i, j):
    return i-1+j+1

for i in range(int(input())):
    n = int(input())
    l = list(map(lambda i: int(i), input().split()))
    l_aux = [0]*n
    moves = n-1

    for i in range(n):
        l_aux[i] = l[i] - i - 1

    mark = [1]*n
    print(l)
    print(l_aux)
    while moves:
        move = 0
        balance = float("inf")
        for i in range(n-1):
            if balance > abs(balance_calc(l_aux[i], l_aux[i+1])) and mark[i]:
                move = i
                balance = abs(balance_calc(l_aux[i], l_aux[i+1]))
                mark[i] = 0
        l_aux[move]-=1
        l_aux[move+1]+=1
        l_aux[move], l_aux[move+1] = l_aux[move+1], l_aux[move]
        l[move], l[move+1] = l[move+1], l[move]
        print(l)
        print(l_aux, move+1)
        moves-=1
    print()
    print(l)
