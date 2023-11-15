def g(a, b):
    if b == 0:
        return a
    else:
        return g(b, a % b)

input_str = input()
x, y, z = map(int, input_str.split())
result = g(x, g(y, z))  

print(result)
