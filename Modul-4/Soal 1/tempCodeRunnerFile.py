i = 1
j = int(input("Masukkan Angka Kelipatan: "))
k = input("Masukkan Simbol: ")

while i <= 50:
    if i % j == 0:
        print(k, end=" ")
    else:
        print(i, end=" ")
    i += 1