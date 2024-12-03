batas = int(input("Masukkan Batas Baris: "))
lipat = int(input("Masukkan Kelipatan: "))
total = 0

for i in range(1, batas + 1, 1):
    jumlah = 0

    
    for j in range(i, 0, -1): 
        jumlah += j * lipat
        print(f"({j} * {lipat})" , end="")

        if j > 1: print(" + ", end="")

    print(f" = {jumlah}")
    total += jumlah
print(f"{total}")
