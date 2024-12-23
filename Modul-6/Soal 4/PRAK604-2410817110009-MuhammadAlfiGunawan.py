def panjang_kalimat(kalimat):
    return len(kalimat)

def main():
    jumlah_bintang = 0
    jumlah_pagar = 0

    kode_shikamaru = input()
    kode_musuh = input()

    if panjang_kalimat(kode_shikamaru) != panjang_kalimat(kode_musuh):
        print("Panjang kalimat berbeda, pesan palsu")
        return

    for i in range(panjang_kalimat(kode_shikamaru)):
        if kode_shikamaru[i] == ' ' and kode_musuh[i] == ' ':
            continue

        if kode_shikamaru[i] == kode_musuh[i]:
            print("*", end="")
            jumlah_bintang += 1
        else:
            print("#", end="")
            jumlah_pagar += 1

    print(f"\n* = {jumlah_bintang} ")
    print(f"# = {jumlah_pagar} ")
    if jumlah_bintang >= jumlah_pagar:
        print("Pesan Asli")
    else:
        print("Pesan Palsu")
main()
