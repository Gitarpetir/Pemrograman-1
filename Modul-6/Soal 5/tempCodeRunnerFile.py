ordo = int(input())

print("Matriks A")
matriksA = []
for i in range(ordo):
    baris = list(map(int, input().split()))
    matriksA.append(baris)

print("Matriks B")
matriksB = []
for i in range(ordo):
    baris = list(map(int, input().split()))
    matriksB.append(baris)

matriksC = [[0 for _ in range(ordo)] for _ in range(ordo)]

print("Matriks AXB")
for i in range(ordo):
    for j in range(ordo):
        for k in range(ordo):
            matriksC[i][j] += matriksA[i][k] * matriksB[k][j]

for i in range(ordo):
    print(*matriksC[i])
