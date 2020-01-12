from sys import stdin, stdout
stdout.write(str(bin(int(stdin.readline().rstrip()))[2:].count('1')))

