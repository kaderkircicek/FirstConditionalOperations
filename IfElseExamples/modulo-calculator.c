include <stdio.h>
#include <stdlib.h>

int main()
{
  int x,y;
  printf("x degerinii giriniz:");
  scanf("%d",&x);
  printf("y degerini giriniz:");
  scanf ("%d",&y);

  if (x<y)
{printf ("%d mod %d = %d",y,x,y%x);}

  else
  {printf ("%d mod %d = %d",x,y,x%y);}

    return 0;
}
