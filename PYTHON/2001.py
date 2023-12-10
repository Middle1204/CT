pasta1 = int(input())
pasta2 = int(input())
pasta3 = int(input())
juice1 = int(input())
juice2 = int(input())

min_pasta_price = min(pasta1, pasta2, pasta3)# 최솟값 구하기
min_juice_price = min(juice1, juice2) 

# 세트 메뉴의 최소 대금 계산
set_menu_price = (min_pasta_price + min_juice_price) * 1.1

# 최소 대금을 출력, 소수 첫째자리까지 출력
print("{:.1f}".format(set_menu_price))