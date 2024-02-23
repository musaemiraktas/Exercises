#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,dene,sayi;



    printf("Sayiyi giriniz: ");
    scanf("%d",&sayi);

    for(dene=2;dene<=sayi;dene++)
    {
        for(i=2;i<=dene-1;i++)
    {
        if((dene%i)==0)
            break;
    }

    if(i==dene)
        printf("%d\n",dene);
    }





    return 0;
}
