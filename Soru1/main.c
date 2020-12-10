#include <stdio.h>
#include <stdlib.h>


int main()
{
    int dizi[10];
    int *diziPtr;
    int diziCift[10];
    int *diziCiftPtr;
    int diziTek[10];
    int *diziTekPtr;

    diziPtr = &dizi[0];
    diziCiftPtr = &diziCift[0];
    diziTekPtr = &diziTek[0];

    int cift_sayici=0;
    int tek_sayici=0;

    printf("========DIZININ ELEMANLARI========\n");

    //Dizinin elemanlarını rastgele oluşturma
    for(int i=0; i<10; i++)
    {
        int temp;
        temp = rand() % 100 + 1;
        *diziPtr = temp;
        printf("%d\n",*diziPtr);
        diziPtr++;
    }

    diziPtr = &dizi[0];
    //Çift tek ayrımı

    for(int i=0; i<10; i++)
    {
        if(*diziPtr%2 == 0)
        {
            *diziCiftPtr = *diziPtr;
            diziCiftPtr++;
            cift_sayici++;
        }
        else
        {
            *diziTekPtr = *diziPtr;
            diziTekPtr++;
            tek_sayici++;
        }
      diziPtr++;
    }

    diziCiftPtr = &diziCift[0];
    diziTekPtr = &diziTek[0];
    //Ekrana yazdırma
    printf("========CIFT SAYILAR========\n");

    for(int j=0; j<cift_sayici;j++)
    {
        printf("%d\n",*diziCiftPtr);
        diziCiftPtr++;
    }

    printf("========TEK SAYILAR========\n");

     for(int k=0; k<tek_sayici; k++)
    {
        printf("%d\n",*diziTekPtr);
        diziTekPtr++;
    }
    return 0;
}
