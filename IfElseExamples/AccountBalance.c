 printf("Hello world!\n");
    float a,b ;
    printf("Kartinizdaki bakiyeyi lutfen giriniz:\n");
    scanf("%f",&a);

    if( a>3.50 )
    {   b=a-4.5;
        printf("Yemeginizi aliniz.\n");
        printf("ucret:4.50\n");
        printf("Kalan bakiye:%.2f'dir\n.",b);
    }


    else
    { printf("Bakiyeniz yetersiz.");}
