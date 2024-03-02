def calculate_prize(rd):
    rd_set = set(rd)
    
    if len(rd_set) == 1:  
        return 10000 + (rd[0] * 1000)
    elif len(rd_set) == 2:  
        for num in rd_set:
            if rd.count(num) == 2:
                return 1000 + (num * 100)
    else:  
        return max(rd) * 100

def main():
    N = int(input())
    
    max_prize = 0
    
    for _ in range(N):
        rd = list(map(int, input().split()))
        prize = calculate_prize(rd)
        max_prize = max(max_prize, prize)
    
    print(max_prize)

if __name__ == "__main__":
    main()
