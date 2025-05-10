
  float ds,ys,N;
  printf("Dogru sayinizi giriniz:\n");
  scanf("%f",&ds);
  printf("Yanlis sayinizi giriniz:\n");
  scanf("%f",&ys);
  N=ds-(ys/4.0);
  printf("Net sayiniz:%f'dir.\n",N);

  if (N<10)
  {printf("Kur adi:Beginner");}

  else if (10<=N && N<30)
  {printf("Kur adi:Elemantary");}

  else if (30<=N && N<50)
  {printf("Kur adi:Preintermediate");}

  else if (50<=N && N<70)
  {printf("Kur adi:Intermadiate");}

  else
  {printf("Kur adi:Upper");}