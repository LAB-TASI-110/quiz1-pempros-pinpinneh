#include <stdio.h>

int main() {
    int N;

    printf("Masukkan jumlah total data (N): ");
    scanf("%d", &N);

    int nilai[N];

    printf("Masukkan deret nilai:\n");
    for (int i = 0; i < N; i++) {
        printf("Nilai ke-%d: ", i + 1);
        scanf("%d", &nilai[i]);
    }

    int kodeKelompok;
    printf("\nPilih kelompok yang ingin ditampilkan:\n");
    printf("1. Kelompok Nilai Ganjil\n");
    printf("2. Kelompok Nilai Genap\n");
    printf("Masukkan kode kelompok (1 atau 2): ");
    scanf("%d", &kodeKelompok); 

    printf("\nDeret angka: ");
    for (int i = 0; i < N; i++) {
        if (kodeKelompok == 1 && nilai[i] % 2 != 0) { 
            printf("%d ", nilai[i]);
        } else if (kodeKelompok == 2 && nilai[i] % 2 == 0) { 
            printf("%d ", nilai[i]);
        }
    }
    printf("\n");

    return 0;
}