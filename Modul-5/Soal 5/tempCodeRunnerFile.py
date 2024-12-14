def Biodata(tahunlahir2,nama2,asal2):
    tahun_sekarang = 2020
    tahunlahir2 = tahun_sekarang - tahunlahir2
    print(f"Perkenalkan Nama Saya : {nama2}")
    print(f"Umur Saya : {tahunlahir2}")
    print(f"Saya Adalah Angkatan : {tahun_sekarang}")
    print(f"Asal Saya dari : {asal}")

tahunlahir = int(input())
nama = input()
asal = input()

tahunlahir1 = int(input())
nama1 = input()
asal1 = input()

Biodata(tahunlahir,nama,asal)
print("")
Biodata(tahunlahir1,nama1,asal1)