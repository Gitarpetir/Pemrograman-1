baris = int(input())
zetsu = list(map(int, input().split()))

for i in range(baris):
 print(zetsu[i] * (i + 1), end=" ")