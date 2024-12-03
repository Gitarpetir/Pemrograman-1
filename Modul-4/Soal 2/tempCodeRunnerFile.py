atas = int(input("Masukkan Batas Maksimal: "))


i = 1
while i <= batas:
    if i % 2 != 0:  
        print(i, end=' ')
    i += 1  

print("")

i = 1
while i <= batas:
    if batas % 2 == 0: 
        print(batas, end=' ')
    batas -= 1 
