// İsim Soyisim: Arda Kılıç
// Öğrenci Numarası: 2420161138
// BTK Akademi Sertifika Bağlantısı: https://www.btkakademi.gov.tr/portal/certificate/validate?certificateId=WJ1SkNaBxA

#include <stdio.h>

// Algoritma: Baloncuk Sıralama 
// Komşu elemanları karşılaştırarak en büyüğü sona atar.
void baloncukSirala(int dizi[], int n) {
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

// Algoritma: Seçmeli Sıralama 
// Her adımda en küçük elemanı bulup başa yerleştirir.
void secmeliSirala(int dizi[], int n) {
    int i, j, minlndex, temp;
    for (i = 0; i < n - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (dizi[j] < dizi[minIndex]) {
                minIndex = j;
            }
        }
        if (minlndex != i) {
            temp = dizi[i];
            dizi[i] = dizi[minlndex];
            dizi[minlndex] = temp;
        }
    }
}

// Algoritma: Araya Ekleme Sıralaması (ınsertion Sort)
// Elemanları tek tek alıp doğru konuma yerleştirir.
void arayaEklemeSirala(int dizi[], int n) {
    int i, j, key;
    for (i = 1; i < n; i++) {
        key = dizi[i];
        j = i - 1;
        while (j >= 0 && dizi[j] > key) {
            dizi[j + 1] = dizi[j];
            j--;
        }
        dizi[j + 1] = key;
    }
}

// İkili Arama (Binary Search)
// Sıralanmış dizi üzerinde hızlıca arama yapar.
int ikiliArama(int dizi[], int n, int aranan) {
    int bas = 0;
    int son = n - 1;
    int orta;
    while (bas <= son) {
        orta = (bas + son) / 2;
        if (dizi[orta] == aranan)
            return orta;
        else if (aranan > dizi[orta])
            bas = orta + 1;
        else
            son = orta - 1;
    }
    return -1;
}

int main() {
    // Örnek dizi tanımlandı
    int sayilar[] = {21, 13, 9, 12, 4};
    int n = sizeof(sayilar) / sizeof(sayilar[0]);
    int secim, aranan, sonuc;
    int i;

    printf("Hangi siralama algoritmasini kullanmak istersiniz?\n");
    printf("1. Baloncuk Siralama (Bubble Sort)\n");
    printf("2. Secmeli Siralama (Selection Sort)\n");
    printf("3. Araya Ekleme Siralama (Insertion Sort)\
