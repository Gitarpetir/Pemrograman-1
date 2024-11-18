a = int(input("Masukkan Angka Pertama: "))
b = int(input("Masukkan Angka Kedua: "))
c = int(input("Masukkan Angka Ketiga: "))

if a>c and c>b:
    print(f"{b} {c} {a}")
elif b>a and a>c:
    print(f"{c} {a} {b}")
elif c>a and a>b:
    print(f"{b} {a} {c}")
else : 
    print("Angka Tidak Boleh Sama")