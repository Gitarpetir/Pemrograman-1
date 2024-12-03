while True:
    print("Pilih program")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")
    a = int(input("Masukkan Pilihan: "))
    
    if a == 1:
        bil1 = int(input("Masukkan Nilai Pertama: "))
        bil2 = int(input("Masukkan Nilai Kedua: "))
        print(f"Hasil penjumlahan antara {bil1:.2f} dengan {bil2:.2f} adalah {bil1+bil2:.2f}")

    elif a == 2:
        bil1 = int(input("Masukkan Nilai Pertama: "))
        bil2 = int(input("Masukkan Nilai Kedua: "))
        print(f"Hasil pengurangan antara {bil1:.2f} dengan {bil2:.2f} adalah {bil1-bil2:.2f}")

    elif a == 3:
        bil1 = int(input("Masukkan Nilai Pertama: "))
        bil2 = int(input("Masukkan Nilai Kedua: "))
        print(f"Hasil perkalian antara {bil1:.2f} dengan {bil2:.2f} adalah {bil1*bil2:.2f}")
    elif a == 4:
        bil1 = int(input("Masukkan Nilai Pertama: "))
        bil2 = int(input("Masukkan Nilai Kedua: "))
        print(f"Hasil pembagian antara {bil1:.2f} dengan {bil2:.2f} adalah {bil1/bil2:.2f}")
    elif a == 5:
        print("Terimakasih, telah menggunakan kalkulator Muhammad Alfi Gunawan")
        break
    else:
        print("Input anda salah coba lagi")
    
