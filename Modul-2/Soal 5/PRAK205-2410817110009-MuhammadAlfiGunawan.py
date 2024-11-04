import math
#case 1
tinggi,miring = map(float,input().split())

alas = math.sqrt((miring*miring)-(tinggi*tinggi))
print(f"Alas = {alas:.0f} cm")
print(f"Tinggi = {tinggi:.0f} cm")
keliling = alas + miring + tinggi
print(f"Keliling = {keliling:.0f} cm")
luas = 1.0/2.0 * alas * tinggi
print(f"Luas = {luas:.0f} cm^2")

#case 2
tinggi = float(input())
miring = float(input())

alas = math.sqrt((miring*miring)-(tinggi*tinggi))
print(f"Alas = {alas:.0f} cm")
print(f"Tinggi = {tinggi:.0f} cm")
keliling = alas + miring + tinggi
print(f"Keliling = {keliling:.0f} cm")
luas = 1.0/2.0 * alas * tinggi
print(f"Luas = {luas:.0f} cm^2")
