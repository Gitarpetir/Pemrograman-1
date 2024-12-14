def maksimal(a, b):
    if a < b:
        return b
    else:
        return a

def minimal(a, b):
    
    if a > b:
        return b
    else:
        return a

batas = 0
maks = -100000
minim = 100000
bilangan = int(input())
angka = map(int,input().split())
for nilai in angka:
    maks = maksimal(maks, nilai)
    minim = minimal(minim, nilai)

print(f"{maks} {minim}")
