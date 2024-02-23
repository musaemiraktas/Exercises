#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Bu program sonsuz bir döngü içinde bir sayýnýn Armstrong sayisi olup olmadýðýný çýkan sonuçla birlikte veriyor. Döngü 0 yazýnca sonlanýyor.
//r=pow(3,2) demek r deðiþkenine 3 üssü 2 sayýsýný tanýmlamak demektir.

int main()
{
    int sayi,i,basamak_degeri,sayac=0,uslu_sayi,toplam=0;
    printf("***********Progami sonlandirmak icin giris kismina '0' yazabilirsiniz***********\n\n");

    printf("Sayiyi giriniz: ");
    scanf("%d",&sayi);

    while(sayi!=0)
    {
    i=1,basamak_degeri=0,sayac=0,uslu_sayi=0,toplam=0;


    for(i=1;sayi/i!=0;i*=10)
    {
        sayac = sayac+1;
    }

    for(i=1;sayi/i!=0;i*=10)
    {
        basamak_degeri = (sayi/i)%10;
        uslu_sayi = pow(basamak_degeri,sayac);
        toplam = toplam + uslu_sayi;
    }
    if(toplam==sayi)
    {
        printf("%d sayisi bir Armstrong sayidir.\n\n",sayi);
    }
    else
    {
        printf("%d sayisi Armstrong sayi degildir. (%d sonucu cikar.)\n\n",sayi,toplam);
    }

    printf("Sayiyi giriniz: ");
    scanf("%d",&sayi);

    }
    printf("Program basariyla sonlandirildi!\n");
    return 0;
}
