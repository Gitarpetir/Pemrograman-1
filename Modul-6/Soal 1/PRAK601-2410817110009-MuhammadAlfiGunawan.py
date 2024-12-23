baris, kolom = map(int, input().split())
array = list(map(int, input().split()))

for i in range(0, len(array), kolom):
    print(*array[i : i + kolom])
