from sys import stdin, stdout

def longestPrefixSuffix(s):
    n = len(s)
    newS = s[1:-1]
    lenght = float('-inf')
    stringRes = None
    for i in range(n, 0, -1):
        prefix = s[:i]
        suffix = s[n-i:]
        if prefix == suffix:
            if prefix in newS:
                if i > lenght:
                    lenght = i
                    stringRes = prefix
    return stringRes

s = stdin.readline().rstrip()
res = longestPrefixSuffix(s)

if res:
    stdout.write(res)
else:
    stdout.write('Just a legend')
