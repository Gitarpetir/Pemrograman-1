detik1 = int(input("Masukkan Detik: "))

hari = int(detik1/86400)
jam = int((detik1 % 86400) /3600)
menit = int((detik1 % 3600)/60)
detik2 = int(detik1 % 60)

if hari >= 1:
    print(f"{hari} hari {jam:02}:{menit:02}:{detik2:02}")
else:
    print(f"{jam:02}:{menit:02}:{detik2:02}")