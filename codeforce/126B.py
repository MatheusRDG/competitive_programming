from sys import stdin, stdout

s = stdin.readline().rstrip()
n = len(s)

def compute_lps(s):
    lps = [0 for i in range(n)] 
    Len = 0
    lps[0] = 0
    i = 1
    while (i < n): 
        if (s[i] == s[Len]): 
            Len += 1
            lps[i] = Len
            i += 1
        else: 
            if (Len != 0): 
                Len = lps[Len - 1] 
            else: 
                lps[i] = 0
                i += 1
    return lps 

def Longestsubstring(s):
    lps = compute_lps(s) 
    if (lps[n - 1] == 0): 
        return 0
    for i in range(0,n - 1): 
        if (lps[i] == lps[n - 1]): 
            return (s[0:lps[i]]) 
    if (lps[lps[n - 1] - 1] == 0): 
        return 0
    else: 
        return (s[0:lps[lps[n - 1] - 1]])
    
res = Longestsubstring(s)

if res:
    stdout.write(res)
else:
    stdout.write('Just a legend')
