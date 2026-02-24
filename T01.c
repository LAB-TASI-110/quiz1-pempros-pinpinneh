#include <stdio.h>
#include <string.h>

int main()
{
    char kodeMenu[10];
    int porsiButet, porsiUcok, totalPorsi, hargaSatuan, totalHargaMenu;
    int grandTotal = 0;
    char kupon[20];

    while (1)
    {
        scanf("%s", kodeMenu);

        if (strcmp(kodeMenu, "END") == 0) {
            break;
    }

    scanf("%d", &porsiButet);

    porsiUcok = porsiButet * 2;
    totalPorsi = porsiButet + porsiUcok;

    hargaSatuan = 0;
    if (strcmp(kodeMenu, "NGS") == 0)
    {
        hargaSatuan = 20000;
    }
    else if (strcmp(kodeMenu, "AP") == 0)
    {
        hargaSatuan = 25000;
    }
    else if (strcmp(kodeMenu, "GG") == 0)
    {
        hargaSatuan = 15000;
    }

    totalHargaMenu = totalPorsi * hargaSatuan;
    grandTotal += totalHargaMenu;
}
if (grandTotal >= 200000)
{
    strcpy(kupon, "Kupon Kuning");
}
else if (grandTotal >= 100000)
{
    strcpy(kupon, "Kupon Biru");
}
else
{
    strcpy(kupon, "Tidak ada kupon");
}
printf("\n=== STRUK PEMBAYARAN ===\n");
printf("Total Bayar : Rp %d\n", grandTotal);
printf("Bonus       : %s\n", kupon);
return 0;
}