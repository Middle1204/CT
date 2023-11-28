def hanoi_tower(n, a, b, target):
    if n == 1:
        print(f"Disk {n} : {a} to {target}")
        return
    hanoi_tower(n - 1, a, target, b)
    print(f"Disk {n} : {a} to {target}")
    hanoi_tower(n - 1, b, a, target)

n = int(input())
hanoi_tower(n, 'A', 'B', 'C')
