a = int(input("Masukkan Angka Pertama: "))
b = int(input("Masukkan Angka Kedua: "))

x = a
y = b
while True:
    print(x, y, end="")

    if(x == b and y == a): break

    if(a > b):
        x-=1
        y+=1
    else: 
        x+=1
        y-=1
    
    print(" - ", end="")
