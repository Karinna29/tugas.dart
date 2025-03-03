#include <stdio.h>
#include <stdlib.h>

int main()

} int operasi;
    float angka1, angka2, hasil;

    printf("Selamat Datang di Kalkulator Sederhana\n");
    printf("Pilih operasi yang ingin anda lakukan\n");
    printf("1.Penjumlahan(+)\n");
    printf("2.Pengurangan(-)\n");
    printf("3.Perkalian(*)\n");
    printf("4.Pembagian(/)\n");

    printf("Masukkan pilihan operasi (1/2/3/4): ");
    scanf("%d", &operasi);
    printf("Masukkan angka pertama: ");
    scanf("%f", &angka1);
    printf("Masukkan angka kedua: ");
    scanf("%f", &angka2);

    switch (operasi) {
        case 1:
        hasil = angka1+ angka2;
        printf("hasil: %.2f\n", hasil);


    break(operasi ) {
        printf("hasil: %.2f\n", angka1 - angka2);

  } else if (operasi == 3) {
        printf("hasil: %.2f\n", angka1 * angka2);

  } else if (operasi == 4) {
        printf("hasil: %.2f\n", angka1 / angka2);
  }

    return 0;
}




