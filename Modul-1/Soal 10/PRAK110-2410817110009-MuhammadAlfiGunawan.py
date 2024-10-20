import math
alas = 5
tinggi = 12
miring = math.sqrt ((alas*alas)+(tinggi*tinggi))


print ("Diketahui :")
print (f"Alas = {alas} cm")
print (f"Tinggi = {tinggi} cm\n")
print ("Jawab :")
print (f"Sisi A = {tinggi} cm")
print (f"Sisi B = {miring :.0f} cm")
print (f"Sisi C = {alas} cm")
print (f"Keliling = {alas+miring+tinggi :.0f} cm")
print (f"Luas = {(alas*tinggi)/2 :.0f} cm")