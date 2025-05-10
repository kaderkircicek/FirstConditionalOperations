printf("Hello world!\n");
    int a,b,c;
    float N,V;
    printf ("Ilk sinav notunuzu giriniz:\n");
    scanf ("%d",&a);
    printf ("Ikinci sinav notunuzu giriniz:\n");
    scanf ("%d",&b);
    printf ("Ucuncu sinav notunuzu giriniz:\n");
    scanf ("%d",&c);
    printf("Genel ortalamanizi giriniz:\n");
    scanf ("%f",&V);
    N=(a+b+c)/3.0;
    printf("Ders not ortalamaniz:%f'dir.\n",N);


    if (N>100)
   {printf("Notunuz puanlama araliginda degildir. Lutfen kontrol edip yeniden giriniz.");}
    else if(90<N && N<=100)
    {printf("Dersten gectiniz. Harf notunuz:AA");}
    else if(85<N && N<=90)
    {printf("Dersten gectiniz. Harf notunuz:AB");}
    else if(80<N && N<=85)
    {printf("Dersten gectiniz. Harf notunuz:BA");}
     else if(75<N && N<=80)
    {printf("Dersten gectiniz. Harf notunuz:BB");}
    else if(70<N && N<=75)
    {printf("Dersten gectiniz. Harf notunuz:CB");}
    else if(65<N && N<=70)
    {printf("Dersten gectiniz. Harf notunuz:CC");}
    else if(60<=N && N<=65)
    { if(V>2.75)
      {printf("Dersten kosullu gectiniz. Harf notunuz:DC\nGenel not ortalamanız düşük dersi tekrar almanizi oneririz.");}
      else
      {printf("Dersten kaldiniz.");}
    }

    else
    {printf("Dersten direkt kaldiniz. Harf notunuz:DD");}