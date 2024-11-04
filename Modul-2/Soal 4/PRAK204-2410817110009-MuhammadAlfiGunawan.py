#case 1
jari   = float (input())
tinggi = float (input())
volume = 22.0/7.0 * (jari*jari) * tinggi
print(f"Volume   = {volume:.2f}")
luas = 2 * 22.0/7.0 * jari *(jari + tinggi)
print(f"Luas     = {luas:.2f}")
keliling = 2 * 22.0/7.0 * jari
print(f"Keliling = {keliling:.2f}")

#case 2
jari,tinggi = map(float,input().split())
volume = 22.0/7.0 * (jari*jari) * tinggi
print(f"Volume   = {volume:.2f}")
luas = 2 * 22.0/7.0 * jari *(jari + tinggi)
print(f"Luas     = {luas:.2f}")
keliling = 2 * 22.0/7.0 * jari
print(f"Keliling = {keliling:.2f}")
