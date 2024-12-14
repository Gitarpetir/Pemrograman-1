def MaxBilangan(w,x,y,z):
    if w > x and w > y and w > z:
        besar = w
    elif x > w and x > y and x > z:
        besar = x
    elif y > w and y > x and y > z:
        besar = y
    elif z > w and z > x and z > y:
        besar = z
    return besar

a,b,c,d = map(int,input().split())
hasil = MaxBilangan(a,b,c,d)
print(hasil)