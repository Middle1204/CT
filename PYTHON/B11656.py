s = input()

f = []

for i in range(len(s)):
    f.append(s[i:])

f.sort()

for suffix in f:
    print(suffix)
