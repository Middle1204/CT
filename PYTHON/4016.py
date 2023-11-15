def g(a, b):
    while b != 0:
        a, b = b, a % b
    return a

input_str = input()
x, y, z = map(int, input_str.split())
result = g(x, g(y, z)) # x 기준으로 비교, y z 구한 후 x와 y z를 구하기

print(result)
