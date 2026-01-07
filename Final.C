// İsim Soyisim: Arda Kılıç
// Öğrenci Numarası: 2420161138
// BTK Akademi Sertifika Bağlantısı: https://www.btkakademi.gov.tr/portal/certificate/validate?certificateId=WJ1SkNaBxA


#include <stdio.h>

// Baloncuk Sıralama (Bubble Sort)
void bubbleSort(int dizi[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (dizi[j] > dizi[j + 1]) {
                temp = dizi[j];
                dizi[j] = dizi[j + 1];
                dizi[j + 1] = temp;
            }
        }
    }
}

// İkili Arama (Binary Search)
int binarySearch(int dizi[], int n, int aranan) {
    int sol = 0, sag = n - 1, orta;

    while (sol <= sag) {
        orta = (sol + sag) / 2;

        if (dizi[orta] == aranan)
            return orta; // bulundu
        else if (aranan < dizi[orta])
            sag = orta - 1;
        else
            sol = orta + 1;
    }
    return -1; // bulunamadı
}

int main() {
    int dizi[] = {34, 7, 23, 32, 5, 62};
    int n = sizeof(dizi) / sizeof(dizi[0]);
    int aranan, sonuc, i;

    // Sıralama
    bubbleSort(dizi, n);

    printf("Siralanmis Dizi:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", dizi[i]);
    }

    // Kullanıcıdan sayı alma
    printf("\n\nAranacak sayiyi giriniz: ");
    scanf("%d", &aranan);

    // İkili arama
    sonuc = binarySearch(dizi, n, aranan);

    if (sonuc != -1)
        printf("Sayi dizide bulundu. Indeks: %d\n", sonuc);
    else
        printf("Sayi dizide bulunamadi.\n");

    return 0;
}
