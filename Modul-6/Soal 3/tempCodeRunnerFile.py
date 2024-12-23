a, b = map(int, input().split())

if a != b:
    print("Jumlah tidak sama")
else:
    baris1 = list(map(int, input().split()))
    baris2 = list(map(int, input().split()))
    hasil = [baris1[i] * baris2[i] 
             
    for i in range(a)]
    print(*hasil)