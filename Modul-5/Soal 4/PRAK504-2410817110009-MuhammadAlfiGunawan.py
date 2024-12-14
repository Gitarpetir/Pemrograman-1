def reverse(angka):
    hasil = 0
    while angka != 0:
        sisa = angka % 10
        hasil = hasil * 10 + sisa
        angka = int(angka / 10)
    return hasil

a,b = map(int,input().split())
nilai1 = reverse(a)
nilai2 = reverse(b)
nilai3 = nilai1 + nilai2
print(reverse(nilai3))