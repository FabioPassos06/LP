#include <stdio.h>

int main(void) {
 int A, B, C, A1, A2, A3;//A1, A2, A3:Guardar os valores de A, B e C
 scanf("%d %d %d", &A, &B, &C);

 A1=A;
 A2=B;
 A3=C;

 
  if (A<B && A<C)
   { 
     printf("%d\n", A);
      if (B<C)
      {
        printf("%d\n", B);
        printf("%d\n", C);
      }
     else 
     {
       printf("%d\n", C);
       printf("%d\n", B);
     }
   }
  else if (B<A && B<C) 
  {
    printf("%d\n", B);
     if (A<C)
     {
       printf("%d\n", A);
       printf("%d\n", C);
     }
     else
     {
      printf("%d\n", C);
      printf("%d\n", A);
     }
  }

  else if (C<A && C<B)
   {
     printf("%d\n", C);
      if (A<B)
      {
        printf("%d\n", A);
        printf("%d\n", B);
      }
      else
      {
       printf("%d\n", B);
       printf("%d\n", A);
      }
   }
   printf("\n");
   printf("%d\n", A1);
   printf("%d\n", A2);
   printf("%d\n", A3);

  return 0;
}