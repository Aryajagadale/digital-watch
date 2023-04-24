#include<stdio.h>

int main ()

{
    int h, m, s;
    int d=1000; //

  printf("SET TIME:\n");
  scanf("%d%d%d",&h,&m,&s);

  if(h>12 || m>60 || s>60)
  { printf("error\n");
    return 1;
  }

  while(1)
  {
       s++;

     if(s>59)
      {
         m=1;
         s=0;
      }

     if(m>59)
     {
        h=1;
        m=0;
     }

    if(h>12)
    {
        h=1;
    }

   printf("\n CLOCK :\n ");
   printf("%.2d:%.2d:%.2d",h,m,s);

   Sleep(d);
   system("cls");

  }
  return 0;
}
