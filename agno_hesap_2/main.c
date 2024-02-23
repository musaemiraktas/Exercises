#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> //toupper fonksiyonunu kullanmak icin. Toupper kucuk harfleri buyuk yapiyor.

//AGNO HESAP
//(toplam agirlikli not) / (toplam AKTS) ile bulunacaktir. [toplam agirlikli not=(derslerin AKTS'si) * (harf notunun katsayisi)]

int main()
{
    int sayi;
    printf("Ders sayinizi giriniz: ");
    scanf("%d",&sayi);

    float a[sayi];
    float c[sayi];
    char b[sayi*2];

    for(int i=0;i<sayi;i++)
    {
        printf("%d. dersin AKTS'si: ",i+1);
        scanf("%f",&a[i]);
        printf("%d. dersin harf notu: ",i+1);
        scanf("%s",&b[i*2]);

    }
    /*printf("\n---------------------------\n");
    for(int j=0;j<sayi;j++)
    {
        printf("%d. dersin AKTS'si: %d\n",j+1,a[j]);
        printf("%d. dersin harf notu: %c%c\n",j+1,b[j*2],b[(j*2)+1]);
    }*/
    printf("\n---------------------------\n");

    for(int k=0;k<sayi;k++)
    {
        if(b[k*2]=='A' && b[(k*2)+1]=='A')
        {
            c[k]=4.0;
        }
        if(b[k*2]=='B' && b[(k*2)+1]=='A')
        {
            c[k]=3.5;
        }
        if(b[k*2]=='B' && b[(k*2)+1]=='B')
        {
            c[k]=3.0;
        }
        if(b[k*2]=='C' && b[(k*2)+1]=='B')
        {
            c[k]=2.5;
        }
        if(b[k*2]=='C' && b[(k*2)+1]=='C')
        {
            c[k]=2.0;
        }
        if(b[k*2]=='D' && b[(k*2)+1]=='C')
        {
            c[k]=1.5;
        }
        if(b[k*2]=='D' && b[(k*2)+1]=='D')
        {
            c[k]=1.0;
        }
        if(b[k*2]=='F' && b[(k*2)+1]=='D')
        {
            c[k]=0.5;
        }
        if(b[k*2]=='F' && b[(k*2)+1]=='F')
        {
            c[k]=0.0;
        }
    }
    //Simdi toplam agirlikli notu buluyorum.
    //float agirlikli[sayi];
    float t_agirlikli=0;
    for(int l=0;l<sayi;l++)
    {
        t_agirlikli=t_agirlikli+(a[l]*c[l]);
    }

    //Simdi toplam AKTS hesabi yapalim.
    float t_akts=0;
    for(int x=0;x<sayi;x++)
    {
        t_akts=t_akts+a[x];
    }
    //Son olarak AGNO hesabiii

    float agno;
    agno=t_agirlikli/t_akts;

    printf("AGNO hesabinizin sonucu: %4.2f",agno);


    return 0;
}
