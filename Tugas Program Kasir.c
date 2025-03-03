#include <stdio.h>
#include <stdlib.h>

int main() {
    int menu, porsi, total, item;

    printf("\t\t========== Cafe Brew & Bites ===========\n");
    printf("\t\t\t Selamat Datang!\n\n");
    printf("\t\t Apa yang ingin anda pesan?\n\n");
    printf("\t\tPilih jumlah item yang ingin Anda pesan: ");
    scanf("%d", &item);

    for (int i = 0; i < item; i++) {
        printf("\nMenu:\n");
        printf("1. Milkshake - Rp20000\n");
        printf("2. Cheesecake - Rp50000\n");
        printf("3. Jus - Rp20000\n");
        printf("4. Brownies - Rp40000\n");

        printf("Masukkan pilihan menu (1-4): ");
        scanf("%d", &menu);
        printf("Masukkan jumlah porsi: ");
        scanf("%d", &porsi);

        switch(menu) {
            case 1:
                total += 20000 * porsi;
                break;
            case 2:
                total += 50000 * porsi;
                break;
            case 3:
                total += 20000 * porsi;
                break;
            case 4:
                total += 40000 * porsi;
                break;
            default:
                printf("Pilihan tidak valid!\n");
                i--; // Ulangi input jika pilihan tidak valid
                continue;
        }
    }

    printf("\nTotal harga yang harus dibayar: Rp%d\n", total);
    printf("Terimakasih! Silahkan Datang Kembali");
}
