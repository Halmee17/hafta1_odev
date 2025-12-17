#include <stdio.h>

void diziyiYazdir(int arr[], int boyut) {
    for (int i = 0; i < boyut; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int dizi[10] = {10, 20, 30, 40, 50}; 
    int boyut = 5;

    printf("Ilk hali: ");
    diziyiYazdir(dizi, boyut);


    dizi[boyut] = 60;
    boyut++;
    printf("Ekleme sonrasi: ");
    diziyiYazdir(dizi, boyut);


    int silinecekIndeks = 2;
    for (int i = silinecekIndeks; i < boyut - 1; i++) {
        dizi[i] = dizi[i + 1];
    }
    boyut--;
    printf("Cikarma sonrasi: ");
    diziyiYazdir(dizi, boyut);

 
    for (int i = 0; i < boyut / 2; i++) {
        int gecici = dizi[i];
        dizi[i] = dizi[boyut - 1 - i];
        dizi[boyut - 1 - i] = gecici;
    }
    printf("Tersine cevrilmis hali: ");
    diziyiYazdir(dizi, boyut);

    return 0;
}
