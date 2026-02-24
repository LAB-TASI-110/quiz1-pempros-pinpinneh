#include <stdio.h>
#include <time.h>

int main()
{
    float berat;
    int waktu_per_kg = 45;
    int total_menit_proses;

    printf("=== SISTEM OPERASIONAL LAUNDRY DEL ===\n");
    printf("Contoh memasukkan berat 4.75 gunakan . sebagai koma: ");
    printf("Masukkan berat pakaian (kg): ");
    scanf("%f", &berat);

    total_menit_proses = (int)(berat * waktu_per_kg);

    time_t rawtime;
    struct tm *timeinfo;
    time(&rawtime);
    timeinfo = localtime(&rawtime);

    printf("\n--- RINCIAN PENGERJAAN ---\n");
    printf("Berat Pakaian      : %.2f kg\n", berat);
    printf("Durasi Pengerjaan  : %d menit\n", total_menit_proses);

    int jam_selesai = timeinfo->tm_hour;
    int menit_selesai = timeinfo->tm_min + total_menit_proses;

    while (menit_selesai >= 60)
    {
        menit_selesai -= 60;
        jam_selesai += 1;
    }

    if (jam_selesai >= 24)
        jam_selesai %= 24;

    printf("Estimasi Selesai   : %02d:%02d WIB\n", jam_selesai, menit_selesai);
    printf("--------------------------\n");
    printf("Status: Pelanggan diminta menunggu selama %d menit.\n", total_menit_proses);

    return 0;
}