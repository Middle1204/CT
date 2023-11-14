n = int(input())

# 화폐 단위 정의
currency_units = [50000, 10000, 5000, 1000, 500, 100, 50, 10]

count = 0
for unit in currency_units:
    count += n // unit
    n %= unit

print(count)
