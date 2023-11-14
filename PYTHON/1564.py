def gcd(a, b):
    while b != 0:
        a, b = b, a % b # 아까배운거
    return a

input_str = input()
a, b = map(int, input_str.split())
result = gcd(a, b)

print(result)
