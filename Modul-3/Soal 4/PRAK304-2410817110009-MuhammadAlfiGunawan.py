nilai = int(input("Masukkan Sebuah Angka: "))

if nilai == 0:
    print("Nol")
elif nilai < 0 or nilai > 99:
    print("Anda Menginput Melebihi Bilangan")
elif nilai <= 9:
    print("Satuan")
elif nilai == 10:
    print("Puluhan")
elif nilai <= 19:
    print("Belasan")
elif nilai <= 99:
    print("Puluhan")