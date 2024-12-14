def hitung(nilai1,nilai2):
    hitungan = (nilai1 - nilai2)
    if hitungan < 0:
        hitungan = hitungan * -1
    elif hitungan > 0:
        hitungan = hitungan
    return hitungan

a,c,b,d = map(int,input().split())
Hasil = hitung(a,b) + hitung(c,d)
print(Hasil)

