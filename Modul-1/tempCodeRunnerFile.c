alas=5, tinggi=12, sisiA,sisiB,miring;
    sisiA = tinggi;
    sisiB = alas;
    miring = sqrt ((alas*alas)+(tinggi*tinggi));


    printf ("Diketahui :\nAlas = %d cm\n",alas);
    printf ("Tinggi = %d cm\n\n",tinggi);
    printf ("Jawab :\n");
    printf ("Sisi A = %d cm\n",tinggi);
    printf ("Sisi B = %d cm\n",miring);
    printf ("Sisi C = %d cm\n",alas);
    printf ("Keliling = %d cm\n", alas+tinggi+miring);
    printf ("Luas = %d cm",(alas*tinggi)/2);